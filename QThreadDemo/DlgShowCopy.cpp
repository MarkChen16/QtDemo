#include "DlgShowCopy.hpp"


#pragma execution_character_set("UTF-8")

DlgShowCopy::DlgShowCopy(int showType, QString strTitle, QWidget * parent) : QWidget(parent) {
	ui.setupUi(this);

	this->setWindowTitle(strTitle);

	QThreadDemo *theDemo = (QThreadDemo *)parent;

	thrShow = new QThreadShow(theDemo->cup, showType, this);
	connect(thrShow, SIGNAL(ShowValue(QVariant)), this, SLOT(on_showValue(QVariant)));
	thrShow->start();
}

DlgShowCopy::~DlgShowCopy() 
{
	thrShow->askForStop();

	delete thrShow;
}

void DlgShowCopy::on_showValue(QVariant var)
{
	QDiceBuff buff = var.value<QDiceBuff>();

	for each (QDiceResult result in buff)
	{
		QString strInfo = QString::asprintf("%d Times: (%d %d %d)", result.seq, result.x, result.y, result.z);
		ui.lstDice->insertItem(0, strInfo);
	}
}
