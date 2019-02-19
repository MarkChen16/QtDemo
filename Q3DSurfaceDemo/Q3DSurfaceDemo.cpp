#include "Q3DSurfaceDemo.h"

Q3DSurfaceDemo::Q3DSurfaceDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	initGraph3D();
}

void Q3DSurfaceDemo::initGraph3D()
{
	//创建3D散点图
	surface = new Q3DSurface();

	graphContainer = QWidget::createWindowContainer(surface);
	this->setCentralWidget(graphContainer);

	//创建坐标轴
	QValue3DAxis *axisX = new QValue3DAxis();
	axisX->setTitle("Axis X");
	axisX->setTitleVisible(true);
	axisX->setRange(-11, 11);
	surface->setAxisX(axisX);

	QValue3DAxis *axisY = new QValue3DAxis();
	axisY->setTitle("Axis Y");
	axisY->setTitleVisible(true);
	axisY->setAutoAdjustRange(true);
	surface->setAxisY(axisY);

	QValue3DAxis *axisZ = new QValue3DAxis();
	axisZ->setTitle("Axis Z");
	axisZ->setTitleVisible(true);
	axisZ->setRange(-11, 11);
	surface->setAxisZ(axisZ);

	//创建序列
	//QHeightMapSurfaceDataProxy *mapProxy = new QHeightMapSurfaceDataProxy();	//也可以使用高程地图数据代理

	QSurfaceDataProxy *proxy = new QSurfaceDataProxy();	//使用数据代理
	ser = new QSurface3DSeries(proxy);
	ser->setItemLabelFormat("(@xLabel, @yLabel @zLabel)");
	ser->setMeshSmooth(true);
	ser->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);	//绘制曲面和网格
	ser->setDrawMode(QSurface3DSeries::DrawSurface);	//只绘制曲面
	surface->activeTheme()->setLabelBackgroundEnabled(false);
	surface->addSeries(ser);

	//设置渐变颜色
	QLinearGradient gr;
	gr.setColorAt(0.0, Qt::black);
	gr.setColorAt(0.33, Qt::blue);
	gr.setColorAt(0.67, Qt::red);
	gr.setColorAt(1.0, Qt::yellow);
	ser->setBaseGradient(gr);
	ser->setColorStyle(Q3DTheme::ColorStyleRangeGradient);	//颜色模式为根据对象深度渐变

	//添加数据
	int N = 41;
	QSurfaceDataArray *da = new QSurfaceDataArray();
	da->reserve(N);

	float x, y, z;
	int i, j;
	x = -10;

	for (i = 1; i <= N; i++)
	{
		QSurfaceDataRow *newRow = new QSurfaceDataRow(N);
		y = -10;
		int index = 0;
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

			(*newRow)[index ++].setPosition(QVector3D(x, z, y));

			y += 0.5;
		}

		x += 0.5;
		*da << newRow;
	}

	proxy->resetArray(da);
}
