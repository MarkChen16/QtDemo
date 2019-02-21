#pragma once

#include <QtWidgets/QDialog>
#include "ui_QPenDialogDemo.h"

#include <qpen.h>

class QPenDialogDemo : public QDialog
{
	Q_OBJECT

public:
	QPenDialogDemo(QWidget *parent = Q_NULLPTR);

	void paintEvent(QPaintEvent *event);

	private slots:
	void on_btnGetPen_clicked();

private:
	Ui::QPenDialogDemoClass ui;

	QPen mPen;
};
