#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GraphicsViewDemo.h"

#include <qlabel.h>

class GraphicsViewDemo : public QMainWindow
{
	Q_OBJECT

public:
	static const int ItemId = 1;		//用于自定义数据编号的key
	static const int ItemType = 2;		//用于自定义数据类型的key

	int seqNum = 0;	//图形项的编号
	int frontZ = 0;	//前面的叠放顺序
	int backZ = 0;	//后面的叠放顺序

	GraphicsViewDemo(QWidget *parent = Q_NULLPTR);

	void initGraphicsView();

	void clearChecked();

	private slots:
	void on_graphicsView_itemSelect(QPoint point);
	void on_graphicsView_itemMove(QPoint point);
	void on_graphicsView_itemOption(QPoint point);
	void on_graphicsView_itemShortcut(QKeyEvent *e);

	void on_actEnlarge_triggered();
	void on_actLessen_triggered();
	void on_actGoBack_triggered();

	void on_actLeftTrans_triggered();
	void on_actRightTrans_triggered();

	void on_actGoFront_triggered();
	void on_actGoBottom_triggered();

	void on_actGroup_triggered();
	void on_actNoGroup_triggered();

	void on_actDel_triggered();

	void onItemActTriggered(bool bChecked);

private:
	Ui::GraphicsViewDemoClass ui;

	QLabel *labViewPos;
	QLabel *labScenePos;
	QLabel *labItemPos;
	QLabel *labItemInfo;

	QString selItemType;

	QPen pen;
	QBrush brush;
	QFont font;

	QGraphicsScene *theScene;
};
