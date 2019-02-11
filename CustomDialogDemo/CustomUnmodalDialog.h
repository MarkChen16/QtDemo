#pragma once

#include <qdialog.h>
#include "ui_CustomUnmodalDialog.h"

//非模式自定义对话框

class CustomUnmodalDialog :
	public QDialog
{
	Q_OBJECT
public:
	CustomUnmodalDialog(QWidget *parent = Q_NULLPTR);
	virtual ~CustomUnmodalDialog();

	//第一种交互操作方式：获取对方的指针实现互操作，调用成员函数
	void SetRGBA(int iR, int iG, int iB, int iA);

signals:
	//第二种交互操作方式：使用信号/槽
	void RGBAChanged(int iR, int iG, int iB, int iA);

	private slots:
	void on_hsRed_valueChanged(int value);
	void on_hsBlue_valueChanged(int value);
	void on_hsGreen_valueChanged(int value);
	void on_hsAlpha_valueChanged(int value);

private:
	//重写窗口常见的事件函数
	void closeEvent(QCloseEvent *event);
	void showEvent(QShowEvent *event);
	void paintEvent(QPaintEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseDoubleClickEvent(QMouseEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
	void keyPressEvent(QKeyEvent *event);
	void keyReleaseEvent(QKeyEvent *event);

	/*
	//QWidget中全部的事件函数定义：
	virtual void mousePressEvent(QMouseEvent *event);
	virtual void mouseReleaseEvent(QMouseEvent *event);
	virtual void mouseDoubleClickEvent(QMouseEvent *event);
	virtual void mouseMoveEvent(QMouseEvent *event);
	#ifndef QT_NO_WHEELEVENT
	virtual void wheelEvent(QWheelEvent *event);
	#endif
	virtual void keyPressEvent(QKeyEvent *event);
	virtual void keyReleaseEvent(QKeyEvent *event);
	virtual void focusInEvent(QFocusEvent *event);
	virtual void focusOutEvent(QFocusEvent *event);
	virtual void enterEvent(QEvent *event);
	virtual void leaveEvent(QEvent *event);
	virtual void paintEvent(QPaintEvent *event);
	virtual void moveEvent(QMoveEvent *event);
	virtual void resizeEvent(QResizeEvent *event);
	virtual void closeEvent(QCloseEvent *event);
	#ifndef QT_NO_CONTEXTMENU
	virtual void contextMenuEvent(QContextMenuEvent *event);
	#endif
	#ifndef QT_NO_TABLETEVENT
	virtual void tabletEvent(QTabletEvent *event);
	#endif
	#ifndef QT_NO_ACTION
	virtual void actionEvent(QActionEvent *event);
	#endif

	#ifndef QT_NO_DRAGANDDROP
	virtual void dragEnterEvent(QDragEnterEvent *event);
	virtual void dragMoveEvent(QDragMoveEvent *event);
	virtual void dragLeaveEvent(QDragLeaveEvent *event);
	virtual void dropEvent(QDropEvent *event);
	#endif

	virtual void showEvent(QShowEvent *event);
	virtual void hideEvent(QHideEvent *event);
	virtual bool nativeEvent(const QByteArray &eventType, void *message, long *result);
	*/

private:
	void GoRGBAChanged();

	Ui::CustomUnmodalDialogClass ui;


};

