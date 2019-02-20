#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QSqlTableModelDemo.h"

#include <QtSql>
#include <qdatawidgetmapper.h>

#include "QWComboBoxDelegate.h"


class QSqlTableModelDemo : public QMainWindow
{
	Q_OBJECT

public:
	QSqlTableModelDemo(QWidget *parent = Q_NULLPTR);

	void openTable();		//打开数据表
	void getFieldNames();	//获取字段名称

	void closeEvent(QCloseEvent *event) override;

	private slots:
	void on_actOpen_triggered();

	void on_actAdd_triggered();
	void on_actInsert_triggered();
	void on_actDelete_triggered();

	void on_actSetImage_triggered();
	void on_actClearImage_triggered();

	void on_actAddSalary_triggered();
	void on_actCutSalary_triggered();

	void on_actSave_triggered();
	void on_actCancel_triggered();

	void on_currentChanged(const QModelIndex &current, const QModelIndex &previous);

	void on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous);

	void on_rbAsc_clicked(bool bCheck);
	void on_rbDesc_clicked(bool bCheck);
	void on_cbSort_currentIndexChanged(int index);

	void on_rbBoy_clicked(bool bCheck);
	void on_rbGril_clicked(bool bCheck);
	void on_rbBoyAndGril_clicked(bool bCheck);

private:
	Ui::QSqlTableModelDemoClass ui;

	//数据库连接
	QSqlDatabase DB;

	//数据模型
	QSqlTableModel *tabModel;

	//选择模型
	QItemSelectionModel *selModel;

	//数据映射
	QDataWidgetMapper *dataMapper;

	//自定义代理
	QWComboBoxDelegate cbDelegate;
};
