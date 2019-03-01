#include "TcpClientDemo.h"

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")

TcpClientDemo::TcpClientDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	mClient = new ThreadedTcpClient(this);
	connect(mClient, SIGNAL(updateProgress(int)), this, SLOT(on_updateProgress(int)));
}

void TcpClientDemo::on_btnConnect_clicked()
{
	mClient->terminate();
	mClient->wait();

	mClient->start();
}

void TcpClientDemo::on_btnQuit_clicked()
{
	mClient->terminate();
	mClient->wait();

	this->close();
}

void TcpClientDemo::on_updateProgress(int iValue)
{
	ui.pbData->setValue(iValue);
}
