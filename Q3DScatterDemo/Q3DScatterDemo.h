#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Q3DScatterDemo.h"

#include <QtDataVisualization>
using namespace QtDataVisualization;

class Q3DScatterDemo : public QMainWindow
{
	Q_OBJECT

public:
	Q3DScatterDemo(QWidget *parent = Q_NULLPTR);

	void initGraph3D();

private:
	Ui::Q3DScatterDemoClass ui;

	QWidget *graphContainer;

	Q3DScatter *scatter;

	QScatter3DSeries *ser;

};
