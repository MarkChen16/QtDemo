#pragma once

#include <QtNetwork>
#include <QTcpServer>

#include <qthread.h>
#include <qthreadpool.h>

#include <qfile.h>
#include <qdatastream.h>
#include <qbytearray.h>

#include <qlist.h>

class ClientRequest;

class ThreadedTcpServer : public QTcpServer
{
	Q_OBJECT

public:
	ThreadedTcpServer(QObject * parent = Q_NULLPTR);
	~ThreadedTcpServer();

	bool startListen(QString hostName, int hostPort);
	void stopListen();

	void closeAllRequest();

	private slots:
	void addClientRequest();
	void delClientRequest();

protected:
	void incomingConnection(qintptr socketDescriptor);

private:
	QList<ClientRequest *> mRequestList;
	QMutex mMutex;
};

class ClientRequest : public QThread
{
	Q_OBJECT

private:
	ClientRequest(qintptr socketDescriptor, QObject *parent = nullptr);

public:
	virtual ~ClientRequest();

	void setHandle(qintptr socketDescriptor);
	void run();

	private slots:
	void on_destroyed();

private:
	qintptr mSocketDescriptor;

	friend class ThreadedTcpServer;
};

