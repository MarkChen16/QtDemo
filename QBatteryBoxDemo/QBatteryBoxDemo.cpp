#include "QBatteryBoxDemo.h"

#pragma execution_character_set("UTF-8")

QBatteryBoxDemo::QBatteryBoxDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void QBatteryBoxDemo::on_myBattery_powerLevelChanged(int pow)
{
	QString strInfo = QString::asprintf("当前电量：%d", pow);

	ui.labCurrPower->setText(strInfo);
}

void QBatteryBoxDemo::on_hsPower_valueChanged(int iValue)
{
	ui.myBattery->setPowerLevel(iValue);
}
