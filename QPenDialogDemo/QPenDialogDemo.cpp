#include "QPenDialogDemo.h"

#include <qpainter.h>
#include "QPenDialog.h"


QPenDialogDemo::QPenDialogDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	mPen.setColor(Qt::red);
	mPen.setWidth(1);
	mPen.setStyle(Qt::SolidLine);
	mPen.setCapStyle(Qt::FlatCap);
	mPen.setJoinStyle(Qt::BevelJoin);
}

void QPenDialogDemo::on_btnGetPen_clicked()
{
	QPenDialog pen(mPen, this);
	if (pen.Show())
	{
		mPen = pen.getPen();
	}
}

void QPenDialogDemo::paintEvent(QPaintEvent * event)
{
	QPainter p(this);

	p.setPen(mPen);
	p.setRenderHint(QPainter::Antialiasing);
	p.setRenderHint(QPainter::TextAntialiasing);

	//使用逻辑坐标，根据窗体大小位置进行移动绽放
	p.setViewport(0, 0, width(), height());	//设置为默认区域
	p.setWindow(-10, -10, 120, 120);
	p.drawRect(0, 0, 100, 100);		//绘制随着窗体大小变化的矩形

	//使用物理坐标，定位窗体中心，不做缩放
	p.setViewport(width() / 2, height() / 2, width(), height());
	p.setWindow(0, 0, width(), height());	//设置为默认区域
	p.drawRect(-20, -20, 40, 40);	//绘制在中心位固定大小为40的矩形
}
