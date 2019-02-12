#include "PainterDemo.h"

#include <qpainter.h>

#pragma execution_character_set("UTF-8")

PainterDemo::PainterDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setPalette(QPalette(Qt::white));
	this->setAutoFillBackground(true);
}

void PainterDemo::paintEvent(QPaintEvent * event)
{
	//使用QPainter在QWidget上打印不可交互的二维图形
	QPainter p(this);

	p.save();	//保存当前坐标系统

	p.setRenderHint(QPainter::Antialiasing);		//设置图形平滑显示
	p.setRenderHint(QPainter::TextAntialiasing);	//设置文本平滑显示
	
	int W = width();
	int H = height();
	int side = qMin(W, H);

	QRect rect((W - side)/2, (H-side)/2, side, side);
	p.drawRect(rect);

	//设置视口和窗口比例，便于QPainter和物理坐标隔离，打印的图形会随着窗口大小而改变，不用计算坐标、宽度和高度的变化
	p.setViewport(rect);	//设置视口
	p.setWindow(-100, -100, 200, 200);	//设置窗口大小

	//设置画笔
	QPen pen;
	pen.setWidth(1);					//宽度
	pen.setColor(Qt::red);				//颜色
	pen.setStyle(Qt::SolidLine);		//线条样式
	pen.setCapStyle(Qt::RoundCap);		//端点样式
	pen.setJoinStyle(Qt::BevelJoin);	//连接样式
	p.setPen(pen);

	//设置线性渐变画刷
	QLinearGradient lineGrad(0, 0, 100, 0);	//设置起点，终点
	lineGrad.setColorAt(0, Qt::yellow);		//起点颜色
	lineGrad.setColorAt(1, Qt::green);		//终点颜色
	lineGrad.setSpread(QGradient::PadSpread);	//展布模式
	p.setBrush(lineGrad);

	//设置字体
	QFont font;
	font.setFamily("宋体");		//宋体、12号、加粗、斜体
	font.setPointSize(12);
	font.setBold(true);
	font.setItalic(true);
	p.setFont(font);

	//设置复合模式
	p.setCompositionMode(QPainter::CompositionMode_Difference);
	//p.setCompositionMode(QPainter::RasterOp_SourceXorDestination);

	for (int i = 0; i < 36; i++)
	{
		p.drawEllipse(QPoint(50, 0), 50, 50);	//叠加绘制椭圆
		p.rotate(10);	//每次坐标顺时针旋转10度
	}

	p.restore();	//还原坐标系统

	p.translate(10, 20);	//坐标原点平移到(10, 20)

	p.drawText(QPoint(0, 0), "二维图形");
}
