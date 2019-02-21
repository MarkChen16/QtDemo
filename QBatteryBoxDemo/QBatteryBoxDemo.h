#pragma once

#include <QtWidgets/QDialog>
#include "ui_QBatteryBoxDemo.h"

class QBatteryBoxDemo : public QDialog
{
	Q_OBJECT

public:
	QBatteryBoxDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_myBattery_powerLevelChanged(int pow);
	void on_hsPower_valueChanged(int iValue);

private:
	Ui::QBatteryBoxDemoClass ui;
};
