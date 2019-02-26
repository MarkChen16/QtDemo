#pragma once
#include <QtNetwork>
#include <QThread.h>

#include <qbytearray.h>

class TcpServer : public QThread
{
	Q_OBJECT

public:
	TcpServer(QObject * parent = nullptr);
	~TcpServer();

	bool startServer();
	bool stopServer();

protected:
	void run() override;

private:
	bool mAskForStop;
	QMutex mMutex;
};
