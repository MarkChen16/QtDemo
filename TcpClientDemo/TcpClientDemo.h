#pragma once

#include <QtWidgets/QDialog>
#include "ui_TcpClientDemo.h"

#include "ThreadedTcpClient.hpp"

class TcpClientDemo : public QDialog
{
	Q_OBJECT

public:
	TcpClientDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnConnect_clicked();
	void on_btnQuit_clicked();

	void on_updateProgress(int iValue);

private:
	Ui::TcpClientDemoClass ui;

	ThreadedTcpClient *mClient;
};
