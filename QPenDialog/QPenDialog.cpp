#include "QPenDialog.h"

#include "GetPenDialog.hpp"
#include <QtWidgets\qmessagebox.h>

QPenDialog::QPenDialog(QWidget *parent)
{
	mPen.setColor(Qt::black);
	mPen.setWidth(1);
	mPen.setStyle(Qt::SolidLine);
	mPen.setCapStyle(Qt::FlatCap);
	mPen.setJoinStyle(Qt::BevelJoin);

	mParent = parent;
}

QPenDialog::QPenDialog(QPen initPen, QWidget *parent)
{
	mPen = initPen;
	mParent = parent;
}

bool QPenDialog::Show()
{
	GetPenDialog *penDialog = new GetPenDialog(mPen, mParent);
	int intRev = penDialog->exec();		//显示模式窗体
	if (intRev == QDialog::Accepted)
	{
		mPen = penDialog->getPen();

		delete penDialog;
		return true;
	}

	delete penDialog;
	return false;
}

QPen QPenDialog::getPen()
{
	return mPen;
}
