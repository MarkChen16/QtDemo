#pragma once

#include <QtWidgets/QWidget>

#include <qpainter.h>

//使用组件删除QDESIGNER_WIDGET_EXPORT宏
class QBatteryBox : public QWidget
{
	Q_OBJECT

	//自定义属性，powerLevel 的读写函数、信号、在QT Designer上可见
	Q_PROPERTY(int powerLevel READ powerLevel WRITE setPowerLevel NOTIFY powerLevelChanged DESIGNABLE true)

public:
	explicit QBatteryBox(QWidget *parent = Q_NULLPTR);

	void setPowerLevel(int pow);
	int powerLevel();

	void setWarnLevel(int pow);
	int warnLevel();

	QSize sizeHint();

signals:
	void powerLevelChanged(int pow);

protected:
	void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;

private:
	QColor mColorBack = Qt::white;
	QColor mColorBorder = Qt::black;
	QColor mColorPowerNormal = Qt::green;
	QColor mColorPowerWarning = Qt::red;

	int mPowerLevel = 60;
	int mWarnLevel = 20;
};
