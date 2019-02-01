#pragma once

#include <QtWidgets/QWidget>
#include "ui_QStringListModelDemo.h"

#include <qstringlistmodel.h>

class QStringListModelDemo : public QWidget
{
	Q_OBJECT

public:
	QStringListModelDemo(QWidget *parent = Q_NULLPTR);

	void initModel();

	private slots:
	void on_btnInit_clicked();
	void on_btnAdd_clicked();
	void on_btnInsert_clicked();
	void on_btnDel_clicked();
	void on_btnClear_clicked();
	void on_btnClearText_clicked();
	void on_btnShowData_clicked();

	void on_lvCity_clicked(QModelIndex index);

private:
	Ui::QStringListModelDemoClass ui;

	QStringListModel *model;


};
