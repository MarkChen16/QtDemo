#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_HelloWorld.h"

class HelloWorld : public QMainWindow
{
	Q_OBJECT

public:
	HelloWorld(QWidget *parent = Q_NULLPTR);

private:
	Ui::HelloWorldClass ui;
};
