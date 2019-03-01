#include "ThreadedTcpClient.hpp"

ThreadedTcpClient::ThreadedTcpClient(QObject * parent) : QThread(parent) {
	
}

ThreadedTcpClient::~ThreadedTcpClient() {
	
}

void ThreadedTcpClient::run()
{
	QTcpSocket *mClient = new QTcpSocket();
	mClient->setReadBufferSize(1024 * 1024);

	connect(mClient, SIGNAL(disconnected()), mClient, SLOT(deleteLater()));

	QHostAddress addr("192.168.249.134");
	mClient->connectToHost(addr, 8008);
	if (!mClient->waitForConnected())
	{
		this->quit();
		return;
	}

	qDebug() << "connected";

	//创建流对象
	QDataStream ds(mClient);
	ds.setVersion(QDataStream::Qt_4_0);

	//接收数据大小
	int intReadSize = 0;
	int intSize = 0;
	bool bOk = true;

	mClient->waitForReadyRead();
	ds >> intSize;

	ds << bOk;
	mClient->flush();
	mClient->waitForBytesWritten();

	//接收数据块
	int intTime = 0;
	while (intReadSize < intSize)
	{
		//接收数据块
		if (!mClient->waitForReadyRead()) break;
		QByteArray arrTmp;
		ds >> arrTmp;

		if (arrTmp.count() == 0) continue;

		intTime++;
		qDebug() << QString("%1 Times Read = %2").arg(intTime).arg(arrTmp.count());

		//接收响应
		ds << bOk;
		mClient->flush();
		mClient->waitForBytesWritten();

		intReadSize += arrTmp.count();

		float fValue = 100.0 * intReadSize / intSize;
		emit updateProgress(fValue);
	}

	qDebug() << "finished";
	if (mClient->state() == QTcpSocket::ConnectedState) mClient->waitForDisconnected();

	this->quit();
}
