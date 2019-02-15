#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StrengChartViewDemo.h"

#include <qlabel.h>

class StrengChartViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	StrengChartViewDemo(QWidget *parent = Q_NULLPTR);

	void initView();

	private slots:
	void on_actEnlarge_triggered();
	void on_actLessen_triggered();
	void on_actOrgSize_triggered();

	void on_legendMarkerClicked();
	void on_mouseMovePoint(QPoint point);

private:
	Ui::StrengChartViewDemoClass ui;

	QLabel *labPos;
};
