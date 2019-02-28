#pragma once

#include <QtWidgets/QDialog>
#include "ui_TcpClientDemo.h"

#include <QtNetwork>
#include <qdatastream.h>

class TcpClientDemo : public QDialog
{
	Q_OBJECT

public:
	TcpClientDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnConnect_clicked();
	void on_btnQuit_clicked();

	void on_readyRead();

private:
	Ui::TcpClientDemoClass ui;
};
