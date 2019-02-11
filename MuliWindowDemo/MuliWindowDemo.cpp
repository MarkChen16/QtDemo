#include "MuliWindowDemo.h"

#include "qpainter.h"
#include "qpixmap.h"

#include "MyWidget.h"
#include "MyMainWindow.h"

#pragma execution_character_set("UTF-8")

MuliWindowDemo::MuliWindowDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.tabWidget);		//tabWidget作为中心组件
	this->setWindowState(Qt::WindowMaximized);	//最大化

	ui.tabWidget->setVisible(false);
	ui.tabWidget->clear();
}

void MuliWindowDemo::paintEvent(QPaintEvent * event)
{
	//窗口重绘时触发，在工作区打印一个背景图
	QPainter painter(this);
	painter.drawPixmap(0, ui.mainToolBar->height(),
		this->width(), this->height() - ui.mainToolBar->height() - ui.statusBar->height(), 
		QPixmap(":/BackGround/Resources/323684.jpg"));
}

void MuliWindowDemo::on_actEmbedWidget_triggered()
{
	MyWidget *newWidget = new MyWidget(this);
	newWidget->setAttribute(Qt::WA_DeleteOnClose, true);	//关闭时自动删除

	int intID = ui.tabWidget->count();
	ui.tabWidget->addTab(newWidget, QString::asprintf("%d Form", intID));

	ui.tabWidget->setCurrentIndex(intID);
	ui.tabWidget->setTabsClosable(true);
	ui.tabWidget->setVisible(true);
}

void MuliWindowDemo::on_actStandWidget_triggered()
{
	MyWidget *newWidget = new MyWidget();
	newWidget->setAttribute(Qt::WA_DeleteOnClose, true);	//关闭时自动删除

	newWidget->setWindowFlag(Qt::WindowStaysOnTopHint, true);	//在顶层显示

	newWidget->setWindowTitle("Stand Form");

	newWidget->show();
}

void MuliWindowDemo::on_actEmbedMainWindow_triggered()
{
	MyMainWindow *newMainWindow = new MyMainWindow(this);
	newMainWindow->setAttribute(Qt::WA_DeleteOnClose);

	int intID = ui.tabWidget->count();
	ui.tabWidget->addTab(newMainWindow, QString::asprintf("%d MainForm", intID));

	ui.tabWidget->setCurrentIndex(intID);
	ui.tabWidget->setTabsClosable(true);
	ui.tabWidget->setVisible(true);
}

void MuliWindowDemo::on_actStandMainWindow_triggered()
{
	MyMainWindow *newMainWindow = new MyMainWindow();
	newMainWindow->setAttribute(Qt::WA_DeleteOnClose);

	newMainWindow->setWindowFlag(Qt::WindowStaysOnTopHint, true);	//在顶层显示
	newMainWindow->setWindowTitle("Stand MainForm");

	newMainWindow->show();
}

void MuliWindowDemo::on_tabWidget_tabCloseRequested(int intIndex)
{
	if (intIndex < 0) return;

	QWidget *currForm = ui.tabWidget->widget(intIndex);		//关闭页并不会关闭窗口
	currForm->close();
}

void MuliWindowDemo::on_tabWidget_currentChanged(int intIndex)
{
	bool bNoZore = ui.tabWidget->count() > 0;
	ui.tabWidget->setVisible(bNoZore);
}
