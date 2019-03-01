#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_UdpDemo.h"

#include <qlabel.h>

#include <QtNetwork>

class UdpDemo : public QMainWindow
{
	Q_OBJECT

public:
	UdpDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_readyRead();
	void on_stateChanged(QAbstractSocket::SocketState state);

	void on_actBind_triggered();
	void on_actUnbind_triggered();

	void on_actJoinGroup_triggered();
	void on_actLeaveGroup_triggered();

	void on_actClear_triggered();
	void on_actQuit_triggered();

	void on_btnSendMsg_clicked();
	void on_btnBroadCast_clicked();
	void on_btnMulticast_clicked();
private:
	Ui::UdpDemoClass ui;

	QLabel *m_labState;

	QUdpSocket *mUdpSocket;

	QHostAddress mGroupAddr;
};
