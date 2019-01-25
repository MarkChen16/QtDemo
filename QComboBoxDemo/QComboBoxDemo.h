#pragma once

#include <QtWidgets/QDialog>
#include "ui_QComboBoxDemo.h"

class QComboBoxDemo : public QDialog
{
	Q_OBJECT

public:
	QComboBoxDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::QComboBoxDemoClass ui;
};
