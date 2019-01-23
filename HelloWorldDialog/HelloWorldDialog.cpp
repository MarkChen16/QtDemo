#include "HelloWorldDialog.h"

HelloWorldDialog::HelloWorldDialog(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//绑定自定义槽函数
	connect(ui.rb1, SIGNAL(clicked()), this, SLOT(setTextColor()));
	connect(ui.rb2, SIGNAL(clicked()), this, SLOT(setTextColor()));
	connect(ui.rb3, SIGNAL(clicked()), this, SLOT(setTextColor()));

	//初始化界面
	setTextColor();
	on_cb1_clicked(ui.cb1->isChecked());
	on_cb2_clicked(ui.cb2->isChecked());
	on_cb3_clicked(ui.cb3->isChecked());
}

void HelloWorldDialog::on_cb1_clicked(bool clicked)
{
	QFont font = ui.tbHello->font();
	font.setUnderline(clicked);

	ui.tbHello->setFont(font);
}

void HelloWorldDialog::on_cb2_clicked(bool clicked)
{
	QFont font = ui.tbHello->font();
	font.setItalic(clicked);

	ui.tbHello->setFont(font);
}

void HelloWorldDialog::on_cb3_clicked(bool clicked)
{
	QFont font = ui.tbHello->font();
	font.setBold(clicked);

	ui.tbHello->setFont(font);
}

void HelloWorldDialog::setTextColor()
{
	QPalette plet = ui.tbHello->palette();

	if (ui.rb1->isChecked()) plet.setColor(QPalette::Text, Qt::black);
	if (ui.rb2->isChecked()) plet.setColor(QPalette::Text, Qt::red);
	if (ui.rb3->isChecked()) plet.setColor(QPalette::Text, Qt::blue);

	ui.tbHello->setPalette(plet);
}

