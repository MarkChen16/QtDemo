#include "GetPenDialog.hpp"

#include <qpainter.h>
#include <QtWidgets\qcolordialog.h>

GetPenDialog::GetPenDialog(QPen pen, QWidget * parent) : QDialog(parent) {
	ui.setupUi(this);
	mPen = pen;

	//初始化界面
	ui.cbStyle->setCurrentIndex(mPen.style());
	ui.sbWidth->setValue(mPen.width());
	ui.labColor->setBackColor(mPen.color());
}

GetPenDialog::~GetPenDialog() {
	
}

QPen GetPenDialog::getPen()
{
	return mPen;
}

void GetPenDialog::on_cbStyle_currentIndexChanged(int index)
{
	mPen.setStyle(Qt::PenStyle(index));
}

void GetPenDialog::on_sbWidth_ValueChanged(int iValue)
{
	mPen.setWidth(iValue);
}

void GetPenDialog::on_btnColor_clicked()
{
	QColor color = QColorDialog::getColor(mPen.color());
	if (color.isValid() == false) return;

	mPen.setColor(color);
	ui.labColor->setBackColor(mPen.color());
}

