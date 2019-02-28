#include "ThreadedTcpServer.h"


//静态成员在.cpp文件中定义，而模块声明和定义都在.h文件
QByteArray ThreadedTcpServer::mFILE_DATA;
QMutex ThreadedTcpServer::mMUTEX;

ThreadedTcpServer::ThreadedTcpServer(QString hostName, int hostPort, QObject * parent) :
	QObject(parent)
{
	mHostName = hostName;
	mHostPort = hostPort;

	mServer = new QTcpServer(this);
	connect(mServer, SIGNAL(newConnection()), this, SLOT(on_newConnection()));
}

ThreadedTcpServer::~ThreadedTcpServer()
{
	if (mServer->isListening())	mServer->close();
}

bool ThreadedTcpServer::startListen()
{
	if (mServer->isListening()) return true;

	QHostAddress addr(mHostName);
	bool bRev = mServer->listen(addr, mHostPort);

	if (bRev) emit started();

	return bRev;
}

void ThreadedTcpServer::stopListen()
{
	if (mServer->isListening())	mServer->close();

	emit stoped();
}

QString ThreadedTcpServer::errorString()
{
	return mServer->errorString();
}

void ThreadedTcpServer::on_newConnection()
{
	//获得新的客户端连接
	QTcpSocket *mClient = mServer->nextPendingConnection();
	connect(mClient, SIGNAL(disconnected()), mClient, SLOT(deleteLater()));	//连接关闭后自动删除
	connect(mClient, SIGNAL(readyRead()), this, SLOT(on_readyRead()));
}

void ThreadedTcpServer::on_readyRead()
{
	QTcpSocket *mClient = (QTcpSocket *)sender();

	//创建流对象
	QDataStream ds(mClient);
	ds.setVersion(QDataStream::Qt_4_0);

	//接收请求
	QString strWho, strWords;
	ds.startTransaction();
	ds >> strWho >> strWords;

	if (!ds.commitTransaction()) return;

	//处理请求
	//QThread::currentThread()->msleep(3000);

	//发送响应
	ds << QString("Server") << QString("Success!");
	mClient->waitForBytesWritten();

	mClient->disconnectFromHost();
}
