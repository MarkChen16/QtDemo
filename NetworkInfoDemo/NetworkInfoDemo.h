#pragma once

#include <QtWidgets/QDialog>
#include "ui_NetworkInfoDemo.h"

#include <QtNetwork>

class NetworkInfoDemo : public QDialog
{
	Q_OBJECT

public:
	NetworkInfoDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnGetHostInfo1_clicked();
	void on_btnGetHostInfo2_clicked();
	void on_btnGetHostInfo3_clicked();
	void on_btnGetNetworkInterface_clicked();

	void onShowInfo(const QHostInfo &info);

private:
	Ui::NetworkInfoDemoClass ui;
};
