#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTreeWidgetDemo.h"

class QTreeWidgetDemo : public QMainWindow
{
	Q_OBJECT

public:
	QTreeWidgetDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QTreeWidgetDemoClass ui;
};
