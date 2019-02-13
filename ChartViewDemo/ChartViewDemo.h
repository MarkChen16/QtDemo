#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ChartViewDemo.h"

#include <QtCharts>
using namespace QtCharts;

class ChartViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	ChartViewDemo(QWidget *parent = Q_NULLPTR);

	void initChartView();

private:
	Ui::ChartViewDemoClass ui;
};
