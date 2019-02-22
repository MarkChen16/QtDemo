#include "QDiceCup.h"

#include <qdatetime.h>

QDiceCup::QDiceCup(QObject * parent) : QThread(parent) {
	
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

	mMutexBuff.lock();
	mWCBuff.wait(&mMutexBuff);	//等待通知
	buff = mBuff;
	mMutexBuff.unlock();

	return buff;
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
				if (mBuff.count() >= 10) mBuff.clear();

				mBuff << result;
				cnt = mBuff.count();

				mMutexBuff.unlock();

				//如果缓存器大于等于10，则唤醒所有等待的线程
				if (cnt >= 10) mWCBuff.wakeAll();
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
