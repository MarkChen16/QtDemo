#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ThreadedTcpDemo.h"

#include "ThreadedTcpServer.h"

#include <QtConcurrent\qtconcurrentrun.h>

class ThreadedTcpDemo : public QMainWindow
{
	Q_OBJECT

public:
	ThreadedTcpDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_actStart_triggered();
	void on_actStop_triggered();
	void on_actQuit_triggered();

private:
	Ui::ThreadedTcpDemoClass ui;

	ThreadedTcpServer *mServer;
};

