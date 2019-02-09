#pragma once

#include <QtWidgets/QWidget>
#include "ui_CustomDialogDemo.h"

#include "CustomUnmodalDialog.h"

class CustomDialogDemo : public QWidget
{
	Q_OBJECT

public:
	CustomDialogDemo(QWidget *parent = Q_NULLPTR);

	//第一种非模式对话框交互方法
	void SetListColor(QColor color);
	void SetColorEnable(bool bEn);

	private slots:
	void on_btnEditItem_clicked();
	void on_btnSetColor_clicked();

	void onRGBAChanged(int iR, int iG, int iB, int iA);

public:
	//通过对话框的指针实现互操作
	CustomUnmodalDialog *umd;

private:
	Ui::CustomDialogDemoClass ui;
};
