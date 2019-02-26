#pragma once
#include <QtNetwork>
#include <QThread.h>

#include <qbytearray.h>

class TcpServer : public QThread
{
	Q_OBJECT

public:
	TcpServer(QString szHostName, int intPort, QObject * parent);
	~TcpServer();

	bool startServer();
	bool stopServer();

signals:
	void closeRequest();

protected:
	void run() override;

private:
	bool mAskForStop;
	QMutex mMutex;

	QTcpServer *mServer;
	QString mHostName;
	int mPort;
};

//==========================================
class ClientRequest:public QThread
{
	Q_OBJECT

public:
	ClientRequest(QTcpSocket *client);

protected:
	void run() override;

private:
	QTcpSocket *mClient;
};