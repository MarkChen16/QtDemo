#include "QThreadDemo.h"

#include "DlgShowCopy.hpp"

#pragma execution_character_set("UTF-8")

QThreadDemo::QThreadDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.splitter);

	bool bOK = false;

	timer = new QTimer(this);
	bOK = connect(timer, SIGNAL(timeout()), this, SLOT(on_timeout()));

	bOK = connect(&cup, SIGNAL(started()), this, SLOT(on_started()));
	bOK = connect(&cup, SIGNAL(finished()), this, SLOT(on_finished()));

	//这个信号和槽不在同一个线程，第五个参数取值为自动、同一线程，不同线程， 阻塞线程，唯一线程
	bOK = connect(&cup, SIGNAL(createdResult(QVariant)), this, SLOT(on_createdResult(QVariant)));

	timer->start(800);
}

void QThreadDemo::closeEvent(QCloseEvent * event)
{
	//触发信号，先关闭所有窗口
	emit closeCup();

	//关闭cup
	if (cup.isRunning()) cup.stopCup();
}

void QThreadDemo::on_actStart_triggered()
{
	cup.startCup();
}

void QThreadDemo::on_actPauseResume_triggered(bool bChecked)
{
	if (bChecked)
	{
		cup.pauseCup();
		ui.actPauseResume->setText("继续线程");
	}
	else
	{
		cup.resumeCup();
		ui.actPauseResume->setText("暂停线程");
	}
}

void QThreadDemo::on_actAskForStop_triggered()
{
	cup.askForStopCup(10000);
}

void QThreadDemo::on_actStop_triggered()
{
	cup.stopCup();
}

void QThreadDemo::on_actShowCopy_triggered()
{
	DlgShowCopy *DlgShow = new DlgShowCopy(0, "显示副本", this);
	DlgShow->setAttribute(Qt::WA_DeleteOnClose);
	DlgShow->setWindowFlag(Qt::Dialog, true);
	DlgShow->setWindowFlag(Qt::WindowStaysOnTopHint, true);

	connect(this, SIGNAL(closeCup()), DlgShow, SLOT(close()));	//将信号绑定在槽函数

	DlgShow->show();
}

void QThreadDemo::on_actShowBuff_triggered()
{
	DlgShowCopy *DlgShow = new DlgShowCopy(1, "显示结果缓存", this);
	DlgShow->setAttribute(Qt::WA_DeleteOnClose);
	DlgShow->setWindowFlag(Qt::Dialog, true);
	DlgShow->setWindowFlag(Qt::WindowStaysOnTopHint, true);

	connect(this, SIGNAL(closeCup()), DlgShow, SLOT(close()));

	DlgShow->show();
}

void QThreadDemo::on_actShowHistory_triggered()
{
	DlgShowCopy *DlgShow = new DlgShowCopy(2, "显示历史缓存", this);
	DlgShow->setAttribute(Qt::WA_DeleteOnClose);
	DlgShow->setWindowFlag(Qt::Dialog, true);
	DlgShow->setWindowFlag(Qt::WindowStaysOnTopHint, true);

	connect(this, SIGNAL(closeCup()), DlgShow, SLOT(close()));

	DlgShow->show();
}

void QThreadDemo::on_actQuit_triggered()
{
	this->close();
}

void QThreadDemo::on_started()
{
	ui.actStart->setEnabled(false);
	ui.actPauseResume->setEnabled(true);
	ui.actAskForStop->setEnabled(true);
	ui.actStop->setEnabled(true);
	ui.actShowCopy->setEnabled(true);
	ui.actShowBuff->setEnabled(true);
	ui.actShowHistory->setEnabled(true);
}

void QThreadDemo::on_finished()
{
	ui.actStart->setEnabled(true);
	ui.actPauseResume->setEnabled(false);
	ui.actAskForStop->setEnabled(false);
	ui.actStop->setEnabled(false);
	ui.actShowCopy->setEnabled(false);
	ui.actShowBuff->setEnabled(false);
	ui.actShowHistory->setEnabled(false);
}

void QThreadDemo::on_createdResult(QVariant var)
{
	QDiceResult result = var.value<QDiceResult>();	//获取QVariant的值，从而获取复杂类型参数的值

	QString strInfo = QString::asprintf("%d Times: (%d %d %d)", result.seq, result.x, result.y, result.z);

	ui.lstDice->insertItem(0, strInfo);
}

void QThreadDemo::on_timeout()
{
	static QDiceResult oldRev;
	QDiceResult result = cup.currentResult();
	if (oldRev.seq == result.seq) return;

	oldRev = result;

	QString strInfo = QString::asprintf("%d Times: (%d %d %d)", result.seq, result.x, result.y, result.z);

	ui.lstDicePush->insertItem(0, strInfo);
}
