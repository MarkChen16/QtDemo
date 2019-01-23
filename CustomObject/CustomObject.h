#pragma once

#include <QtWidgets/QDialog>
#include "ui_CustomObject.h"

#include "QPerson.h"

class CustomObject : public QDialog
{
	Q_OBJECT

public:
	CustomObject(QWidget *parent = Q_NULLPTR);
	~CustomObject();

	private slots:
	void incAge();
	void setAge(int value);

	void showMateInfo();

	//QPerson的槽函数
	void personAgeChanged(int value);

private:
	Ui::CustomObjectClass ui;

	QPerson *boy;
	QPerson *girl;
};
