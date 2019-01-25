#pragma once

#include <QtWidgets/QDialog>
#include "ui_QListWidgetDemo.h"

class QListWidgetDemo : public QDialog
{
	Q_OBJECT

public:
	QListWidgetDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QListWidgetDemoClass ui;
};
