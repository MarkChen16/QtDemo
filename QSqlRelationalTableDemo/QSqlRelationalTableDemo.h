#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QSqlRelationalTableDemo.h"

#include <QtSql>
#include <qfiledialog.h>
#include <qmessagebox.h>

class QSqlRelationalTableDemo : public QMainWindow
{
	Q_OBJECT

public:
	QSqlRelationalTableDemo(QWidget *parent = Q_NULLPTR);

	void openTable();

	private slots:
	void on_actOpen_triggered();
	void on_actClose_triggered();
	void on_actInsert_triggered();
	void on_actDelete_triggered();
	void on_actSave_triggered();
	void on_actCancel_triggered();

	void on_currentChanged(const QModelIndex &current, const QModelIndex &parent);
	
private:
	Ui::QSqlRelationalTableDemoClass ui;

	//���ݿ�����
	QSqlDatabase DB;

	//��ϵ�����ݱ�ģ��
	QSqlRelationalTableModel *tabModel;

	//ѡ��ģ��
	QItemSelectionModel *selModel;
};
