#include "ChartViewDemo.h"

#pragma execution_character_set("UTF-8")

//要素：
//View视图：显示图表，处理鼠标键盘事件
//Chart图表：图表元素窗口，可以添加序列、坐标轴
//Series序列：序列保存图表的数据，序列的类型决定图表类型
//Axis坐标轴：一般都有X和Y轴，饼图没有XY轴；一般有数值坐标轴、文字坐标轴、日期时间坐标轴；

ChartViewDemo::ChartViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.chartView);

	view = ui.chartView;
	initChartView();
}

void ChartViewDemo::initChartView()
{
	//创建视图===========================================================
	view->setRenderHint(QPainter::Antialiasing);
	view->setRenderHint(QPainter::TextAntialiasing);
	view->setRenderHint(QPainter::HighQualityAntialiasing);

	//创建图表===========================================================
	QChart *chart = new QChart();
	chart->setTitle("简单函数曲线");
	view->setChart(chart);

	//创建折线序列=======================================================
	QLineSeries *ls0 = new QLineSeries();
	ls0->setName("Sin曲线");
	//外观的设置
	//QPen pen(Qt::blue);
	//pen.setWidth(2);
	//ls0->setPen(pen);
	//ls0->setBrush(QBrush(Qt::yellow));
	//ls0->setOpacity(0.7);
	//数据点标签的设置
	//ls0->setPointLabelsVisible(true);
	//ls0->setPointLabelsFormat("(@xPoint, @yPoint)");
	//ls0->setPointLabelsColor(Qt::black);
	chart->addSeries(ls0);

	QLineSeries *ls1 = new QLineSeries();
	ls1->setName("Cos曲线");
	chart->addSeries(ls1);

	//添加数据点：数据点可以append、insert、replace、clear、remove、removePoints
	qreal t = 0, y0, y1;
	for (int i = 0; i < 1000; i++)
	{
		y0 = qSin(t);
		ls0->append(t, y0);		//后面增加数据点

		y1 = qCos(t);
		ls1->append(t, y1);

		t += 0.1;

		if (ls0->count() >= 20 / 0.1) break;
	}
	
	//创建坐标轴===========================================================
	QValueAxis *axisX = new QValueAxis();
	axisX->setTitleText("time(secs)");	//设置标题
	axisX->setRange(0, 20);	//设置最小值、最大值
	axisX->setLabelFormat("%.2f");	//标签显示格式
	axisX->setLabelsAngle(20);		//标签显示的角度

	//设置主次刻度
	axisX->setTickCount(20);
	axisX->setMinorTickCount(2);

	//设置主次网络
	axisX->setGridLineVisible(true);
	axisX->setMinorGridLineVisible(true);

	QValueAxis *axisY = new QValueAxis();
	axisY->setRange(-2, 2);
	axisY->setTitleText("value");

	//给第一个序列设置坐标轴
	chart->setAxisX(axisX, ls0);
	chart->setAxisY(axisY, ls0);

	//给第二个序列设置坐标轴
	chart->setAxisX(axisX, ls1);
	chart->setAxisY(axisY, ls1);
}
