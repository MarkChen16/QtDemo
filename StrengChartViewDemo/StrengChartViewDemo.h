#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_StrengChartViewDemo.h"

#include <qlabel.h>

/*
要点：
1、移动和缩放视图
2、单击图例(颜色块+序列名称)，显示/隐藏关联的序列
*/

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
