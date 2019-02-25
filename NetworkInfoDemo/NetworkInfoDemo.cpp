#include "NetworkInfoDemo.h"

#pragma execution_character_set("UTF-8")

NetworkInfoDemo::NetworkInfoDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	
}

void NetworkInfoDemo::on_btnGetHostInfo1_clicked()
{
	//��ñ���������
	QString strHostName = QHostInfo::localHostName();

	//�������������������Ϣ
	QHostInfo info = QHostInfo::fromName(strHostName);

	onShowInfo(info);
}

void NetworkInfoDemo::on_btnGetHostInfo2_clicked()
{
	//�첽��ѯ����IP��ַ
	QHostInfo::lookupHost(QHostInfo::localHostName(), this, SLOT(onShowInfo(QHostInfo)));
}

void NetworkInfoDemo::on_btnGetHostInfo3_clicked()
{
	QHostInfo::lookupHost("www.baidu.com", this, SLOT(onShowInfo(QHostInfo)));
}

void NetworkInfoDemo::on_btnGetNetworkInterface_clicked()
{
	QList<QNetworkInterface> lstInterface = QNetworkInterface::allInterfaces();

	ui.lstInterface->clear();
	for each (QNetworkInterface interface in lstInterface)
	{
		ui.lstInterface->addItem("====================================");
		ui.lstInterface->addItem("�豸���ƣ�" + interface.humanReadableName());
		ui.lstInterface->addItem("Ӳ����ַ��" + interface.hardwareAddress());

		QList<QNetworkAddressEntry> lstEntry = interface.addressEntries();
		for each (QNetworkAddressEntry entry in lstEntry)
		{
			ui.lstInterface->addItem("*****IP��ַ��" + entry.ip().toString());
			ui.lstInterface->addItem("*****�������룺" + entry.netmask().toString());
			ui.lstInterface->addItem("*****�㲥��ַ��" + entry.broadcast().toString());
		}
	}
}

void NetworkInfoDemo::onShowInfo(const QHostInfo & info)
{
	ui.lstAddress->clear();

	QList<QHostAddress> lstAddr = info.addresses();
	if (lstAddr.isEmpty()) return;

	for each (QHostAddress var in lstAddr)
	{
		if (ui.cbOnlyIPv4->isChecked() && var.protocol() != QAbstractSocket::IPv4Protocol) continue;
		
		ui.lstAddress->addItem(var.toString());
	}
}
