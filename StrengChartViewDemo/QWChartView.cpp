#include "QWChartView.h"


QWChartView::QWChartView(QWidget *parent) : QChartView(parent)
{
	this->setMouseTracking(true);
	this->setDragMode(QGraphicsView::RubberBandDrag);
}

QWChartView::~QWChartView()
{
}

void QWChartView::mousePressEvent(QMouseEvent * event)
{
	if (event->button() == Qt::LeftButton)
	{
		//按下左键
		selStart = event->pos();
	}

	QChartView::mousePressEvent(event);
}

void QWChartView::mouseMoveEvent(QMouseEvent * event)
{
	emit mouseMovePoint(event->pos());

	QChartView::mouseMoveEvent(event);
}

void QWChartView::mouseReleaseEvent(QMouseEvent * event)
{
	if (event->button() == Qt::LeftButton)
	{
		//如果释放的是左键
		selStop = event->pos();

		QRectF rectF;
		rectF.setTopLeft(selStart);
		rectF.setBottomRight(selStop);

		chart()->zoomIn(rectF);	//对矩形区域放大
	}
	else if(event->button() == Qt::RightButton)
	{
		//如果释放的是右键
		chart()->zoomReset();	//还原大小
	}

	QChartView::mouseReleaseEvent(event);
}

void QWChartView::keyPressEvent(QKeyEvent * event)
{
	switch (event->key())
	{
	case Qt::Key_PageUp:
		chart()->zoom(1.2);
		break;
	case Qt::Key_PageDown:
		chart()->zoom(0.8);
		break;
	case Qt::Key_Space:
		chart()->zoomReset();
		break;
	case Qt::Key_Up:
		chart()->scroll(0, -10);
		break;
	case Qt::Key_Down:
		chart()->scroll(0, 10);
		break;
	case Qt::Key_Left:
		chart()->scroll(10, 0);
		break;
	case Qt::Key_Right:
		chart()->scroll(-10, 0);
		break;
	}

	emit QGraphicsView::keyPressEvent(event);
}
