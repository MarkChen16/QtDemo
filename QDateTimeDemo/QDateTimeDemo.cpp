#include "QDateTimeDemo.h"

QDateTimeDemo::QDateTimeDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	QDateTime dt = QDateTime::currentDateTime();
	ui.dtEdit->setDateTime(dt);
	ui.dEdit->setDate(dt.date());
	ui.tEdit->setTime(dt.time());
}
