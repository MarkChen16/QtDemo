#include "ThreadedTcpDemo.h"

ThreadedTcpDemo::ThreadedTcpDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	mServer = new ThreadedTcpServer("192.168.249.134", 8008, this);
	connect(mServer, SIGNAL(started()), this, SLOT(on_started()));
	connect(mServer, SIGNAL(stoped()), this, SLOT(on_stoped()));

	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);

	this->setCentralWidget(ui.lstMsg);
}

void ThreadedTcpDemo::on_actStart_triggered()
{
	mServer->startListen();
}

void ThreadedTcpDemo::on_actStop_triggered()
{
	mServer->stopListen();
}

void ThreadedTcpDemo::on_actQuit_triggered()
{
	this->close();
}

void ThreadedTcpDemo::on_started()
{
	ui.actStart->setEnabled(false);
	ui.actStop->setEnabled(true);
}

void ThreadedTcpDemo::on_stoped()
{
	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);
}
