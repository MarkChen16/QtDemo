#pragma once

#include <QtNetwork>
#include <QTcpServer>

#include <qthread.h>
#include <qthreadpool.h>

#include <qfile.h>
#include <qdatastream.h>
#include <qbytearray.h>

class ThreadedTcpServer : public QObject 
{
	Q_OBJECT

public:

	ThreadedTcpServer(QString hostName, int hostPort, QObject * parent = Q_NULLPTR);
	~ThreadedTcpServer();

	bool startListen();
	void stopListen();

	QString errorString();

signals:
	void started();
	void stoped();

	private slots:
	void on_newConnection();
	void on_readyRead();

private:
	QTcpServer *mServer;

	QString mHostName;
	int mHostPort;

	static QByteArray mFILE_DATA;
	static QMutex mMUTEX;
};
