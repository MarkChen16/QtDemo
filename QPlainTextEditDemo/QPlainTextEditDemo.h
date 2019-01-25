#pragma once

#include <QtWidgets/QDialog>
#include "ui_QPlainTextEditDemo.h"

class QPlainTextEditDemo : public QDialog
{
	Q_OBJECT

public:
	QPlainTextEditDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnAppend_clicked();
	void on_btnReadLine_clicked();
	void on_btnReadAll_clicked();

private:
	Ui::QPlainTextEditDemoClass ui;

	int iRow = 0;
};
