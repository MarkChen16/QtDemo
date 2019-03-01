#include "ThreadedTcpServer.h"

//静态成员变量
ClientData ClientData::_Instance;

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

	qDebug() << QString("add ClientRequest %1").arg(mRequestList.count());
}

void ThreadedTcpServer::delClientRequest()
{
	QMutexLocker locker(&mMutex);

	int intIndex = mRequestList.indexOf((ClientRequest *)sender(), 0);
	if (intIndex >= 0) mRequestList.removeAt(intIndex);

	qDebug() << QString("del ClientRequest %1").arg(mRequestList.count());
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

void ClientRequest::setDescriptor(qintptr socketDescriptor)
{
	mSocketDescriptor = socketDescriptor;
}

void ClientRequest::run()
{
	//采用长连接的方式，发送文件数据，每次发1K的数据块
	QTcpSocket *mClient = new QTcpSocket();
	mClient->setSocketDescriptor(mSocketDescriptor);
	mClient->setReadBufferSize(1024 * 1024);

	connect(mClient, SIGNAL(disconnected()), mClient, SLOT(deleteLater()));	//关闭后自动删除
	connect(mClient, SIGNAL(destroyed()), this, SLOT(on_destroyed()));		//删除时输出提示信息

	//创建流对象
	QDataStream ds(mClient);
	ds.setVersion(QDataStream::Qt_4_0);

	//获取数据
	QByteArray arrData = ClientData::GetInstance().getData();

	//发送数据大小
	int intPacketSize = 1 * 1024;
	int intSize = arrData.count();
	ds << intSize;
	mClient->flush();
	mClient->waitForBytesWritten();

	mClient->waitForReadyRead();
	bool bOk = false;
	ds >> bOk;

	//发送数据
	while (arrData.count() > 0)
	{
		//发送数据块
		QByteArray arrTmp;
		if (arrData.count() >= intPacketSize)
		{
			arrTmp = arrData.left(intPacketSize);
			arrData.remove(0, intPacketSize);
		}
		else
		{
			arrTmp = arrData;
			arrData.clear();
		}

		ds << arrTmp;
		mClient->flush();
		mClient->waitForBytesWritten();

		//接收响应
		if (!mClient->waitForReadyRead()) break;
		bool bOk = false;
		ds >> bOk;

		if (!bOk) break;
	}

	//关闭连接
	mClient->disconnectFromHost();

	this->quit();
}

void ClientRequest::on_destroyed()
{
	qDebug() << "QTcpSocket destoryed.";
}
