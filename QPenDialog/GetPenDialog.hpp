#pragma once
#include <QtWidgets/QDialog>
#include "ui_getpendialog.h"

#include <qpen.h>

class GetPenDialog : public QDialog {
	Q_OBJECT

public:
	GetPenDialog(QPen pen, QWidget * parent = Q_NULLPTR);
	~GetPenDialog();

	QPen getPen();

	private slots:
	void on_cbStyle_currentIndexChanged(int index);
	void on_sbWidth_ValueChanged(int iValue);
	void on_btnColor_clicked();

private:
	Ui::GetPenDialog ui;

	QPen mPen;
};
