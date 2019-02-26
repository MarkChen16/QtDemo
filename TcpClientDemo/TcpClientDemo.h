#pragma once

#include <QtWidgets/QWidget>
#include "ui_TcpClientDemo.h"

class TcpClientDemo : public QWidget
{
	Q_OBJECT

public:
	TcpClientDemo(QWidget *parent = Q_NULLPTR);

private:
	Ui::TcpClientDemoClass ui;
};
