#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MoreChartViewDemo.h"

class MoreChartViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	MoreChartViewDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::MoreChartViewDemoClass ui;
};
