#include "TcpServerDemo.h"

TcpServerDemo::TcpServerDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.lstMsg);

	mServer = new TcpServer("127.0.0.1", 8008, this);
	connect(mServer, SIGNAL(started()), this, SLOT(onStarted()));
	connect(mServer, SIGNAL(finished()), this, SLOT(onStoped()));
}

void TcpServerDemo::on_actStart_triggered()
{
	mServer->startServer();
}

void TcpServerDemo::on_actStop_triggered()
{
	mServer->stopServer();
}

void TcpServerDemo::on_actQuit_triggered()
{
	this->close();
}

void TcpServerDemo::onStarted()
{
	ui.actStart->setEnabled(false);
	ui.actStop->setEnabled(true);
}

void TcpServerDemo::onStoped()
{
	ui.actStart->setEnabled(true);
	ui.actStop->setEnabled(false);
}
