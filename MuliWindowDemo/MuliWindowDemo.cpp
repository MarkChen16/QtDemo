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

	this->setCentralWidget(ui.tabWidget);		//tabWidget��Ϊ�������
	this->setWindowState(Qt::WindowMaximized);	//���

	ui.tabWidget->setVisible(false);
	ui.tabWidget->clear();
}

void MuliWindowDemo::paintEvent(QPaintEvent * event)
{
	//�����ػ�ʱ�������ڹ�������ӡһ������ͼ
	QPainter painter(this);
	painter.drawPixmap(0, ui.mainToolBar->height(),
		this->width(), this->height() - ui.mainToolBar->height() - ui.statusBar->height(), 
		QPixmap(":/BackGround/Resources/323684.jpg"));
}

void MuliWindowDemo::on_actEmbedWidget_triggered()
{
	MyWidget *newWidget = new MyWidget(this);
	newWidget->setAttribute(Qt::WA_DeleteOnClose, true);	//�ر�ʱ�Զ�ɾ��

	int intID = ui.tabWidget->count();
	ui.tabWidget->addTab(newWidget, QString::asprintf("%d Form", intID));

	ui.tabWidget->setCurrentIndex(intID);
	ui.tabWidget->setTabsClosable(true);
	ui.tabWidget->setVisible(true);
}

void MuliWindowDemo::on_actStandWidget_triggered()
{
	MyWidget *newWidget = new MyWidget();
	newWidget->setAttribute(Qt::WA_DeleteOnClose, true);	//�ر�ʱ�Զ�ɾ��

	newWidget->setWindowFlag(Qt::WindowStaysOnTopHint, true);	//�ڶ�����ʾ

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

	newMainWindow->setWindowFlag(Qt::WindowStaysOnTopHint, true);	//�ڶ�����ʾ
	newMainWindow->setWindowTitle("Stand MainForm");

	newMainWindow->show();
}

void MuliWindowDemo::on_tabWidget_tabCloseRequested(int intIndex)
{
	if (intIndex < 0) return;

	QWidget *currForm = ui.tabWidget->widget(intIndex);		//�ر�ҳ������رմ���
	currForm->close();
}

void MuliWindowDemo::on_tabWidget_currentChanged(int intIndex)
{
	bool bNoZore = ui.tabWidget->count() > 0;
	ui.tabWidget->setVisible(bNoZore);
}
