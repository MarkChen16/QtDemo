#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QListWidgetDemo.h"

class QListWidgetDemo : public QMainWindow
{
	Q_OBJECT

public:
	QListWidgetDemo(QWidget *parent = Q_NULLPTR);


private slots:
	void onClick(QListWidgetItem *item);

	void onInit();
	void onClear();
	void onInsert();
	void onAdd();
	void onDel();

	void onSelAll();
	void onSelNone();
	void onSelInvs();

	void on_listWidget_cutomContextMenuRequested(const QPoint &pos);

private:
	Ui::QListWidgetDemoClass ui;
};
