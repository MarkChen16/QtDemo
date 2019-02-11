#include "MDIWindowDemo.h"

#include "DocForm.hpp"

#include <qfiledialog.h>
#include <qtextstream.h>

#include <qmdisubwindow.h>

#pragma execution_character_set("UTF-8")

MDIWindowDemo::MDIWindowDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.mdiArea);
}

void MDIWindowDemo::on_actionNew_triggered()
{
	//创建子窗体
	DocForm *newForm = new DocForm(this);
	newForm->setAttribute(Qt::WA_DeleteOnClose, true);
	newForm->setWindowTitle("New Doc");

	newForm->init("Hello world!");

	connect(newForm, SIGNAL(textSelected(bool)), this, SLOT(onTextSelected(bool)));

	ui.mdiArea->addSubWindow(newForm);
	newForm->show();
}

void MDIWindowDemo::on_actionOpen_triggered()
{
	QString strFile = QFileDialog::getOpenFileName(this, "打开一个文件",
		QCoreApplication::applicationDirPath(), "Text File(*.txt, *.doc);;All File(*.*)");

	if (strFile.isEmpty()) return;

	//读取文本所有内容
	QFile file(strFile);
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QTextStream stream(&file);
		stream.setCodec("UTF-8");	//设置文件编码为UTF8

		QString strText = stream.readAll();
		file.close();

		//创建子窗口
		DocForm *newForm = new DocForm(this);
		newForm->setAttribute(Qt::WA_DeleteOnClose, true);
		newForm->setWindowTitle(strFile);

		newForm->init(strText);

		connect(newForm, SIGNAL(textSelected(bool)), this, SLOT(onTextSelected(bool)));

		ui.mdiArea->addSubWindow(newForm);
		newForm->show();
	}
}

void MDIWindowDemo::on_actionCut_triggered()
{
	if (ui.mdiArea->subWindowList().count() <= 0) return;

	DocForm *actForm = (DocForm *)ui.mdiArea->activeSubWindow()->widget();

	actForm->cut();
}

void MDIWindowDemo::on_actionCopy_triggered()
{
	if (ui.mdiArea->subWindowList().count() <= 0) return;

	DocForm *actForm = (DocForm *)ui.mdiArea->activeSubWindow()->widget();

	actForm->copy();
}

void MDIWindowDemo::on_actionPaste_triggered()
{
	if (ui.mdiArea->subWindowList().count() <= 0) return;

	DocForm *actForm = (DocForm *)ui.mdiArea->activeSubWindow()->widget();

	actForm->paste();
}

void MDIWindowDemo::on_actionClear_triggered()
{
	if (ui.mdiArea->subWindowList().count() <= 0) return;

	DocForm *actForm = (DocForm *)ui.mdiArea->activeSubWindow()->widget();

	actForm->clear();
}

void MDIWindowDemo::on_actionMDIMode_triggered(bool bChecked)
{
	if (bChecked)
	{
		//MDI模式
		ui.mdiArea->setViewMode(QMdiArea::SubWindowView);

		ui.actionCascading->setEnabled(true);
		ui.actionTile->setEnabled(true);

		ui.actionMDIMode->setText("Tab模式");
	}
	else
	{
		//Table模式
		ui.mdiArea->setViewMode(QMdiArea::TabbedView);
		ui.mdiArea->setTabsClosable(true);

		ui.actionCascading->setEnabled(false);
		ui.actionTile->setEnabled(false);

		ui.actionMDIMode->setText("MDI模式");
	}
}

void MDIWindowDemo::on_actionCascading_triggered()
{
	//级联展开
	ui.mdiArea->cascadeSubWindows();
}

void MDIWindowDemo::on_actionTile_triggered()
{
	//平铺展开
	ui.mdiArea->tileSubWindows();
}

void MDIWindowDemo::onTextSelected(bool isSel)
{
	ui.actionCut->setEnabled(isSel);
	ui.actionCopy->setEnabled(isSel);
}
