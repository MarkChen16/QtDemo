#pragma once

#include <QtWidgets/QDialog>
#include "ui_QSpinBoxDemo.h"

class QSpinBoxDemo : public QDialog
{
	Q_OBJECT

public:
	QSpinBoxDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_count();

private:
	Ui::QSpinBoxDemoClass ui;
};
