#pragma once

#include <QtWidgets/QWidget>
#include "ui_QTreeWidgetDemo.h"

class QTreeWidgetDemo : public QWidget
{
	Q_OBJECT

public:
	QTreeWidgetDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QTreeWidgetDemoClass ui;
};
