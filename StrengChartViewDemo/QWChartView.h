#pragma once

#include <QtCharts>
using namespace QtCharts;

/*
增强型QChartView支持以下操作：
1、单击图例后，显示/隐藏对应序列
2、按PageUp、PageDown键实现放大、缩小，按空格键还原大小
3、对选择的矩形区域进行放大，单击鼠标右键后恢复图表大小
4、使用上、下、左和右键可以移动序列的显示位置

*/
class QWChartView :
	public QChartView
{
	Q_OBJECT
public:
	QWChartView(QWidget *parent = NULL);
	virtual ~QWChartView();

	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

	void keyPressEvent(QKeyEvent *event);

signals:
	void mouseMovePoint(QPoint point);

private:
	QPoint selStart;
	QPoint selStop;
};

