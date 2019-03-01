#include "UdpDemo.h"

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")


UdpDemo::UdpDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	m_labState = new QLabel(this);
	m_labState->setMinimumWidth(300);
	m_labState->setText("状态：");
	ui.statusBar->addWidget(m_labState);

	mUdpSocket = new QUdpSocket(this);
	connect(mUdpSocket, SIGNAL(stateChanged(QAbstractSocket::SocketState)), this, SLOT(on_stateChanged(QAbstractSocket::SocketState)));
	connect(mUdpSocket, SIGNAL(readyRead()), this, SLOT(on_readyRead()));

	//初始化状态
	on_stateChanged(mUdpSocket->state());

	this->setCentralWidget(ui.groupBox);
}

void UdpDemo::on_readyRead()
{
	QUdpSocket *currUdpSocket = (QUdpSocket *)sender();

	//是否存在挂起的数据报文
	while (mUdpSocket->hasPendingDatagrams())
	{
		QByteArray arr;
		arr.resize(mUdpSocket->pendingDatagramSize());

		QHostAddress peerAddr;
		quint16 peerPort;

		quint64 qiRead = mUdpSocket->readDatagram(arr.data(), arr.size(), &peerAddr, &peerPort);
		if (qiRead != -1)
		{
			//如果是其他主机发的报文则显示
			if (isLocalAddress(peerAddr) == false)
			{
				QHostAddress addr(peerAddr.toIPv4Address());
				QString szMsg = QString("%1 %2[%3]: %4").arg(QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss")).arg(addr.toString()).arg(peerPort).arg(arr.data());
				ui.lstMsg->insertItem(0, szMsg);
			}
		}
	}
}

bool UdpDemo::isLocalAddress(QHostAddress addr)
{
	bool bFound = false;

	QList<QHostAddress> lstAddr = QNetworkInterface::allAddresses();
	for each (auto var in lstAddr)
	{
		if (addr == var)
		{
			bFound = true;
			break;
		}
	}

	return bFound;
}

void UdpDemo::on_stateChanged(QAbstractSocket::SocketState state)
{
	switch (state)
	{
	case QAbstractSocket::UnconnectedState:
		m_labState->setText("状态：UnconnectedState");
		break;
	case QAbstractSocket::HostLookupState:
		m_labState->setText("状态：HostLookupState");
		break;
	case QAbstractSocket::ConnectingState:
		m_labState->setText("状态：");
		break;
	case QAbstractSocket::ConnectedState:
		m_labState->setText("状态：ConnectingState");
		break;
	case QAbstractSocket::BoundState:
		m_labState->setText("状态：BoundState");
		break;
	case QAbstractSocket::ListeningState:
		m_labState->setText("状态：ListeningState");
		break;
	case QAbstractSocket::ClosingState:
		m_labState->setText("状态：ClosingState");
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
		ui.actLeaveGroup->setEnabled(false);
		ui.btnMulticast->setEnabled(false);
	}
	else
	{
		QMessageBox::warning(this, "错误", QString("绑定端口失败，返回错误{%1}").arg(mUdpSocket->errorString()));
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
	ui.actLeaveGroup->setEnabled(false);
	ui.btnMulticast->setEnabled(false);
}

void UdpDemo::on_actJoinGroup_triggered()
{
	mGroupAddr = QHostAddress(ui.cbMulticastAddr->currentText());
	quint16 groupPort = ui.sbMulticastPort->value();

	//加入组播(组播地址和端口)
	if (mUdpSocket->bind(QHostAddress::AnyIPv4, groupPort, QUdpSocket::ShareAddress))
	{
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
		QMessageBox::warning(this, "错误", QString("绑定端口失败，返回错误{%1}").arg(mUdpSocket->errorString()));
	}
}

void UdpDemo::on_actLeaveGroup_triggered()
{
	//退出组播
	mUdpSocket->leaveMulticastGroup(mGroupAddr);

	mUdpSocket->abort();

	ui.actBind->setEnabled(true);
	ui.actUnbind->setEnabled(false);
	ui.btnSendMsg->setEnabled(false);
	ui.btnBroadCast->setEnabled(false);

	ui.actJoinGroup->setEnabled(true);
	ui.actLeaveGroup->setEnabled(false);
	ui.btnMulticast->setEnabled(false);
}

void UdpDemo::on_actClear_triggered()
{
	ui.lstMsg->clear();
}

void UdpDemo::on_actQuit_triggered()
{
	mUdpSocket->abort();

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
		QMessageBox::warning(this, "错误", QString("发送消息失败，返回错误{%1}").arg(mUdpSocket->errorString()));
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
		QMessageBox::warning(this, "错误", QString("发送消息失败，返回错误{%1}").arg(mUdpSocket->errorString()));
	}
}

void UdpDemo::on_btnMulticast_clicked()
{
	QByteArray arr = ui.txtMsg->text().toUtf8();
	if (arr.count() <= 0) return;

	quint16 groupPort = ui.sbMulticastPort->value();

	qint64 qiWrite = mUdpSocket->writeDatagram(arr, mGroupAddr, groupPort);
	if (qiWrite == -1)
	{
		QMessageBox::warning(this, "错误", QString("发送消息失败，返回错误{%1}").arg(mUdpSocket->errorString()));
	}
}
