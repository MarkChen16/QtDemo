#pragma once

#include <QtCharts>
using namespace QtCharts;

/*
��ǿ��QChartView֧�����²�����
1������ͼ������ʾ/���ض�Ӧ����
2����PageUp��PageDown��ʵ�ַŴ���С�����ո����ԭ��С
3����ѡ��ľ���������зŴ󣬵�������Ҽ���ָ�ͼ���С
4��ʹ���ϡ��¡�����Ҽ������ƶ����е���ʾλ��

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

