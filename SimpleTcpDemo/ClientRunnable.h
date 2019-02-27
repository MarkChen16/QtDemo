#pragma once
#include <qrunnable.h>
#include <QtNetwork>

class ClientRunnable : public QRunnable
{
public:
	ClientRunnable(int seq);
	~ClientRunnable()
	{
		qDebug() << "del NewClientRunnable";
	}

	void run();

private:
	int mSeq = 0;
};
