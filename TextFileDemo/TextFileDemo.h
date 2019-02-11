#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_TextFileDemo.h"

class TextFileDemo : public QMainWindow
{
	Q_OBJECT

public:
	TextFileDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_actionOpenTextFile_triggered();
	void on_actionSaveTextFile_triggered();
	void on_actionAbout_triggered();

private:
	Ui::TextFileDemoClass ui;

	QString strFileName;
};
