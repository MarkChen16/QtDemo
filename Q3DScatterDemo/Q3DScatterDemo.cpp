#include "Q3DScatterDemo.h"

Q3DScatterDemo::Q3DScatterDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	initGraph3D();
}

void Q3DScatterDemo::initGraph3D()
{
	//创建3D散点图
	scatter = new Q3DScatter();

	graphContainer = QWidget::createWindowContainer(scatter);
	this->setCentralWidget(graphContainer);

	//创建坐标轴
	scatter->axisX()->setTitle("axis X");
	scatter->axisX()->setTitleVisible(true);

	scatter->axisY()->setTitle("axis Y");
	scatter->axisY()->setTitleVisible(true);

	scatter->axisZ()->setTitle("axis Z");
	scatter->axisZ()->setTitleVisible(true);

	scatter->activeTheme()->setLabelBackgroundEnabled(false);

	//创建序列
	QScatterDataProxy *proxy = new QScatterDataProxy();	//使用数据代理
	ser = new QScatter3DSeries(proxy);
	ser->setItemLabelFormat("(@xLabel, @yLabel @zLabel)");
	ser->setMesh(QAbstract3DSeries::MeshSphere);
	ser->setItemSize(0.2);
	scatter->addSeries(ser);

	//添加数据
	int N = 41;
	int itemCount = N*N;
	
	QScatterDataArray *da = new QScatterDataArray();
	da->resize(itemCount);
	QScatterDataItem *item = &da->first();

	float x, y, z;
	int i, j;
	x = -10;
	for (i = 1; i <= N; i++)
	{
		y = -10;
		for (j = 1; j <= N; j++)
		{
			z = qSqrt(x*x + y*y);
			if (z != 0)
			{
				z = 10 * qSin(z) / z;
			}
			else
			{
				z = 10;
			}

			item->setPosition(QVector3D(x, z, y));
			item++;

			y += 0.5;
		}

		x += 0.5;
	}

	proxy->resetArray(da);
}
