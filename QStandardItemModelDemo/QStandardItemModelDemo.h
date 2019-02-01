#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QStandardItemModelDemo.h"

#include <qlabel.h>
#include <qstandarditemmodel.h>

#include "QWIntSpinDelegate.h"
#include "QWBoolCheckDeleage.h"

class QStandardItemModelDemo : public QMainWindow
{
	Q_OBJECT

public:
	QStandardItemModelDemo(QWidget *parent = Q_NULLPTR);

	void initModel(QStringList lstData);

	private slots:
	void on_actOpenFile_triggered();
	void on_actSaveAs_triggered();
	void on_actPreview_triggered();
	void on_actAddRow_triggered();
	void on_actInsertRow_triggered();
	void on_actDelRow_triggered();
	void on_actAlignLeft_triggered();
	void on_actAlignCenter_triggered();
	void on_actAlignRight_triggered();
	void on_actBlod_triggered(bool isChecked);

	void on_currentChanged(QModelIndex currIndex, QModelIndex currPrevious);

private:
	Ui::QStandardItemModelDemoClass ui;

	QLabel *labCurrFile;
	QLabel *labCurrCell;
	QLabel *labCellContent;
	
	QStandardItemModel *theModel;	//数据模型
	QItemSelectionModel *theSelection;	//选择模型

	QWIntSpinDelegate dgInt;	//数字的自定义代理
	QWBoolCheckDeleage dgBool;	//布尔值的算定义代理
};
