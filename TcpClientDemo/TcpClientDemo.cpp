#include "TcpClientDemo.h"

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")

TcpClientDemo::TcpClientDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void TcpClientDemo::on_btnConnect_clicked()
{
	QTcpSocket *mClient = new QTcpSocket();
	connect(mClient, SIGNAL(disconnected()), mClient, SLOT(deleteLater()));
	connect(mClient, SIGNAL(readyRead()), this, SLOT(on_readyRead()));

	QHostAddress addr("192.168.249.134");
	mClient->connectToHost(addr, 8008);
	if (!mClient->waitForConnected())
	{
		QMessageBox::warning(this, "警告", "连接主机失败，返回错误：" + mClient->errorString());
		return;
	}

	QDataStream ds(mClient);
	ds.setVersion(QDataStream::Qt_4_0);

	ds << QString("Client") << QString("how are you?");
	mClient->waitForBytesWritten();
}

void TcpClientDemo::on_btnQuit_clicked()
{
	this->close();
}

void TcpClientDemo::on_readyRead()
{
	QTcpSocket *mClient = (QTcpSocket *)sender();

	QDataStream ds(mClient);
	ds.setVersion(QDataStream::Qt_4_0);

	QString strWho, strWords;
	ds.startTransaction();
	ds >> strWho >> strWords;
	if (!ds.commitTransaction()) return;

	mClient->waitForDisconnected();

	QMessageBox::information(this, "提示",  strWho + "：" + strWords);
}
 