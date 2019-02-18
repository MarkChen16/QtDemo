#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Q3DSurfaceDemo.h"

#include <QtDataVisualization>
using namespace QtDataVisualization;

class Q3DSurfaceDemo : public QMainWindow
{
	Q_OBJECT

public:
	Q3DSurfaceDemo(QWidget *parent = Q_NULLPTR);

	void initGraph3D();

private:
	Ui::Q3DSurfaceDemoClass ui;

	QWidget *graphContainer;

	Q3DSurface *surface;

	QSurface3DSeries *ser;

};
