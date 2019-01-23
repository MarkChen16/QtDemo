#pragma once

#include <QtWidgets/QDialog>
#include "ui_HelloWorldDialog.h"

//QT Designer可视化UI设计：ui_HelloWorldDialog.h自动生成控件、布局、信号/槽的代码
class HelloWorldDialog : public QDialog
{
	Q_OBJECT	//使用信号和槽的控件需要加入这个宏定义

public:
	HelloWorldDialog(QWidget *parent = Q_NULLPTR);

private slots:	//以下函数为槽函数
	//通过connectSlotsByName自动绑定，槽函数名称限定为on_<sender>_<signal>()
	void on_cb1_clicked(bool clicked);
	void on_cb2_clicked(bool clicked);
	void on_cb3_clicked(bool clicked);

	//自定义槽函数，需要connect函数绑定
	void setTextColor();

private:
	Ui::HelloWorldDialogClass ui;	//包含界面上所有控件
};
