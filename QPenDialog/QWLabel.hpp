#pragma once
#include <QtWidgets\qlabel.h> 

class QWLabel : public QLabel {
	Q_OBJECT

public:
	QWLabel(QWidget * parent = Q_NULLPTR);
	~QWLabel();

	void  setBackColor(QColor color);

protected:
	void paintEvent(QPaintEvent *event);

private:
	QColor mBackColor;
};
