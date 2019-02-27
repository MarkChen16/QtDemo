#include "ClientRunnable.h"

#pragma execution_character_set("UTF-8")


ClientRunnable::ClientRunnable(int seq)
{
	mSeq = seq;
}

void ClientRunnable::run()
{
	QTcpSocket *client = new QTcpSocket();
	client->connect(client, &QAbstractSocket::disconnected, client, &QObject::deleteLater);

	QHostAddress addr("192.168.249.134");
	client->connectToHost(addr, 8008);
	qDebug() << "开始连接";

	if (client->waitForConnected() == false)
	{
		qDebug() << "连接服务器超时，返回错误：" + client->errorString();
		return;
	}

	QDataStream ds(client);
	ds.setVersion(QDataStream::Qt_4_0);

	QString strMsg = QString::asprintf("Client%d: %s", mSeq, "Server, how are you?");
	ds << strMsg;
	client->waitForBytesWritten();
	qDebug() << "发送数据：" + strMsg;

	client->waitForReadyRead();
	ds >> strMsg;
	qDebug() << "接收数据：" + strMsg;

	client->waitForDisconnected();
	qDebug() << "关闭连接";
}
