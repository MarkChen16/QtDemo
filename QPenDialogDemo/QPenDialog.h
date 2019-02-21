#pragma once

#include "qpendialog_global.h"

#include <qpen.h>

class QPenDialog
{
public:
	QPenDialog(QWidget *parent = nullptr);
	QPenDialog(QPen initPen, QWidget *parent = nullptr);

	bool Show();
	QPen getPen();

private:
	QWidget *mParent;
	QPen mPen;
};
