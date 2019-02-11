#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MuliWindowDemo.h"

class MuliWindowDemo : public QMainWindow
{
	Q_OBJECT

public:
	MuliWindowDemo(QWidget *parent = Q_NULLPTR);

	void paintEvent(QPaintEvent *event);

	private slots:
	void on_actEmbedWidget_triggered();
	void on_actStandWidget_triggered();
	void on_actEmbedMainWindow_triggered();
	void on_actStandMainWindow_triggered();

	void on_tabWidget_tabCloseRequested(int intIndex);
	void on_tabWidget_currentChanged(int intIndex);

private:
	Ui::MuliWindowDemoClass ui;
};
