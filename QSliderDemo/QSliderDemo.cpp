#include "QSliderDemo.h"

QSliderDemo::QSliderDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	on_color_select();
	on_contorl_select();
}

void QSliderDemo::on_color_select()
{
	int iR = ui.hsRed->value();
	int iG = ui.hsGreen->value();
	int iB = ui.hsBlue->value();
	int iA = ui.hsAlpha->value();

	QColor c(iR, iG, iB, iA);
	QPalette pal = ui.textEdit->palette();
	pal.setColor(QPalette::Base, c);
	ui.textEdit->setPalette(pal);
}

void QSliderDemo::on_contorl_select()
{
	ui.lcdNum->display(ui.diContorl->value());
}
