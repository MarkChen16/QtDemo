#pragma once

#include <QtWidgets/QWidget>
#include "ui_StandardDialogDemo.h"

class StandardDialogDemo : public QWidget
{
	Q_OBJECT

public:
	StandardDialogDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnOpenFile_clicked();
	void on_btnOpenFiles_clicked();
	void on_btnSaveFile_clicked();
	void on_btnSelDir_clicked();
	void on_OpenFileUrl_clicked();

	void on_btnPickColor_clicked();

	void on_btnPickFont_clicked();

	void on_btnInputLine_clicked();
	void on_btnInputInt_clicked();
	void on_btnInputFloat_clicked();
	void on_btnGetItem_clicked();
	void on_btnInputLines_clicked();

	void on_btnInfoMsg_clicked();
	void on_btnQuestMsg_clicked();
	void on_btnWarningMsg_clicked();
	void on_btnCriticalMsg_clicked();
	void on_btnAboutMsg_clicked();
	void on_btnAboutQtMsg_clicked();

private:
	Ui::StandardDialogDemoClass ui;

	QString currPath;
	QString fileFilter;
};
