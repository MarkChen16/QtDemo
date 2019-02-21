#include "QWLabel.hpp"

#include <qpainter.h>

QWLabel::QWLabel(QWidget * parent) : QLabel(parent) {
	mBackColor = Qt::red;
}

QWLabel::~QWLabel() {
	
}

void QWLabel::setBackColor(QColor color)
{
	mBackColor = color;

	repaint();
}

void QWLabel::paintEvent(QPaintEvent * event)
{
	QPainter p(this);
	QBrush brush;
	brush.setColor(mBackColor);
	brush.setStyle(Qt::SolidPattern);
	p.setBrush(brush);
	p.drawRect(rect());
}
