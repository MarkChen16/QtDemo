#include "QBatteryBox.h"

#pragma execution_character_set("UTF-8")

QBatteryBox::QBatteryBox(QWidget *parent)
	: QWidget(parent)
{
}

void QBatteryBox::setPowerLevel(int pow)
{
	if (mPowerLevel == pow) return;

	if (pow < 0 || pow > 100) return;

	mPowerLevel = pow;
	emit powerLevelChanged(mPowerLevel);

	repaint();	//重新绘制界面
}

int QBatteryBox::powerLevel()
{
	return mPowerLevel;
}

void QBatteryBox::setWarnLevel(int pow)
{
	if (pow < 0 || pow > 100) return;

	mWarnLevel = pow;

	repaint();	//重新绘制界面
}

int QBatteryBox::warnLevel()
{
	return mWarnLevel;
}

QSize QBatteryBox::sizeHint()
{
	//保持高和宽的比例
	int H = this->height();
	int W = H * 12 / 5;

	return QSize(W, H);
}

void QBatteryBox::paintEvent(QPaintEvent *event)
{
	//绘制界面：提升法不能即时显示界面，自定义插件可以在设计器上实时显示界面效果
	QPainter p(this);

	//打印区域
	QRect rect(0, 0, width(), height());

	p.setViewport(rect);	//设置viewport，解决缩放的坐标换算的问题
	p.setWindow(0, 0, 120, 50);	//设置窗口大小，逻辑坐标
	p.setRenderHint(QPainter::Antialiasing);	//锯齿处理
	p.setRenderHint(QPainter::TextAntialiasing);

	//绘制背景和边框
	QPen pen;
	pen.setColor(mColorBorder);
	pen.setWidth(2);
	pen.setStyle(Qt::SolidLine);
	pen.setCapStyle(Qt::FlatCap);
	pen.setJoinStyle(Qt::BevelJoin);
	p.setPen(pen);

	QBrush brush;
	brush.setColor(mColorBack);
	brush.setStyle(Qt::SolidPattern);
	p.setBrush(brush);

	rect.setRect(1, 1, 109, 48);
	p.drawRect(rect);

	//画正极
	brush.setColor(mColorBorder);
	p.setBrush(brush);
	rect.setRect(110, 15, 10, 20);
	p.drawRect(rect);

	//画电池柱
	if (mPowerLevel > mWarnLevel)
	{
		brush.setColor(mColorPowerNormal);
		pen.setColor(mColorPowerNormal);
	}
	else
	{
		brush.setColor(mColorPowerWarning);
		pen.setColor(mColorPowerWarning);
	}

	p.setBrush(brush);
	p.setPen(pen);

	if (mPowerLevel > 0)
	{
		rect.setRect(5, 5, mPowerLevel, 40);
		p.drawRect(rect);
	}

	//画电量百分比的文字
	QFontMetrics textSize(this->font());	//文本大小
	QString powStr = QString::asprintf("当前电量：%d%%", mPowerLevel);		//输出中文

	QRect textRect = textSize.boundingRect(powStr);	//获取文本区域
	p.setFont(this->font());
	pen.setColor(mColorBorder);
	p.setPen(pen);
	p.drawText(55 - textRect.width() / 2, 23 + textRect.height() / 2, powStr);
}