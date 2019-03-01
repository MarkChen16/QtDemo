#pragma once
#include <QThread>

#include <QtNetwork>
#include <qdatastream.h>


class ThreadedTcpClient : public QThread {
	Q_OBJECT

public:
	ThreadedTcpClient(QObject * parent = Q_NULLPTR);
	~ThreadedTcpClient();

	void run() override;

signals:
	void updateProgress(int iValue);

private:
	
};
