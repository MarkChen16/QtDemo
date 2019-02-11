#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_BinaryFileDemo.h"

//QStandardItemModel
#include "qstandarditemmodel.h"

class BinaryFileDemo : public QMainWindow
{
	Q_OBJECT

public:
	BinaryFileDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_actionOpenSTM_triggered();
	void on_actionSaveSTM_triggered();
	void on_actionOpenDAT_triggered();
	void on_actionSaveDAT_triggered();
	void on_actionAddRow_triggered();
	void on_actionInsertRow_triggered();
	void on_actionDelRow_triggered();


private:
	Ui::BinaryFileDemoClass ui;

	QStandardItemModel *theModel;
	QItemSelectionModel *selModel;

	QString strSTMFile;
	QString strDATFile;

	int iRowBase = 1000;
};
