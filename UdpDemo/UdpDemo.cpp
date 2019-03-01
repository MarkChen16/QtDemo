#include "UdpDemo.h"

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")


UdpDemo::UdpDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	m_labState = new QLabel(this);
	m_labState->setMinimumWidth(300);
	m_labState->setText("×´Ì¬£º");
	ui.statusBar->addWidget(m_labState);

	mUdpSocket = new QUdpSocket(this);
	connect(mUdpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(on_stateChanged(QAbstractSocket::SocketState)));
	connect(mUdpSocket, SIGNAL(readyRead()), this, SLOT(on_readyRead()));

	//³õÊ¼»¯×´Ì¬
	on_stateChanged(mUdpSocket->state());

	this->setCentralWidget(ui.groupBox);
}

void UdpDemo::on_readyRead()
{
	//ÊÇ·ñ´æÔÚ¹ÒÆðµÄÊý¾Ý±¨ÎÄ
	while (mUdpSocket->hasPendingDatagrams())
	{
		QByteArray arr;
		arr.resize(mUdpSocket->pendingDatagramSize());

		QHostAddress peerAddr;
		quint16 peerPort;

		quint64 qiRead = mUdpSocket->readDatagram(arr.data(), arr.size(), &peerAddr, &peerPort);
		if (qiRead != -1)
		{
			peerAddr = QHostAddress(peerAddr.toIPv4Address());

			QString szMsg = QString("%1 %2[%3]: %4").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(peerAddr.toString()).arg(peerPort).arg(arr.data());

			ui.lstMsg->insertItem(0, szMsg);
		}
	}
}

void UdpDemo::on_stateChanged(QAbstractSocket::SocketState state)
{
	switch (state)
	{
	case QAbstractSocket::UnconnectedState:
		m_labState->setText("×´Ì¬£ºUnconnectedState");
		break;
	case QAbstractSocket::HostLookupState:
		m_labState->setText("×´Ì¬£ºHostLookupState");
		break;
	case QAbstractSocket::ConnectingState:
		m_labState->setText("×´Ì¬£º");
		break;
	case QAbstractSocket::ConnectedState:
		m_labState->setText("×´Ì¬£ºConnectingState");
		break;
	case QAbstractSocket::BoundState:
		m_labState->setText("×´Ì¬£ºBoundState");
		break;
	case QAbstractSocket::ListeningState:
		m_labState->setText("×´Ì¬£ºListeningState");
		break;
	case QAbstractSocket::ClosingState:
		m_labState->setText("×´Ì¬£ºClosingState");
		break;
	}
}

void UdpDemo::on_actBind_triggered()
{
	quint16 port = ui.sbBindPort->value();

	if (mUdpSocket->bind(port))
	{
		ui.actBind->setEnabled(false);
		ui.actUnbind->setEnabled(true);
		ui.btnSendMsg->setEnabled(true);
		ui.btnBroadCast->setEnabled(true);
		
		ui.actJoinGroup->setEnabled(false);
		ui.actJoinGroup->setEnabled(false);
		ui.btnMulticast->setEnabled(false);
	}
	else
	{
		QMessageBox::warning(this, "´íÎó", QString("°ó¶¨¶Ë¿ÚÊ§°Ü£¬·µ»Ø´íÎó{%1}").arg(mUdpSocket->errorString()));
	}
}

void UdpDemo::on_actUnbind_triggered()
{
	mUdpSocket->abort();

	ui.actBind->setEnabled(true);
	ui.actUnbind->setEnabled(false);
	ui.btnSendMsg->setEnabled(false);
	ui.btnBroadCast->setEnabled(false);
	
	ui.actJoinGroup->setEnabled(true);
	ui.actJoinGroup->setEnabled(false);
	ui.btnMulticast->setEnabled(false);
}

void UdpDemo::on_actJoinGroup_triggered()
{
	quint16 groupPort = ui.sbMulticastPort->value();

	if (mUdpSocket->bind(QHostAddress::AnyIPv4, groupPort, QUdpSocket::ShareAddress))
	{
		//¼ÓÈë×é²¥
		mGroupAddr = QHostAddress(ui.cbMulticastAddr->currentText());
		mUdpSocket->joinMulticastGroup(mGroupAddr);

		ui.actBind->setEnabled(false);
		ui.actUnbind->setEnabled(false);
		ui.btnSendMsg->setEnabled(false);
		ui.btnBroadCast->setEnabled(false);

		ui.actJoinGroup->setEnabled(false);
		ui.actLeaveGroup->setEnabled(true);
		ui.btnMulticast->setEnabled(true);
	}
	else
	{
		QMessageBox::warning(this, "´íÎó", QString("°ó¶¨¶Ë¿ÚÊ§°Ü£¬·µ»Ø´íÎó{%1}").arg(mUdpSocket->errorString()));
	}
}

void UdpDemo::on_actLeaveGroup_triggered()
{
	//ÍË³ö×é²¥
	mUdpSocket->leaveMulticastGroup(mGroupAddr);

	mUdpSocket->abort();

	ui.actBind->setEnabled(true);
	ui.actUnbind->setEnabled(false);
	ui.btnSendMsg->setEnabled(false);
	ui.btnBroadCast->setEnabled(false);

	ui.actJoinGroup->setEnabled(true);
	ui.actJoinGroup->setEnabled(false);
	ui.btnMulticast->setEnabled(false);
}

void UdpDemo::on_actClear_triggered()
{
	mUdpSocket->abort();

	ui.lstMsg->clear();
}

void UdpDemo::on_actQuit_triggered()
{
	this->close();
}

void UdpDemo::on_btnSendMsg_clicked()
{
	QByteArray arr = ui.txtMsg->text().toUtf8();
	if (arr.count() <= 0) return;

	QHostAddress addr(ui.cbHostAddr->currentText());
	quint16 hostPort = ui.sbHostPort->value();

	qint64 qiWrite = mUdpSocket->writeDatagram(arr, addr, hostPort);
	if (qiWrite == -1)
	{
		QMessageBox::warning(this, "´íÎó", QString("·¢ËÍÏûÏ¢Ê§°Ü£¬·µ»Ø´íÎó{%1}").arg(mUdpSocket->errorString()));
	}
}

void UdpDemo::on_btnBroadCast_clicked()
{
	QByteArray arr = ui.txtMsg->text().toUtf8();
	if (arr.count() <= 0) return;

	quint16 hostPort = ui.sbHostPort->value();

	qint64 qiWrite = mUdpSocket->writeDatagram(arr, QHostAddress::Broadcast, hostPort);
	if (qiWrite == -1)
	{
		QMessageBox::warning(this, "´íÎó", QString("·¢ËÍÏûÏ¢Ê§°Ü£¬·µ»Ø´íÎó{%1}").arg(mUdpSocket->errorString()));
	}
}

void UdpDemo::on_btnMulticast_clicked()
{
	QByteArray arr = ui.txtMsg->text().toUtf8();
	if (arr.count() <= 0) return;

	quint16 hostPort = ui.sbMulticastPort->value();

	qint64 qiWrite = mUdpSocket->writeDatagram(arr, mGroupAddr, hostPort);
	if (qiWrite == -1)
	{
		QMessageBox::warning(this, "´íÎó", QString("·¢ËÍÏûÏ¢Ê§°Ü£¬·µ»Ø´íÎó{%1}").arg(mUdpSocket->errorString()));
	}
}
