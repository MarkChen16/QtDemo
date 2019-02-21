#include "QPenDialogLib.h"

QPenDialogLib::QPenDialogLib()
{
	mPen.setColor(Qt::black);
	mPen.setWidth(1);
	mPen.setStyle(Qt::SolidLine);
	mPen.setCapStyle(Qt::FlatCap);
	mPen.setJoinStyle(Qt::BevelJoin);
}

QPenDialogLib::QPenDialogLib(QPen initPen)
{
	mPen = initPen;
}

QPen QPenDialogLib::getPen()
{
}
