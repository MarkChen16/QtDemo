#pragma once

#include <QtWidgets/QDialog>
#include "ui_QDateTimeDemo.h"

class QDateTimeDemo : public QDialog
{
	Q_OBJECT

public:
	QDateTimeDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QDateTimeDemoClass ui;
};
