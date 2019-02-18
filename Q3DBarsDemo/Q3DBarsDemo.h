#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Q3DBarsDemo.h"

#include <QtDataVisualization>
using namespace QtDataVisualization;

class Q3DBarsDemo : public QMainWindow
{
	Q_OBJECT

public:
	Q3DBarsDemo(QWidget *parent = Q_NULLPTR);


	void init3DBars();

	int GetRangValue();

	void setCameraPos();

	private slots:
	void on_cbCameraPreset_currentIndexChanged(int index);

	void on_hsHorPos_valueChanged(int iValue);
	void on_hsVerPos_valueChanged(int iValue);
	void on_hsZoom_valueChanged(int iValue);

	void on_cbTheme_currentIndexChanged(int index);

	void on_cbMeshType_currentIndexChanged(int index);

	void on_cbSelectMode_currentIndexChanged(int index);

	void on_sbFontSize_valueChanged(int iValue);

	void on_btnItemColor_clicked();

	void on_cbShowBG_clicked(bool checked);
	void on_cbShowBGGrad_clicked(bool checked);
	void on_cbMeshSmooth_clicked(bool checked);
	void on_cbInvImage_clicked(bool checked);
	void on_cbAxisReverse_clicked(bool checked);
	void on_cbShowLabel_clicked(bool checked);
	void on_cbAxisShowTitle_clicked(bool checked);
	void on_cbAxisBGShowLabel_clicked(bool checked);

private:
	Ui::Q3DBarsDemoClass ui;

	//3DÍ¼±íµÄÈÝÆ÷
	QWidget *graphContainer;

	//3DÖù×´Í¼
	Q3DBars *bars;

	//ÐòÁÐ
	QBar3DSeries *ser;

};
