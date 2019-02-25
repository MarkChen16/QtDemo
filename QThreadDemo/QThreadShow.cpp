#include "QThreadShow.hpp"

QThreadShow::QThreadShow(QDiceCup &cup, int showType, QObject * parent) : 
	QThread(parent), mCup(cup), mShowType(showType)
{
	
}

QThreadShow::~QThreadShow() 
{
	
}

void QThreadShow::askForStop()
{
	//请求退出
	{
		QMutexLocker locker(&mMutex);

		mAskForStop = true;
	}

	//等待退出
	this->wait();
}

void QThreadShow::run()
{
	QDiceResult oldRev;

	while (true)
	{
		this->msleep(1000);

		//判断是否退出
		{
			QMutexLocker locker(&mMutex);

			if (mAskForStop == true) break;
		}

		if (mShowType == 0)
		{
			QDiceResult result = mCup.currentResultCopy();

			if (oldRev.seq == result.seq) return;
			else oldRev = result;

			QDiceBuff buff;
			buff << result;

			QVariant var;
			var.setValue(buff);

			emit ShowValue(var);
		}
		else if (mShowType == 1)
		{
			QDiceBuff buff = mCup.currentBuff();

			if (buff.count() > 0)
			{
				QVariant var;
				var.setValue(buff);

				emit ShowValue(var);
			}
		}
		else if (mShowType == 2)
		{
			QDiceBuff buff = mCup.historyBuff();

			if (buff.count() > 0)
			{
				QVariant var;
				var.setValue(buff);

				emit ShowValue(var);
			}
		}
	}

	this->quit();
}
