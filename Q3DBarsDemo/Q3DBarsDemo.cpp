#include "Q3DBarsDemo.h"

#include <qsplitter.h>

#include <qcolordialog.h>

Q3DBarsDemo::Q3DBarsDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	init3DBars();

	QSplitter *sp = new QSplitter(Qt::Horizontal, this);
	sp->addWidget(ui.groupBox);
	sp->addWidget(graphContainer);
	
	this->setCentralWidget(sp);
}

void Q3DBarsDemo::init3DBars()
{
	//创建3D柱状图
	bars = new Q3DBars();
	graphContainer = QWidget::createWindowContainer(bars);	//Q3DBars继承于QWindows，所以要用createWindowContainer()创建容器

	//创建行、列、值坐标轴
	QStringList rowLabs;
	rowLabs << "row1" << "row2" << "row3";

	QStringList colLabs;
	colLabs << "col1" << "col2" << "col3" << "col4" << "col5";

	QCategory3DAxis *axisRow = new QCategory3DAxis();
	axisRow->setTitle("row");
	axisRow->setTitleVisible(true);
	axisRow->setLabels(rowLabs);

	QCategory3DAxis *axisCol = new QCategory3DAxis();
	axisCol->setTitle("col");
	axisCol->setTitleVisible(true);
	axisCol->setLabels(colLabs);

	QValue3DAxis *axisValue = new QValue3DAxis();
	axisValue->setTitle("value");
	axisValue->setTitleVisible(true);
	axisValue->setRange(0, 100);

	bars->setRowAxis(axisRow);
	bars->setColumnAxis(axisCol);
	bars->setValueAxis(axisValue);

	//创建序列
	ser = new QBar3DSeries();
	ser->setMesh(QAbstract3DSeries::MeshCylinder);	//棒图形状
	ser->setItemLabelFormat("(@rowLabel, @colLabel): %.1f");	//设置项标签的显示格式
	bars->addSeries(ser);

	//设置数据
	QBarDataArray *ds = new QBarDataArray();
	ds->reserve(rowLabs.count());	//分配大小

	QBarDataRow *dr;
	
	dr = new QBarDataRow();
	*dr << GetRangValue() << GetRangValue() << GetRangValue() << GetRangValue() << GetRangValue();
	ds->append(dr);

	dr = new QBarDataRow();
	*dr << GetRangValue() << GetRangValue() << GetRangValue() << GetRangValue() << GetRangValue();
	ds->append(dr);

	dr = new QBarDataRow();
	*dr << GetRangValue() << GetRangValue() << GetRangValue() << GetRangValue() << GetRangValue();
	ds->append(dr);

	//给默认数据代理设置数据
	ser->dataProxy()->resetArray(ds);
}

int Q3DBarsDemo::GetRangValue()
{
	return 30 + qrand() % 71;
}

void Q3DBarsDemo::setCameraPos()
{
	int iHor = ui.hsHorPos->value();
	int iVer = ui.hsVerPos->value();
	int iZoom = ui.hsZoom->value();

	bars->scene()->activeCamera()->setCameraPosition(iHor, iVer, iZoom);
}

void Q3DBarsDemo::on_hsHorPos_valueChanged(int iValue)
{
	setCameraPos();
}

void Q3DBarsDemo::on_hsVerPos_valueChanged(int iValue)
{
	setCameraPos();
}

void Q3DBarsDemo::on_hsZoom_valueChanged(int iValue)
{
	setCameraPos();
}

void Q3DBarsDemo::on_cbTheme_currentIndexChanged(int index)
{
	Q3DTheme *currTheme = bars->activeTheme();
	currTheme->setType(Q3DTheme::Theme(index));
}

void Q3DBarsDemo::on_cbMeshType_currentIndexChanged(int index)
{
	ser->setMesh(QtDataVisualization::QAbstract3DSeries::Mesh(index+1));
}

void Q3DBarsDemo::on_cbSelectMode_currentIndexChanged(int index)
{
	bars->setSelectionMode(QAbstract3DGraph::SelectionFlag(index));
}

void Q3DBarsDemo::on_sbFontSize_valueChanged(int iValue)
{
	QFont font = bars->activeTheme()->font();
	font.setPointSize(iValue);

	bars->activeTheme()->setFont(font);
}

void Q3DBarsDemo::on_btnItemColor_clicked()
{
	QColor color = QColorDialog::getColor(ser->baseColor(), this, "请选择一个颜色");
	if (!color.isValid()) return;
	
	ser->setBaseColor(color);
}

void Q3DBarsDemo::on_cbShowBG_clicked(bool checked)
{
	bars->activeTheme()->setBackgroundEnabled(checked);
}

void Q3DBarsDemo::on_cbShowBGGrad_clicked(bool checked)
{
	bars->activeTheme()->setGridEnabled(checked);
}

void Q3DBarsDemo::on_cbMeshSmooth_clicked(bool checked)
{
	ser->setMeshSmooth(checked);
}

void Q3DBarsDemo::on_cbInvImage_clicked(bool checked)
{
	bars->setShadowQuality(QAbstract3DGraph::ShadowQualitySoftHigh);
}

void Q3DBarsDemo::on_cbAxisReverse_clicked(bool checked)
{
	bars->valueAxis()->setReversed(checked);
}

void Q3DBarsDemo::on_cbShowLabel_clicked(bool checked)
{
	ser->setItemLabelVisible(checked);
}

void Q3DBarsDemo::on_cbAxisShowTitle_clicked(bool checked)
{
	bars->columnAxis()->setTitleVisible(checked);
	bars->rowAxis()->setTitleVisible(checked);
}

void Q3DBarsDemo::on_cbAxisBGShowLabel_clicked(bool checked)
{
	bars->activeTheme()->setLabelBackgroundEnabled(checked);
}

void Q3DBarsDemo::on_cbCameraPreset_currentIndexChanged(int index)
{
	bars->scene()->activeCamera()->setCameraPreset(Q3DCamera::CameraPreset(index + 1));
}
