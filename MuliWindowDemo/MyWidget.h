#pragma once
#include <QWidget>
#include "ui_mywidget.h"

class MyWidget : public QWidget {
	Q_OBJECT

public:
	MyWidget(QWidget * parent = Q_NULLPTR);
	~MyWidget();

private:
	Ui::MyWidgetClass ui;
};
