#include "ThreadedTcpDemo.h"

ThreadedTcpDemo::ThreadedTcpDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	mServer = new ThreadedTcpServer(this);

	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);

	this->setCentralWidget(ui.lstMsg);
}

void ThreadedTcpDemo::on_actStart_triggered()
{
	if (mServer->startListen("192.168.249.134", 8008))
	{
		ui.actStart->setEnabled(false);
		ui.actStop->setEnabled(true);
	}
}

void ThreadedTcpDemo::on_actStop_triggered()
{
	mServer->stopListen();
	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);
}

void ThreadedTcpDemo::on_actQuit_triggered()
{
	this->close();
}
