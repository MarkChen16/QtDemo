#include "QSpinBoxDemo.h"

QSpinBoxDemo::QSpinBoxDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void QSpinBoxDemo::on_count()
{
	int iNum = ui.sbNum->value();
	double dPrice = ui.sbPrice->value();
	ui.sbTotal->setValue(iNum*dPrice);
}
