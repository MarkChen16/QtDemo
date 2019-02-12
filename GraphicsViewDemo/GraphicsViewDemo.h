#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GraphicsViewDemo.h"

class GraphicsViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	GraphicsViewDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::GraphicsViewDemoClass ui;
};
