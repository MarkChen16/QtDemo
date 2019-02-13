#include "GraphicsViewDemo.h"

#include <qdatetime.h>

#include <qgraphicsitem.h>

#include <qvector.h>

#pragma execution_character_set("UTF-8")

GraphicsViewDemo::GraphicsViewDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//初始化画笔、画刷、字体
	pen.setColor(Qt::blue);
	pen.setWidth(1);
	pen.setStyle(Qt::SolidLine);
	pen.setJoinStyle(Qt::BevelJoin);
	pen.setCapStyle(Qt::RoundCap);

	brush.setColor(Qt::yellow);
	brush.setStyle(Qt::SolidPattern);

	font.setFamily("宋体");
	font.setPointSize(12);
	font.setBold(true);

	//初始化状态栏
	ui.statusBar->addWidget(new QLabel("View 坐标：", this));

	labViewPos = new QLabel(this);
	labViewPos->setMinimumWidth(100);
	ui.statusBar->addWidget(labViewPos);

	ui.statusBar->addWidget(new QLabel("Scene 坐标：", this));

	labScenePos = new QLabel(this);
	labScenePos->setMinimumWidth(100);
	ui.statusBar->addWidget(labScenePos);

	ui.statusBar->addWidget(new QLabel("Item 坐标：", this));

	labItemPos = new QLabel(this);
	labItemPos->setMinimumWidth(100);
	ui.statusBar->addWidget(labItemPos);

	ui.statusBar->addWidget(new QLabel("Item 内容：", this));

	labItemInfo = new QLabel(this);
	labItemInfo->setMinimumWidth(300);
	ui.statusBar->addWidget(labItemInfo);

	this->setCentralWidget(ui.graphicsView);

	qsrand(QTime::currentTime().second());	//随机数初始化
	
	initGraphicsView();

	//绑定信号槽
	connect(ui.actRect, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
	connect(ui.actEllipse1, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
	connect(ui.actEllipse2, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
	connect(ui.actPolygon1, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
	connect(ui.actPolygon2, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
	connect(ui.actLine, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
	connect(ui.actText, SIGNAL(triggered(bool)), this, SLOT(onItemActTriggered(bool)));
}

void GraphicsViewDemo::initGraphicsView()
{
	theScene = new QGraphicsScene(-300, -200, 600, 400);

	ui.graphicsView->setScene(theScene);		//关联Scene场景
	ui.graphicsView->setCursor(Qt::CrossCursor);	//设置光标
	ui.graphicsView->setMouseTracking(true);	//开启鼠标移动事件
	ui.graphicsView->setDragMode(QGraphicsView::RubberBandDrag);	//设置拖放模式

	ui.graphicsView->setRenderHint(QPainter::Antialiasing);		//消除图形锯齿
	ui.graphicsView->setRenderHint(QPainter::TextAntialiasing);	//消除文本锯齿
}

void GraphicsViewDemo::clearChecked()
{
	QList<QAction *> lst = ui.toolBar->actions();

	for each (QAction * var in lst)
	{
		var->setChecked(false);
	}
}

void GraphicsViewDemo::on_graphicsView_itemSelect(QPoint point)
{
	if (selItemType.isEmpty())
	{
		//选择图形项 
		QPointF pointScene = ui.graphicsView->mapToScene(point);
		QGraphicsItem *item = theScene->itemAt(pointScene, ui.graphicsView->transform());

		labItemInfo->clear();
		labItemPos->clear();
		if (item != NULL)
		{
			labItemPos->setText(QString::asprintf("%.0f %.0f", pointScene.x(), pointScene.y()));

			labItemInfo->setText(QString::asprintf("%d %s", 
				item->data(ItemId).toInt(), 
				item->data(ItemType).toString().toStdString().c_str()));
		}
	}
	else
	{
		//添加图形项
		if ("矩形" == selItemType)
		{
			QGraphicsRectItem *item = new QGraphicsRectItem(-50, -30, 100, 60);

			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setBrush(brush);	//设置画刷
			item->setZValue(++frontZ);	//设置叠放的顺序
			item->setPos(ui.graphicsView->mapToScene(point));	//设置出现的位置

			//设置自定义数据
			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);
			
			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}
		else if ("椭圆" == selItemType)
		{
			//Item的原点在图形的中心
			QGraphicsEllipseItem *item = new QGraphicsEllipseItem(-50, -30, 100, 60);

			//设置可以选择、可以移动，有焦点
			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setBrush(brush);	//设置画刷
			item->setZValue(++frontZ);	//设置叠放的顺序
			item->setPos(ui.graphicsView->mapToScene(point));	//设置出现的位置

			//设置自定义数据
			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);
			
			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}
		else if ("圆形" == selItemType)
		{
			//Item的原点在图形的中心
			QGraphicsEllipseItem *item = new QGraphicsEllipseItem(-50, -30, 50, 30);

			//设置可以选择、可以移动，有焦点
			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setBrush(brush);	//设置画刷
			item->setZValue(++frontZ);	//设置叠放的顺序
			item->setPos(ui.graphicsView->mapToScene(point));	//设置出现的位置

																//设置自定义数据
			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);

			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}
		else if ("三角" == selItemType)
		{
			//Item的原点在图形的中心
			QVector<QPointF> lstPoint;
			lstPoint.append(QPointF(-50, 0));
			lstPoint.append(QPointF(0, -50));
			lstPoint.append(QPointF(50, 0));

			QGraphicsPolygonItem *item = new QGraphicsPolygonItem(QPolygonF(lstPoint));

			//设置可以选择、可以移动，有焦点
			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setBrush(brush);	//设置画刷
			item->setZValue(++frontZ);	//设置叠放的顺序
			item->setPos(ui.graphicsView->mapToScene(point));	//设置出现的位置

																//设置自定义数据
			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);

			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}
		else if ("梯形" == selItemType)
		{
			//Item的原点在图形的中心
			QVector<QPointF> lstPoint;
			lstPoint.append(QPointF(-50, 0));
			lstPoint.append(QPointF(50, 0));
			lstPoint.append(QPointF(30, -50));
			lstPoint.append(QPointF(-30, -50));

			QGraphicsPolygonItem *item = new QGraphicsPolygonItem(QPolygonF(lstPoint));

			//设置可以选择、可以移动，有焦点
			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setBrush(brush);	//设置画刷
			item->setZValue(++frontZ);	//设置叠放的顺序
			item->setPos(ui.graphicsView->mapToScene(point));	//设置出现的位置

																//设置自定义数据
			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);

			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}
		else if ("直线" == selItemType)
		{
			QGraphicsLineItem *item = new QGraphicsLineItem(-50, -50, 50, 50);

			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setPen(pen);
			item->setZValue(++frontZ);
			item->setPos(ui.graphicsView->mapToScene(point));

			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);

			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}
		else if ("文字" == selItemType)
		{
			QGraphicsTextItem *item = new QGraphicsTextItem("Sample Text");

			item->setFlags(QGraphicsItem::ItemIsFocusable |
				QGraphicsItem::ItemIsMovable |
				QGraphicsItem::ItemIsSelectable);

			item->setFont(font);
			item->setZValue(++frontZ);
			item->setPos(ui.graphicsView->mapToScene(point));

			item->setData(ItemId, ++seqNum);
			item->setData(ItemType, selItemType);

			theScene->addItem(item);
			theScene->clearSelection();

			item->setSelected(true);
		}

		selItemType = "";
		clearChecked();

		ui.graphicsView->setCursor(Qt::CrossCursor);
	}
}

void GraphicsViewDemo::on_graphicsView_itemMove(QPoint point)
{
	labViewPos->setText(QString::asprintf("%d, %d", point.x(), point.y()));

	QPointF pf = ui.graphicsView->mapToScene(point);
	labScenePos->setText(QString::asprintf("%.0f, %.0f", pf.x(), pf.y()));
}

void GraphicsViewDemo::on_graphicsView_itemOption(QPoint point)
{
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		QString strType = item->data(ItemType).toString();
		if ("矩形" == strType)
		{
			SetBrushColor<QGraphicsRectItem>(item);
		}
		else if ("椭圆" == strType || "圆形" == strType)
		{
			SetBrushColor<QGraphicsEllipseItem>(item);
		}
		else if ("三角" == strType || "梯形" == strType)
		{
			SetBrushColor<QGraphicsPolygonItem>(item);
		}
		else if ("直线" == strType)
		{
			SetPenColor<QGraphicsLineItem>(item);
		}
		else if ("文字" == strType)
		{
			QGraphicsTextItem *currItem = (QGraphicsTextItem *)item;

			bool bOk = false;
			QFont font = QFontDialog::getFont(&bOk, currItem->font(), this, "请选择一个字体");
			if (bOk)
			{
				currItem->setFont(font);
			}
		}
	}
}

void GraphicsViewDemo::on_graphicsView_itemShortcut(QKeyEvent * e)
{
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		if (e->key() == Qt::Key_Delete)
		{
			theScene->removeItem(item);
		}
		else if (e->key() == Qt::Key_Space)
		{
			item->setRotation(90 + item->rotation());
		}
		else if (e->key() == Qt::Key_PageUp)
		{
			item->setScale(item->scale()*1.1);
		}
		else if (e->key() == Qt::Key_PageDown)
		{
			item->setScale(item->scale()*0.9);
		}
		else if (e->key() == Qt::Key_Up)
		{
			item->setY(-1 + item->y());
		}
		else if (e->key() == Qt::Key_Down)
		{
			item->setY(1 + item->y());
		}
		else if (e->key() == Qt::Key_Left)
		{
			item->setX(-1+item->x());
		}
		else if (e->key() == Qt::Key_Right)
		{
			item->setX(1 + item->x());
		}
	}
}

void GraphicsViewDemo::on_actEnlarge_triggered()
{
	//放大
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		//放大单个图形项
		QGraphicsItem *item = theScene->selectedItems().at(0);

		qreal scale = item->scale() * 1.1;
		item->setScale(scale);	//放大1.1倍
	}
	else
	{
		//放大视图
		ui.graphicsView->scale(1.1, 1.1);
	}
}

void GraphicsViewDemo::on_actLessen_triggered()
{
	//缩小
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		//缩小单个图形项
		QGraphicsItem *item = theScene->selectedItems().at(0);

		qreal scale = item->scale() * 0.9;
		item->setScale(scale);	//缩小0.9倍
	}
	else
	{
		//缩小视图
		ui.graphicsView->scale(0.9, 0.9);
	}
}

void GraphicsViewDemo::on_actGoBack_triggered()
{
	//取消变换
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		item->resetTransform();
	}
	else
	{
		ui.graphicsView->resetTransform();
	}
}

void GraphicsViewDemo::on_actLeftTrans_triggered()
{
	//左旋转
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		item->setRotation(-30 + item->rotation());
	}
	else
	{
		ui.graphicsView->rotate(-30);
	}
}

void GraphicsViewDemo::on_actRightTrans_triggered()
{
	//右旋转
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		item->setRotation(30 + item->rotation());
	}
	else
	{
		ui.graphicsView->rotate(30);
	}
}

void GraphicsViewDemo::on_actGoFront_triggered()
{
	//只处理第一个选中的图形项
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		item->setZValue(++frontZ);	//越大越前
	}
}

void GraphicsViewDemo::on_actGoBottom_triggered()
{
	//只处理第一个选中的图形项
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItem *item = theScene->selectedItems().at(0);

		item->setZValue(--backZ);	//越小越后
	}
}

void GraphicsViewDemo::on_actGroup_triggered()
{
	//组合
	int cnt = theScene->selectedItems().count();
	if (cnt > 1)
	{
		//创建组合，并添加选择的图形项在里面
		QGraphicsItemGroup *group = new QGraphicsItemGroup;
		theScene->addItem(group);

		for (int i = 0; i < cnt; i++)
		{
			QGraphicsItem *item = theScene->selectedItems().at(0);	//每次添加第一个
			item->setSelected(false);
			item->clearFocus();

			group->addToGroup(item);	//添加到组合
		}

		group->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsFocusable | QGraphicsItem::ItemIsSelectable);
		group->setZValue(++frontZ);
		
		theScene->clearSelection();
		group->setSelected(true);
	}
}

void GraphicsViewDemo::on_actNoGroup_triggered()
{
	//取消组合
	int cnt = theScene->selectedItems().count();
	if (cnt == 1)
	{
		QGraphicsItemGroup *group = static_cast<QGraphicsItemGroup *>(theScene->selectedItems().at(0));
		if (group != NULL)
		{
			theScene->destroyItemGroup(group);
		}
	}
}

void GraphicsViewDemo::on_actDel_triggered()
{
	//删除图形项
	int cnt = theScene->selectedItems().count();
	if (cnt > 0)
	{
		for (int i = 0; i < cnt; i++)
		{
			QGraphicsItem *item = theScene->selectedItems().at(i);
			
			theScene->removeItem(item);
		}
	}
}

void GraphicsViewDemo::onItemActTriggered(bool bChecked)
{
	clearChecked();

	QAction *theAct = (QAction *)sender();
	theAct->setChecked(bChecked);

	if (bChecked)
	{
		selItemType = theAct->text();

		QCursor cur(QPixmap(":/GraphicsViewDemo/Resources/TASKL.ICO"));
		ui.graphicsView->setCursor(cur);
	}
	else
	{
		selItemType = "";

		ui.graphicsView->setCursor(Qt::CrossCursor);
	}
}
