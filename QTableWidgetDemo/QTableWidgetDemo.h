#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTableWidgetDemo.h"

#include <qdatetime.h>
#include <qlabel.h>


class QTableWidgetDemo : public QMainWindow
{
	Q_OBJECT

public:
	QTableWidgetDemo(QWidget *parent = Q_NULLPTR);

	enum colType;

	void createRow(int rowNo, QString sName, QString sSex, QDate birth, QString sNation, int iScore, bool isPM);
	void createCell(int iRow, int iCol, colType type, QString sText, QVariant vData);

	private slots:
	void initTableHead();
	void setRows();
	void initData();

	void insertRow();
	void addRow();
	void delRow();

	void autoRowH();
	void autoColW();

	void readToText();

	void editAble();
	void spacingColor();
	void showRowHead();
	void showColHead();

	void selRowMode();
	void selCellMode();

	void cellClicked(int row, int col);

private:
	Ui::QTableWidgetDemoClass ui;

	QLabel *labPos;
	QLabel *labType;
	QLabel *labContent;

	enum colType
	{
		ctName, ctSex, ctBirth, ctNation, ctScore, ctPM
	};

};
