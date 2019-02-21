#pragma once

#include <QtWidgets/QDialog>
#include "ui_QLibraryDemo.h"

#include <qlibrary.h>

class QLibraryDemo : public QDialog
{
	Q_OBJECT

public:
	QLibraryDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnInv1_clicked();
	void on_btnInv2_clicked();

private:
	Ui::QLibraryDemoClass ui;
};
