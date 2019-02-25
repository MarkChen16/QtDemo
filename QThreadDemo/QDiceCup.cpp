#include "QDiceCup.h"

#include <qdatetime.h>

QDiceCup::QDiceCup(QObject * parent) : QThread(parent), mSemEmpty(3), mSemFull(0)
{
	
}

QDiceCup::~QDiceCup() {
	
}

void QDiceCup::startCup()
{
	//开始线程
	if (this->isRunning() == true) return;

	QMutexLocker locker(&mMutexThread);

	this->start();
	bPaused = false;
	bAskForStop = false;
}

void QDiceCup::pauseCup()
{
	//暂停
	QMutexLocker locker(&mMutexThread);

	bPaused = true;
}

void QDiceCup::resumeCup()
{
	//继续
	QMutexLocker locker(&mMutexThread);

	bPaused = false;
}

bool QDiceCup::askForStopCup(unsigned long time)
{
	//请求停止
	QMutexLocker locker(&mMutexThread);

	bAskForStop = true;
	return this->wait(time);
}

void QDiceCup::stopCup()
{
	//停止线程
	if (this->isRunning() == false) return;

	this->terminate();
	this->wait();
}

QDiceResult QDiceCup::currentResult()
{
	QDiceResult rev;

	if (mMutexCurrent.tryLock(1000))
	{
		rev = mCurrentResult;
		mMutexCurrent.unlock();
	}

	return rev;
}

QDiceResult QDiceCup::currentResultCopy()
{
	QDiceResult rev;

	if (mRWLCopy.tryLockForRead(1000))
	{
		rev = mCurrentResult;
		mRWLCopy.unlock();
	}

	return rev;
}

QDiceBuff QDiceCup::currentBuff()
{
	QDiceBuff buff;

	if (mMutexBuff.tryLock(1000))
	{
		//等待通知
		if (mWCBuff.wait(&mMutexBuff, 1000))
		{
			buff = mBuff;

			mBuff.clear();
		}
		mMutexBuff.unlock();
	}

	return buff;
}

QDiceBuff QDiceCup::historyBuff()
{
	QDiceBuff rev;

	if (mSemFull.tryAcquire(1, 1000))
	{
		int preIndex = mCurrentIndex - 1;
		if (preIndex < 0) preIndex = 2;

		rev = lstBuff[preIndex];	//复制缓存器
		lstBuff[preIndex].clear();

		mSemEmpty.release();	//有一个空的缓存器可以使用
	}

	return rev;
}

void QDiceCup::run()
{
	qsrand(QTime::currentTime().msec());

	while (bAskForStop == false)
	{
		this->msleep(1000);

		if (bPaused == false)
		{
			//产生新的骰子结果
			QDiceResult result = createDiceResule();

			QVariant var;
			var.setValue(result);

			emit createdResult(var);

			//产生当前骰子结果
			{
				QMutexLocker locker(&mMutexCurrent);
				mCurrentResult = result;
			}

			//产生当前骰子结果副本
			{
				QWriteLocker locker(&mRWLCopy);
				mCurrentResultCopy = result;
			}

			//放入骰子结果缓存器
			{
				int cnt = 0;

				//放入缓存器
				mMutexBuff.lock();

				mBuff << result;
				if (mBuff.count() > 20) mBuff.removeAt(0);	//保持最大容量为20个

				cnt = mBuff.count();

				mMutexBuff.unlock();

				//如果缓存器大于等于10，则唤醒所有等待的线程
				if (cnt >= 10) mWCBuff.wakeAll();
			}

			//放入骰子结果历史缓存器
			{
				//如果当前缓存器已满，则请求一个空的缓存器
				if (lstBuff[mCurrentIndex].count() >= 10)
				{
					if (mSemEmpty.tryAcquire(1, 1000))	//获取一个空的缓存器
					{
						mSemFull.release();	//有了一个满的缓存器

						mCurrentIndex++;
						if (mCurrentIndex == 3) mCurrentIndex = 0;

						lstBuff[mCurrentIndex] << result;
					}
					else
					{
						//暂时没有空的缓存器

					}
				}
				else
				{
					//当前缓存器还没满
					lstBuff[mCurrentIndex] << result;
				}
			}

		}
	}

	this->quit();	//等同于exit(0);
}

QDiceResult QDiceCup::createDiceResule()
{
	QDiceResult rev;

	rev.seq = ++mSeq;
	rev.x = qrand() % 6 + 1;
	rev.y = qrand() % 6 + 1;
	rev.z = qrand() % 6 + 1;

	return rev;
}
