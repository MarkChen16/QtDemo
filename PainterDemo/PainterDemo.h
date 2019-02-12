#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_PainterDemo.h"

class PainterDemo : public QMainWindow
{
	Q_OBJECT

public:
	PainterDemo(QWidget *parent = Q_NULLPTR);

	void paintEvent(QPaintEvent *event);

private:
	Ui::PainterDemoClass ui;
};
