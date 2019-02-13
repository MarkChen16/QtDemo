#pragma once
#include <qgraphicsview.h>
#include <qevent.h>

//GraphicsView����ǿ����
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
	void itemSelect(QPoint point);	//ѡ��
	void itemMove(QPoint point);	//�ƶ�

	void itemOption(QPoint point);	//ѡ��

	void itemShortcut(QKeyEvent *e);	//��ݼ�

};

