#include "StrengChartViewDemo.h"

#pragma execution_character_set("UTF-8")

StrengChartViewDemo::StrengChartViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//初始化状态栏
	ui.statusBar->addWidget(new QLabel("位置：", this));
	
	labPos = new QLabel(this);
	labPos->setMinimumWidth(200);
	ui.statusBar->addWidget(labPos);

	initView();
	connect(ui.view, SIGNAL(mouseMovePoint(QPoint)), this, SLOT(on_mouseMovePoint(QPoint)));

	this->setCentralWidget(ui.view);
}

void StrengChartViewDemo::on_actEnlarge_triggered()
{
	ui.view->chart()->zoom(1.2);
}

void StrengChartViewDemo::on_actLessen_triggered()
{
	ui.view->chart()->zoom(0.8);
}

void StrengChartViewDemo::on_actOrgSize_triggered()
{
	ui.view->chart()->zoomReset();
}

void StrengChartViewDemo::initView()
{
	//创建视图===========================================================
	ui.view->setRenderHint(QPainter::Antialiasing);
	ui.view->setRenderHint(QPainter::TextAntialiasing);
	ui.view->setRenderHint(QPainter::HighQualityAntialiasing);

	//创建图表===========================================================
	QChart *chart = new QChart();
	chart->setTitle("简单函数曲线");
	ui.view->setChart(chart);

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
	for (int i = 0; i < 500; i++)
	{
		y0 = qSin(t);
		ls0->append(t, y0);		//后面增加数据点

		y1 = qCos(t);
		ls1->append(t, y1);

		t += 0.1;
	}

	//创建坐标轴===========================================================
	QValueAxis *axisX = new QValueAxis();
	axisX->setTitleText("time(secs)");	//设置标题
	axisX->setRange(0, 20);	//设置最小值、最大值
	axisX->setLabelFormat("%.2f");	//标签显示格式
	axisX->setLabelsAngle(20);		//标签显示的角度

	//设置主次刻度
	axisX->setTickCount(21);
	axisX->setMinorTickCount(4);

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

	//绑定图例的单击信号槽，marker在添加序列后自动生成
	for each (QLegendMarker *var in chart->legend()->markers())
	{
		bool bOk = connect(var, SIGNAL(clicked()), this, SLOT(on_legendMarkerClicked()));
	}
}

void StrengChartViewDemo::on_legendMarkerClicked()
{
	QLegendMarker *var = (QLegendMarker *)sender();		//获取信号源对象
	switch (var->type())
	{
	case QLegendMarker::LegendMarkerTypeXY:
		//隐藏关联的序列
		QAbstractSeries * ser = var->series();
		ser->setVisible(!ser->isVisible());

		//图例总是可见
		var->setVisible(true);
		break;
	}
}

void StrengChartViewDemo::on_mouseMovePoint(QPoint point)
{
	QPointF pf = ui.view->chart()->mapToValue(point);

	labPos->setText(QString::asprintf("%.1f,  %.1f", pf.x(), pf.y()));
}


