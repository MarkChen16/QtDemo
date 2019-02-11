#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MDIWindowDemo.h"

class MDIWindowDemo : public QMainWindow
{
	Q_OBJECT

public:
	MDIWindowDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_actionNew_triggered();
	void on_actionOpen_triggered();

	void on_actionCut_triggered();
	void on_actionCopy_triggered();
	void on_actionPaste_triggered();
	void on_actionClear_triggered();

	void on_actionMDIMode_triggered(bool bChecked);

	void on_actionCascading_triggered();
	void on_actionTile_triggered();

	void onTextSelected(bool isSel);

private:
	Ui::MDIWindowDemoClass ui;
};
