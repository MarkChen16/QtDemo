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

	//ʹ���߼����꣬���ݴ����Сλ�ý����ƶ�����
	p.setViewport(0, 0, width(), height());	//����ΪĬ������
	p.setWindow(-10, -10, 120, 120);
	p.drawRect(0, 0, 100, 100);		//�������Ŵ����С�仯�ľ���

	//ʹ���������꣬��λ�������ģ���������
	p.setViewport(width() / 2, height() / 2, width(), height());
	p.setWindow(0, 0, width(), height());	//����ΪĬ������
	p.drawRect(-20, -20, 40, 40);	//����������λ�̶���СΪ40�ľ���
}
