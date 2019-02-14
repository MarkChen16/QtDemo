#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MoreChartViewDemo.h"

#define FIXED_ROW 6
#define FIXED_COL 5

#define COL_NAME	0
#define COL_CHA		1
#define COL_MATH	2
#define COL_ENG		3
#define COL_AVE		4

class MoreChartViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	MoreChartViewDemo(QWidget *parent = Q_NULLPTR);

	void initData();
	void countData();
	void countRange(int intMin, int intMax, QString &sCHA, QString &sMATH, QString &sENG, QString &sAVE);

	private slots:
	void on_actInit_triggered();
	void on_actDataCount_triggered();

	void on_btnReloadBarChart_clicked();
	void on_btnReloadPieChart_clicked();
	void on_btnReloadStackedBarChart_clicked();
	void on_btnReloadPercentBarChart_clicked();
	void on_btnReloadScatterChart_clicked();

	void on_itemChanged(QStandardItem *item);

	void on_sliceHovered(bool bIn);

private:
	Ui::MoreChartViewDemoClass ui;

	//数据模型
	QStandardItemModel *dataModel;

	QStringList lstName;
	QStringList lstRange;
};
