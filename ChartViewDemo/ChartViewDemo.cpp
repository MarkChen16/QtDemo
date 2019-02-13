#include "ChartViewDemo.h"

#pragma execution_character_set("UTF-8")

ChartViewDemo::ChartViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	initChartView();
}

void ChartViewDemo::initChartView()
{
	//创建view chart
	QChartView *view = new QChartView(this);
	view->setRenderHint(QPainter::Antialiasing);
	view->setRenderHint(QPainter::TextAntialiasing);

	QChart *chart = new QChart();
	chart->setTitle("简单函数曲线");
	view->setChart(chart);

	//创建坐标轴
	QValueAxis *axisX = new QValueAxis();
	axisX->setRange(0, 20);
	axisX->setTitleText("time(secs)");

	QValueAxis *axisY = new QValueAxis();
	axisY->setRange(-2, 2);
	axisY->setTitleText("value");

	//创建折线序列
	QLineSeries *ls0 = new QLineSeries();
	ls0->setName("Sin曲线");
	chart->addSeries(ls0);

	QLineSeries *ls1 = new QLineSeries();
	ls1->setName("Cos曲线");
	chart->addSeries(ls1);

	qreal t = 0, y0, y1;
	for (int i = 0; i < 200; i++)
	{
		y0 = qSin(t);
		ls0->append(t, y0);

		y1 = qCos(t);
		ls1->append(t, y1);

		t += 0.1;
	}

	//给序列设置坐标轴
	chart->setAxisX(axisX, ls0);
	chart->setAxisY(axisY, ls0);

	chart->setAxisX(axisX, ls1);
	chart->setAxisY(axisY, ls1);

	//居中显示
	this->setCentralWidget(view);
}
