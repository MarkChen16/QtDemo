#include "TcpServer.h"

TcpServer::TcpServer(QString szHostName, int intPort, QObject * parent) :
	QThread(parent)	//通过父子关系自动调用delete释放内存
{
	mAskForStop = false;

	mServer = new QTcpServer(parent);
	mHostName = szHostName;
	mPort = intPort;
}

TcpServer::~TcpServer() 
{
	stopServer();
}

bool TcpServer::startServer()
{
	if (this->isRunning()) return true;

	//开始监听
	QHostAddress addr(mHostName);
	if (!mServer->listen(addr, mPort)) return false;

	//启动线程
	this->start();

	return true;
}

bool TcpServer::stopServer()
{
	if (!this->isRunning()) return true;

	//停止线程
	{
		QMutexLocker locker(&mMutex);
		mAskForStop = true;
	}
	this->wait();

	//停止监听
	mServer->close();

	return true;
}

void TcpServer::run()
{
	while (true)
	{
		//判断是否退出监听
		{
			QMutexLocker locker(&mMutex);
			if (mAskForStop) break;
		}

		//等待新的连接
		if (mServer->waitForNewConnection(10))
		{
			//获得新的连接SOCKET
			QTcpSocket *newConn = mServer->nextPendingConnection();

			//启动新的线程处理连接请求
			ClientRequest *newClient = new ClientRequest(newConn);
			newClient->start();
		}
	}

	this->quit();
}

//=================================================
ClientRequest::ClientRequest(QTcpSocket *client):
	QThread(nullptr)	//不通过父子关系delete
{
	//通过DeleteLaster，finished后立即调用delete释放内存
	connect(this, SIGNAL(finished()), this, SLOT(deleteLater()));
	
	mClient = client;
}

void ClientRequest::run()
{
	//接收数据
	QByteArray arrRead = mClient->readAll();

	//发送数据
	QByteArray arrWrite = "Fine, How are you?";
	mClient->write(arrWrite);

	//关闭连接
	mClient->close();

	this->quit();
}
