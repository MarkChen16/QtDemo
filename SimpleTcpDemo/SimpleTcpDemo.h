#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SimpleTcpDemo.h"

#include <qlabel.h>
#include <QtNetwork>
#include <qdatastream.h>
#include <QtConcurrent\qtconcurrentrun.h>

#include "ClientRunnable.h"


class SimpleTcpDemo : public QMainWindow
{
	Q_OBJECT

public:
	SimpleTcpDemo(QWidget *parent = Q_NULLPTR);

	void closeEvent(QCloseEvent *event) override;

	bool runFun(int seq);

	private slots:
	void on_actStart_triggered();
	void on_actStop_triggered();
	void on_actNewClient_triggered();
	void on_actQuit_triggered();

	void on_newConnection();

private:
	Ui::SimpleTcpDemoClass ui;

	QLabel *labState;

	QTcpServer *mServer;

	int mSeq = 0;
};
