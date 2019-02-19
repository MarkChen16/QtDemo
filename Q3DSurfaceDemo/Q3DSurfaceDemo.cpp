#include "Q3DSurfaceDemo.h"

Q3DSurfaceDemo::Q3DSurfaceDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	initGraph3D();
}

void Q3DSurfaceDemo::initGraph3D()
{
	//����3Dɢ��ͼ
	surface = new Q3DSurface();

	graphContainer = QWidget::createWindowContainer(surface);
	this->setCentralWidget(graphContainer);

	//����������
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

	//��������
	//QHeightMapSurfaceDataProxy *mapProxy = new QHeightMapSurfaceDataProxy();	//Ҳ����ʹ�ø̵߳�ͼ���ݴ���

	QSurfaceDataProxy *proxy = new QSurfaceDataProxy();	//ʹ�����ݴ���
	ser = new QSurface3DSeries(proxy);
	ser->setItemLabelFormat("(@xLabel, @yLabel @zLabel)");
	ser->setMeshSmooth(true);
	ser->setDrawMode(QSurface3DSeries::DrawSurfaceAndWireframe);	//�������������
	ser->setDrawMode(QSurface3DSeries::DrawSurface);	//ֻ��������
	surface->activeTheme()->setLabelBackgroundEnabled(false);
	surface->addSeries(ser);

	//���ý�����ɫ
	QLinearGradient gr;
	gr.setColorAt(0.0, Qt::black);
	gr.setColorAt(0.33, Qt::blue);
	gr.setColorAt(0.67, Qt::red);
	gr.setColorAt(1.0, Qt::yellow);
	ser->setBaseGradient(gr);
	ser->setColorStyle(Q3DTheme::ColorStyleRangeGradient);	//��ɫģʽΪ���ݶ�����Ƚ���

	//�������
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
