#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TcpServerDemo.h"

#include "TcpServer.h"

class TcpServerDemo : public QMainWindow
{
	Q_OBJECT

public:
	TcpServerDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_actStart_triggered();
	void on_actStop_triggered();
	void on_actQuit_triggered();

	void onStarted();
	void onStoped();

private:
	Ui::TcpServerDemoClass ui;

	TcpServer *mServer;
};
