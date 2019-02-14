#include "MoreChartViewDemo.h"

#pragma execution_character_set("UTF-8")

MoreChartViewDemo::MoreChartViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowState(Qt::WindowMaximized);

	//初始化数据
	dataModel = new QStandardItemModel(FIXED_ROW, FIXED_COL, this);
	ui.viewData->setModel(dataModel);

	initData();
	countData();

	connect(dataModel, SIGNAL(itemChanged(QStandardItem *)), this, SLOT(on_itemChanged(QStandardItem *)));

	//初始化BarChart
	QChart *barChart = new QChart();
	barChart->setTitle("BarChart演示");
	barChart->setAnimationOptions(QChart::SeriesAnimations);	//动画效果

	ui.viewBar->setChart(barChart);
	ui.viewBar->setRenderHint(QPainter::Antialiasing);
	ui.viewBar->setRenderHint(QPainter::TextAntialiasing);
	ui.viewBar->setRenderHint(QPainter::HighQualityAntialiasing);

	//初始化PieChart
	QChart *pieChart = new QChart();
	pieChart->setTitle("PieChart演示");
	pieChart->setAnimationOptions(QChart::SeriesAnimations);	//动画效果

	ui.viewPie->setChart(pieChart);
	ui.viewPie->setRenderHint(QPainter::Antialiasing);
	ui.viewPie->setRenderHint(QPainter::TextAntialiasing);
	ui.viewPie->setRenderHint(QPainter::HighQualityAntialiasing);

	//初始化StackedBarChart
	QChart *stackedChart = new QChart();
	stackedChart->setTitle("StackedBarChart演示");
	stackedChart->setAnimationOptions(QChart::SeriesAnimations);	//动画效果

	ui.viewStackedBar->setChart(stackedChart);
	ui.viewStackedBar->setRenderHint(QPainter::Antialiasing);
	ui.viewStackedBar->setRenderHint(QPainter::TextAntialiasing);
	ui.viewStackedBar->setRenderHint(QPainter::HighQualityAntialiasing);

	//初始化PercentBarChart
	QChart *percentChart = new QChart();
	percentChart->setTitle("PercentBarChart演示");
	percentChart->setAnimationOptions(QChart::SeriesAnimations);	//动画效果

	ui.viewPercentBar->setChart(percentChart);
	ui.viewPercentBar->setRenderHint(QPainter::Antialiasing);
	ui.viewPercentBar->setRenderHint(QPainter::TextAntialiasing);
	ui.viewPercentBar->setRenderHint(QPainter::HighQualityAntialiasing);

	//初始化ScatterChart
	QChart *scatterChart = new QChart();
	scatterChart->setTitle("ScatterChart演示");
	scatterChart->setAnimationOptions(QChart::SeriesAnimations);	//动画效果

	ui.viewScatterChart->setChart(scatterChart);
	ui.viewScatterChart->setRenderHint(QPainter::Antialiasing);
	ui.viewScatterChart->setRenderHint(QPainter::TextAntialiasing);
	ui.viewScatterChart->setRenderHint(QPainter::HighQualityAntialiasing);

}

void MoreChartViewDemo::initData()
{
	QStringList lstHead;
	lstHead << "姓名" << "语文" << "数学" << "英语" << "平均数";
	dataModel->setHorizontalHeaderLabels(lstHead);

	qsrand(QTime::currentTime().second());

	lstName.clear();
	lstName << "张三丰" << "陈贵全" << "郭大大" << "李小明" << "陈宥佳" << "陈静";

	lstRange.clear();
	lstRange << "60分以下" << "60-69分" << "70-79分" << "80-89分" << "90分以上";

	for (int i = 0; i < FIXED_ROW; i++)
	{
		QStandardItem *item;
		int cntSocre = 0, intSocre = 0;

		//姓名
		item = new QStandardItem();
		item->setData(lstName.at(i), Qt::DisplayRole);
		dataModel->setItem(i, COL_NAME, item);

		//语文
		intSocre = 30 + qrand()%71;
		cntSocre += intSocre;

		item = new QStandardItem();
		item->setData(intSocre, Qt::DisplayRole);
		dataModel->setItem(i, COL_CHA, item);

		//数学
		intSocre = 30 + qrand() % 71;
		cntSocre += intSocre;

		item = new QStandardItem();
		item->setData(intSocre, Qt::DisplayRole);
		dataModel->setItem(i, COL_MATH, item);

		//英语
		intSocre = 30 + qrand() % 71;
		cntSocre += intSocre;

		item = new QStandardItem();
		item->setData(intSocre, Qt::DisplayRole);
		dataModel->setItem(i, COL_ENG, item);

		//平均分
		qreal qAve = (int)(cntSocre / 3.0 * 10.0)/10.0;		//保留一位小数点

		item = new QStandardItem();
		item->setData(qAve, Qt::DisplayRole);

		int iFlag = item->flags();
		iFlag &= (!Qt::ItemIsEditable);
		item->setFlags((Qt::ItemFlags)iFlag);	//不允许编辑
		dataModel->setItem(i, COL_AVE, item);
	}
}

void MoreChartViewDemo::countData()
{
	QTreeWidgetItem *item;
	QString sCHA, sMATH, sENG, sAVE;

	ui.treeWidget->clear();

	countRange(0, 59, sCHA, sMATH, sENG, sAVE);
	item = new QTreeWidgetItem();
	item->setText(0, lstRange.at(0));
	item->setText(1, sCHA);
	item->setText(2, sMATH);
	item->setText(3, sENG);
	item->setText(4, sAVE);
	ui.treeWidget->addTopLevelItem(item);

	countRange(60, 69, sCHA, sMATH, sENG, sAVE);
	item = new QTreeWidgetItem();
	item->setText(0, lstRange.at(1));
	item->setText(1, sCHA);
	item->setText(2, sMATH);
	item->setText(3, sENG);
	item->setText(4, sAVE);
	ui.treeWidget->addTopLevelItem(item);

	countRange(70, 79, sCHA, sMATH, sENG, sAVE);
	item = new QTreeWidgetItem();
	item->setText(0, lstRange.at(2));
	item->setText(1, sCHA);
	item->setText(2, sMATH);
	item->setText(3, sENG);
	item->setText(4, sAVE);
	ui.treeWidget->addTopLevelItem(item);

	countRange(80, 89, sCHA, sMATH, sENG, sAVE);
	item = new QTreeWidgetItem();
	item->setText(0, lstRange.at(3));
	item->setText(1, sCHA);
	item->setText(2, sMATH);
	item->setText(3, sENG);
	item->setText(4, sAVE);
	ui.treeWidget->addTopLevelItem(item);

	countRange(90, 100, sCHA, sMATH, sENG, sAVE);
	item = new QTreeWidgetItem();
	item->setText(0, lstRange.at(4));
	item->setText(1, sCHA);
	item->setText(2, sMATH);
	item->setText(3, sENG);
	item->setText(4, sAVE);
	ui.treeWidget->addTopLevelItem(item);
}

void MoreChartViewDemo::countRange(int intMin, int intMax, QString &sCHA, QString &sMATH, QString &sENG, QString &sAVE)
{
	int nCHA = 0, nMATH = 0, nENG = 0, nAVE = 0;;

	for (int i = 0; i < FIXED_ROW; i++)
	{
		int iCHA = dataModel->item(i, COL_CHA)->data(Qt::DisplayRole).toInt();
		int iMATH = dataModel->item(i, COL_MATH)->data(Qt::DisplayRole).toInt();
		int iENG = dataModel->item(i, COL_ENG)->data(Qt::DisplayRole).toInt();
		qreal rAVE = dataModel->item(i, COL_AVE)->data(Qt::DisplayRole).toReal();

		if (iCHA >= intMin && iCHA <= intMax) nCHA++;
		if (iMATH >= intMin && iMATH <= intMax) nMATH++;
		if (iENG >= intMin && iENG <= intMax) nENG++;
		if (rAVE >= intMin && rAVE <= intMax) nAVE++;
	}

	sCHA = QString::asprintf("%d", nCHA);
	sMATH = QString::asprintf("%d", nMATH);
	sENG = QString::asprintf("%d", nENG);
	sAVE = QString::asprintf("%d", nAVE);
}

void MoreChartViewDemo::on_actInit_triggered()
{
	initData();
}

void MoreChartViewDemo::on_actDataCount_triggered()
{
	countData();
}

void MoreChartViewDemo::on_btnReloadBarChart_clicked()
{
	//柱状图：3个集合+1个折线数据
	QChart *chart = ui.viewBar->chart();

	//删除所有序列、坐标轴
	chart->removeAllSeries();
	chart->removeAxis(chart->axisX());
	chart->removeAxis(chart->axisY());

	//创建3个QBarSet数据集的BarSeries，表示3个数据类别
	QBarSeries *serBar = new QBarSeries();
	QBarSet *setCha = new QBarSet(dataModel->horizontalHeaderItem(1)->text());
	QBarSet *setMath = new QBarSet(dataModel->horizontalHeaderItem(2)->text());
	QBarSet *setEng = new QBarSet(dataModel->horizontalHeaderItem(3)->text());

	serBar->append(setCha);
	serBar->append(setMath);
	serBar->append(setEng);
	chart->addSeries(serBar);

	//创建一个QLineSeries折线序列表示平均数
	QLineSeries *serAve = new QLineSeries();
	serAve->setName(dataModel->horizontalHeaderItem(4)->text());

	QPen pen;
	pen.setColor(Qt::red);
	pen.setWidth(2);
	serAve->setPen(pen);

	chart->addSeries(serAve);

	//获取数据到集合和序列
	for (int i = 0; i < dataModel->rowCount(); i++)
	{
		setCha->append(dataModel->item(i, COL_CHA)->data(Qt::DisplayRole).toInt());
		setMath->append(dataModel->item(i, COL_MATH)->data(Qt::DisplayRole).toInt());
		setEng->append(dataModel->item(i, COL_ENG)->data(Qt::DisplayRole).toInt());

		serAve->append(i, dataModel->item(i, COL_AVE)->data(Qt::DisplayRole).toInt());
	}

	//创建柱形的坐标轴
	QBarCategoryAxis *axisX = new QBarCategoryAxis();
	axisX->setTitleText("姓名");
	axisX->append(lstName);

	QValueAxis *axisY = new QValueAxis();
	axisY->setTitleText("分数");
	axisY->setRange(0, 100);
	axisY->setTickCount(5);

	//设置坐标轴
	chart->setAxisX(axisX, serAve);
	chart->setAxisY(axisY, serAve);

	chart->setAxisX(axisX, serBar);
	chart->setAxisY(axisY, serBar);

	//显示图例
	chart->legend()->setVisible(true);
	chart->legend()->setAlignment(Qt::AlignBottom);
}

void MoreChartViewDemo::on_btnReloadPieChart_clicked()
{
	//饼图
	QChart *chart = ui.viewPie->chart();
	chart->setTitle("PieChart - 语文");

	//删除所有序列(饼图没有坐标轴)
	chart->removeAllSeries();

	//创建PieSeries序列、PieSlice分块
	QPieSeries *serPie = new QPieSeries();
	serPie->setHoleSize(0.2);	//空心的大小
	for (int i = 0; i <= 4; i++)
	{
		QTreeWidgetItem *item = ui.treeWidget->topLevelItem(i);
		serPie->append(item->text(0), item->text(1).toInt());	//显示语文的块
	}

	//重新设置分块标签，显示更多的信息，并绑定信号槽
	QPieSlice *slice;	
	for (int i = 0; i <= 4; i++)
	{
		slice = serPie->slices().at(i);

		QString strNewLabel = QString::asprintf("%s: %.0f, %.1f%%",
			slice->label().toStdString().c_str(),
			slice->value(), slice->percentage() * 100);	//个数，百分比
		slice->setLabel(strNewLabel);

		connect(slice, SIGNAL(hovered(bool)), this, SLOT(on_sliceHovered(bool)));
	}

	slice->setExploded(true);
	serPie->setLabelsVisible(true);

	chart->addSeries(serPie);	//在后面再添加序列

	//显示图例
	chart->legend()->setVisible(true);
	chart->legend()->setAlignment(Qt::AlignRight);
}

void MoreChartViewDemo::on_btnReloadStackedBarChart_clicked()
{
	//堆叠柱状图
	QChart *chart = ui.viewStackedBar->chart();

	//删除所有序列、坐标轴
	chart->removeAllSeries();
	chart->removeAxis(chart->axisX());
	chart->removeAxis(chart->axisY());

	//创建3个QBarSet数据集的BarSeries，表示3个数据类别
	QStackedBarSeries *serBar = new QStackedBarSeries();
	QBarSet *setCha = new QBarSet(dataModel->horizontalHeaderItem(1)->text());
	QBarSet *setMath = new QBarSet(dataModel->horizontalHeaderItem(2)->text());
	QBarSet *setEng = new QBarSet(dataModel->horizontalHeaderItem(3)->text());

	serBar->append(setCha);
	serBar->append(setMath);
	serBar->append(setEng);
	serBar->setLabelsVisible(true);
	chart->addSeries(serBar);

	//获取数据到集合和序列
	for (int i = 0; i < dataModel->rowCount(); i++)
	{
		setCha->append(dataModel->item(i, COL_CHA)->data(Qt::DisplayRole).toInt());
		setMath->append(dataModel->item(i, COL_MATH)->data(Qt::DisplayRole).toInt());
		setEng->append(dataModel->item(i, COL_ENG)->data(Qt::DisplayRole).toInt());
	}

	//创建柱形的坐标轴
	QBarCategoryAxis *axisX = new QBarCategoryAxis();
	axisX->setTitleText("姓名");
	axisX->append(lstName);

	QValueAxis *axisY = new QValueAxis();
	axisY->setTitleText("总数");
	axisY->setRange(0, 300);
	axisY->setTickCount(7);
	axisY->setLabelFormat("%.0f");

	//设置坐标轴
	chart->setAxisX(axisX, serBar);
	chart->setAxisY(axisY, serBar);

	//显示图例
	chart->legend()->setVisible(true);
	chart->legend()->setAlignment(Qt::AlignBottom);
}

void MoreChartViewDemo::on_btnReloadPercentBarChart_clicked()
{
	//百分比柱状图
	QChart *chart = ui.viewPercentBar->chart();

	//删除所有序列、坐标轴
	chart->removeAllSeries();
	chart->removeAxis(chart->axisX());
	chart->removeAxis(chart->axisY());

	//创建3个QBarSet数据集的BarSeries，表示3个数据类别
	QPercentBarSeries *serBar = new QPercentBarSeries();
	QBarSet *setCha = new QBarSet(dataModel->horizontalHeaderItem(1)->text());
	QBarSet *setMath = new QBarSet(dataModel->horizontalHeaderItem(2)->text());
	QBarSet *setEng = new QBarSet(dataModel->horizontalHeaderItem(3)->text());

	serBar->append(setCha);
	serBar->append(setMath);
	serBar->append(setEng);
	serBar->setLabelsVisible(true);
	chart->addSeries(serBar);

	//获取数据到集合和序列
	for (int i = 0; i <= 4; i++)
	{
		QTreeWidgetItem *item = ui.treeWidget->topLevelItem(i);
		setCha->append(item->text(1).toFloat());
		setMath->append(item->text(2).toFloat());
		setEng->append(item->text(3).toFloat());
	}

	//创建柱形的坐标轴
	QBarCategoryAxis *axisX = new QBarCategoryAxis();
	axisX->append(lstRange);

	QValueAxis *axisY = new QValueAxis();
	axisY->setTitleText("百分比");
	axisY->setRange(0, 100);
	axisY->setTickCount(6);
	axisY->setLabelFormat("%.1f");

	//设置坐标轴
	chart->setAxisX(axisX, serBar);
	chart->setAxisY(axisY, serBar);

	//显示图例
	chart->legend()->setVisible(true);
	chart->legend()->setAlignment(Qt::AlignRight);
}

void MoreChartViewDemo::on_btnReloadScatterChart_clicked()
{
	//散点图
	QChart *chart = ui.viewScatterChart->chart();

	//删除所有序列、坐标轴
	chart->removeAllSeries();
	chart->removeAxis(chart->axisX());
	chart->removeAxis(chart->axisY());

	//创建光滑曲线序列
	QSplineSeries *serLine = new QSplineSeries();
	serLine->setName("spline");

	QPen pen;
	pen.setColor(Qt::blue);
	pen.setWidth(2);
	serLine->setPen(pen);

	//创建散点序列
	QScatterSeries *serScatter = new QScatterSeries();
	serScatter->setName("scatter");
	serScatter->setMarkerShape(QScatterSeries::MarkerShapeCircle);	//散点的形状
	serScatter->setMarkerSize(12);	//散点的大小
	serScatter->setBorderColor(Qt::black);
	serScatter->setBrush(QBrush(Qt::red));

	//设置序列数据
	qsrand(QTime::currentTime().second());
	for (int i = 0; i < 10; i++)
	{
		int x = qrand() % 20;
		int y = qrand() % 20;

		serLine->append(x, y);
		serScatter->append(x, y);
	}

	chart->addSeries(serLine);
	chart->addSeries(serScatter);

	//创建缺少的坐标轴
	chart->createDefaultAxes();	

	chart->axisX()->setTitleText("X 轴");
	chart->axisX()->setRange(-2, 22);
	chart->axisY()->setTitleText("Y 轴");
	chart->axisY()->setRange(-2, 22);

	//显示图例
	chart->legend()->setVisible(true);
	chart->legend()->setAlignment(Qt::AlignRight);
}

void MoreChartViewDemo::on_itemChanged(QStandardItem * item)
{
	//修改分数后，重新计算平均分
	if (item->column() >= COL_CHA && item->column() <= COL_ENG)
	{
		int intRow = item->row();

		int cntSocre = 0;
		cntSocre += dataModel->item(intRow, COL_CHA)->data(Qt::DisplayRole).toInt();
		cntSocre += dataModel->item(intRow, COL_MATH)->data(Qt::DisplayRole).toInt();
		cntSocre += dataModel->item(intRow, COL_ENG)->data(Qt::DisplayRole).toInt();

		qreal qAve = (int)(cntSocre / 3.0 * 10.0) / 10.0;
		dataModel->item(intRow, COL_AVE)->setData(qAve, Qt::DisplayRole);
	}
}

void MoreChartViewDemo::on_sliceHovered(bool bIn)
{
	//当鼠标移入或移出触发信号，实现动态弹出效果
	QPieSlice *slice = (QPieSlice *)sender();

	slice->setExploded(bIn);
}

