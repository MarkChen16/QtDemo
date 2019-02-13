#pragma once
#include <qgraphicsview.h>
#include <qevent.h>

//GraphicsView的增强类型
class QWGraphicsView :
	public QGraphicsView
{
	Q_OBJECT

public:
	QWGraphicsView(QWidget *parent = 0);
	virtual ~QWGraphicsView();

	void mousePressEvent(QMouseEvent *e);
	void mouseMoveEvent(QMouseEvent *e);

	void mouseDoubleClickEvent(QMouseEvent *e);

	void keyPressEvent(QKeyEvent *e);

signals:
	void itemSelect(QPoint point);	//选择
	void itemMove(QPoint point);	//移动

	void itemOption(QPoint point);	//选项

	void itemShortcut(QKeyEvent *e);	//快捷键

};

