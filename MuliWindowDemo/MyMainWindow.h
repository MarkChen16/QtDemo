#pragma once
#include <QMainWindow>
#include "ui_mymainwindow.h"

class MyMainWindow : public QMainWindow {
	Q_OBJECT

public:
	MyMainWindow(QWidget * parent = Q_NULLPTR);
	~MyMainWindow();

private:
	Ui::MyMainWindowClass ui;
};
