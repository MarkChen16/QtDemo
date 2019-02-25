#include "NetworkInfoDemo.h"

#pragma execution_character_set("UTF-8")

NetworkInfoDemo::NetworkInfoDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	
}

void NetworkInfoDemo::on_btnGetHostInfo1_clicked()
{
	//获得本地主机名
	QString strHostName = QHostInfo::localHostName();

	//根据主机名获得主机信息
	QHostInfo info = QHostInfo::fromName(strHostName);

	onShowInfo(info);
}

void NetworkInfoDemo::on_btnGetHostInfo2_clicked()
{
	//异步查询本机IP地址
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
		ui.lstInterface->addItem("设备名称：" + interface.humanReadableName());
		ui.lstInterface->addItem("硬件地址：" + interface.hardwareAddress());

		QList<QNetworkAddressEntry> lstEntry = interface.addressEntries();
		for each (QNetworkAddressEntry entry in lstEntry)
		{
			ui.lstInterface->addItem("*****IP地址：" + entry.ip().toString());
			ui.lstInterface->addItem("*****子网掩码：" + entry.netmask().toString());
			ui.lstInterface->addItem("*****广播地址：" + entry.broadcast().toString());
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
