#pragma once

#include <QtWidgets/QDialog>
#include "ui_QSliderDemo.h"

class QSliderDemo : public QDialog
{
	Q_OBJECT

public:
	QSliderDemo(QWidget *parent = Q_NULLPTR);

private slots:
	void on_color_select();
	void on_contorl_select();

private:
	Ui::QSliderDemoClass ui;
};
