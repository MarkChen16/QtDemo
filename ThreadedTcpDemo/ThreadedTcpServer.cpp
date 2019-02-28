#include "ThreadedTcpServer.h"


ThreadedTcpServer::ThreadedTcpServer(QObject * parent) :
	QTcpServer(parent)
{

}

ThreadedTcpServer::~ThreadedTcpServer()
{
	closeAllRequest();

	stopListen();
}

bool ThreadedTcpServer::startListen(QString hostName, int hostPort)
{
	QHostAddress addr(hostName);
	return this->listen(addr, hostPort);
}

void ThreadedTcpServer::stopListen()
{
	this->close();
}

void ThreadedTcpServer::closeAllRequest()
{
	QMutexLocker locker(&mMutex);

	for each (ClientRequest *cr in mRequestList)
	{
		cr->quit();
	}
}

void ThreadedTcpServer::addClientRequest()
{
	QMutexLocker locker(&mMutex);

	mRequestList << (ClientRequest *)sender();

	qDebug() << QString("add ClientRequest");
}

void ThreadedTcpServer::delClientRequest()
{
	QMutexLocker locker(&mMutex);

	int intIndex = mRequestList.indexOf((ClientRequest *)sender(), 0);
	if (intIndex >= 0) mRequestList.removeAt(intIndex);

	qDebug() << QString("del ClientRequest");
}

void ThreadedTcpServer::incomingConnection(qintptr socketDescriptor)
{
	//多线程服务端：重写incomingConnection，通过socketDescriptor在子线程上创建QTcpSocket对象用于通信，处理客户端请求
	ClientRequest *newRequest = new ClientRequest(socketDescriptor);

	connect(newRequest, SIGNAL(started()), this, SLOT(addClientRequest()));		//线程启动后添加到列表
	connect(newRequest, SIGNAL(finished()), this, SLOT(delClientRequest()));	//线程结束后从列表删除

	connect(newRequest, SIGNAL(finished()), newRequest, SLOT(deleteLater()));	//线程结束后自动删除

	newRequest->start();
}

ClientRequest::ClientRequest(qintptr socketDescriptor, QObject *parent) : QThread(parent)
{
	mSocketDescriptor = socketDescriptor;
}

ClientRequest::~ClientRequest()
{
	qDebug() << "ClientRequest destruct().";
}

void ClientRequest::setHandle(qintptr socketDescriptor)
{
	mSocketDescriptor = socketDescriptor;
}

void ClientRequest::run()
{
	QTcpSocket *mClient = new QTcpSocket();
	mClient->setSocketDescriptor(mSocketDescriptor);

	connect(mClient, SIGNAL(disconnected()), mClient, SLOT(deleteLater()));	//关闭后自动删除
	connect(mClient, SIGNAL(destroyed()), this, SLOT(on_destroyed()));		//删除时输出提示信息

	//创建流对象
	QDataStream ds(mClient);
	ds.setVersion(QDataStream::Qt_4_0);

	//接收请求
	mClient->waitForReadyRead();
	QString strWho, strWords;
	ds >> strWho >> strWords;

	//处理请求
	QThread::currentThread()->msleep(10 * 1000);

	//发送响应
	ds << QString("Server") << QString("Success!");
	mClient->waitForBytesWritten();

	//关闭连接
	mClient->disconnectFromHost();

	this->quit();
}

void ClientRequest::on_destroyed()
{
	qDebug() << "QTcpSocket destoryed.";
}
