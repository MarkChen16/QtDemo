#include "QWGraphicsView.h"


QWGraphicsView::QWGraphicsView(QWidget *parent):
	QGraphicsView(parent)
{

}

QWGraphicsView::~QWGraphicsView()
{
}

void QWGraphicsView::mousePressEvent(QMouseEvent *e)
{
	if (e->button() == Qt::LeftButton)
	{
		QPoint point = e->pos();
		emit itemSelect(point);

		QGraphicsView::mousePressEvent(e);
	}
}

void QWGraphicsView::mouseMoveEvent(QMouseEvent *e)
{
	QPoint point = e->pos();
	emit itemMove(point);

	QGraphicsView::mouseMoveEvent(e);
}

void QWGraphicsView::mouseDoubleClickEvent(QMouseEvent *e)
{
	if (e->button() == Qt::LeftButton)
	{
		QPoint point = e->pos();
		emit itemOption(point);

		QGraphicsView::mouseDoubleClickEvent(e);
	}
}

void QWGraphicsView::keyPressEvent(QKeyEvent *e)
{
	emit itemShortcut(e);

	QGraphicsView::keyPressEvent(e);
}
