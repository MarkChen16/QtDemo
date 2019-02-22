#pragma once
#include <qthread.h>

#include <qmutex.h>
#include <qreadwritelock.h>
#include <qwaitcondition.h>
#include <qsemaphore.h>

#include <qlist.h>

#include <qmetatype.h>
#include <qvariant.h>

/*
骰子杯说明：
1、每一秒产生3个随机数(1 ~ 6)
2、用十个缓冲器存放每次骰子结果
3、可以在多个地方显示每次结果和每个缓冲器，支持推送和拉取方式
*/

//定义骰子结果
struct QDiceResult
{
	int seq = 0;

	int x = 0;
	int y = 0;
	int z = 0;
};

//注意：定义QDiceResult为元数据类型，通过QVariant封闭在信号槽之间传输复杂数据
Q_DECLARE_METATYPE(QDiceResult)

//定义缓冲器
typedef QList<QDiceResult> QDiceBuff;

class QDiceCup : public QThread {
	Q_OBJECT

public:
	QDiceCup(QObject * parent = Q_NULLPTR);
	~QDiceCup();

	void startCup();
	void pauseCup();
	void resumeCup();
	bool askForStopCup(unsigned long time);
	void stopCup();

	//拉取当前结果
	QDiceResult currentResult();

	QDiceResult currentResultCopy();

	QDiceBuff currentBuff();

signals:
	//推送当前结果
	void createdResult(QVariant var);

protected:
	void run() override;

	QDiceResult createDiceResule();

private:
	int mSeq = 0;

	//当前骰子结果(推送/拉取方式，应用qmutex互斥锁同步)
	QDiceResult mCurrentResult;

	QMutex mMutexCurrent;

	//当前骰子结果副本(拉取方式，应用qreadwritelock读写锁同步)
	QDiceResult mCurrentResultCopy;

	QReadWriteLock mRWLCopy;

	//结果缓存器(结果缓存，应用qmutex互斥锁加上qwaitcondition条件通知同步)
	QDiceBuff mBuff;

	QMutex mMutexBuff;
	QWaitCondition mWCBuff;

	//线程控制
	bool bPaused = false;
	bool bAskForStop = false;

	QMutex mMutexThread;
};
