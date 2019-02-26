#include "TcpServer.h"

TcpServer::TcpServer(QObject * parent) :
	QThread(parent)
{
	mAskForStop = false;
}

TcpServer::~TcpServer() 
{
	stopServer();
}

bool TcpServer::startServer()
{
	//开始线程
	if (this->isRunning() == true) return true;

	QMutexLocker locker(&mMutex);

	this->start();
	mAskForStop = false;

	return true;
}

bool TcpServer::stopServer()
{
	//请求停止
	{
		QMutexLocker locker(&mMutex);
		mAskForStop = true;
	}

	return this->wait(5000);
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

		//做点事情
		this->msleep(1000);
	}

	this->quit();
}
