#pragma once

#include "qpendialoglib_global.h"

#include <QtWidgets/QDialog>
#include <qpen.h>

class QPENDIALOGLIB_EXPORT QPenDialogLib
{
	Q_OBJECT

public:
	QPenDialogLib();
	QPenDialogLib(QPen initPen);

	QPen getPen();

private:
	QPen mPen;
};
