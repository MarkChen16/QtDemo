#include "QListWidgetDemo.h"

#pragma execution_character_set("UTF-8")

QListWidgetDemo::QListWidgetDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//绑定QToolButton与Action
	ui.tbtnAdd->setDefaultAction(ui.actAdd);
	ui.tbtnClear->setDefaultAction(ui.actClear);
	ui.tbtnDel->setDefaultAction(ui.actDel);
	ui.tbtnInit->setDefaultAction(ui.actInit);
	ui.tbtnInsert->setDefaultAction(ui.actInsert);

	ui.tbtnSelAll->setDefaultAction(ui.actSelAll);
	ui.tbtnSelNone->setDefaultAction(ui.actSelNone);
	ui.tbtnSelInvs->setDefaultAction(ui.actSelInvs);

	//初始化下拉菜单
	QMenu *menuSelection = new QMenu(this);
	menuSelection->addAction(ui.actSelAll);
	menuSelection->addAction(ui.actSelNone);
	menuSelection->addAction(ui.actSelInvs);

	//绑定下位菜单
	ui.tbtnSelectItem->setDefaultAction(ui.actSelPopMenu);
	ui.tbtnSelectItem->setMenu(menuSelection);

	//手动添加工具栏按钮，并绑定Action和Menu
	QToolButton *tbtnSelItem = new QToolButton(this);
	tbtnSelItem->setPopupMode(QToolButton::InstantPopup);
	tbtnSelItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

	tbtnSelItem->setDefaultAction(ui.actSelPopMenu);
	tbtnSelItem->setMenu(menuSelection);
	ui.mainToolBar->addWidget(tbtnSelItem);

	ui.mainToolBar->addSeparator();
	ui.mainToolBar->addAction(ui.actQuit);

	//绑定信号槽
	connect(ui.actInit, SIGNAL(triggered()), this, SLOT(onInit()));
	connect(ui.actClear, SIGNAL(triggered()), this, SLOT(onClear()));
	connect(ui.actInsert, SIGNAL(triggered()), this, SLOT(onInsert()));
	connect(ui.actAdd, SIGNAL(triggered()), this, SLOT(onAdd()));
	connect(ui.actDel, SIGNAL(triggered()), this, SLOT(onDel()));

	connect(ui.actSelAll, SIGNAL(triggered()), this, SLOT(onSelAll()));
	connect(ui.actSelInvs, SIGNAL(triggered()), this, SLOT(onSelInvs()));
	connect(ui.actSelNone, SIGNAL(triggered()), this, SLOT(onSelNone()));

	connect(ui.listWidget, SIGNAL(customContextMenuRequested(const QPoint&)), 
		this, SLOT(on_listWidget_cutomContextMenuRequested(const QPoint &)));

	ui.listWidget->clear();
}

void QListWidgetDemo::on_listWidget_cutomContextMenuRequested(const QPoint & pos)
{
	//在listWidget上创建右键快捷菜单，需要将listWidget的contextMenuPolicy设置为CustomContextMenu
	QMenu *menu = new QMenu(this);
	menu->addAction(ui.actInit);
	menu->addAction(ui.actClear);
	menu->addAction(ui.actInsert);
	menu->addAction(ui.actAdd);
	menu->addAction(ui.actDel);
	menu->addSeparator();
	menu->addAction(ui.actSelAll);
	menu->addAction(ui.actSelInvs);
	menu->addAction(ui.actSelNone);

	menu->exec(QCursor::pos());		//在鼠标光标的位置弹出右键快捷菜单
	delete menu;
}

void QListWidgetDemo::onInit()
{
	ui.listWidget->clear();

	QIcon icon(":/QListWidgetDemo/Resources/DISTLSTL.ICO");

	for (int i = 0; i < 10; i++)
	{
		QListWidgetItem *item = new QListWidgetItem();
		item->setText(QString::asprintf("子项目%d", i + 1));
		item->setIcon(icon);
		item->setCheckState(Qt::Checked);

		if (ui.checkBox->isChecked())
		{
			item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEditable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
		}
		else
		{
			item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
		}

		ui.listWidget->addItem(item);
	}
}

void QListWidgetDemo::onClick(QListWidgetItem *item)
{
	ui.lineEdit->setText(item->text());
	
	if (item->flags() & Qt::ItemIsEditable)
	{
		ui.checkBox->setChecked(true);
	}
	else
	{
		ui.checkBox->setChecked(false);
	}
}

void QListWidgetDemo::onClear()
{
	ui.listWidget->clear();
}

void QListWidgetDemo::onInsert()
{
	if (ui.lineEdit->text().isEmpty()) return;

	QIcon icon(":/QListWidgetDemo/Resources/DISTLSTL.ICO");

	QListWidgetItem *item = new QListWidgetItem();
	item->setText(ui.lineEdit->text());
	item->setIcon(icon);
	item->setCheckState(Qt::Checked);

	if (ui.checkBox->isChecked())
	{
		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
	}
	else
	{
		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
	}

	ui.listWidget->insertItem(ui.listWidget->currentRow(), item);
}

void QListWidgetDemo::onAdd()
{
	if (ui.lineEdit->text().isEmpty()) return;

	QIcon icon(":/QListWidgetDemo/Resources/DISTLSTL.ICO");

	QListWidgetItem *item = new QListWidgetItem();
	item->setText(ui.lineEdit->text());
	item->setIcon(icon);
	item->setCheckState(Qt::Checked);

	if (ui.checkBox->isChecked())
	{
		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEditable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
	}
	else
	{
		item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
	}

	ui.listWidget->addItem(item);
}

void QListWidgetDemo::onDel()
{
	delete ui.listWidget->takeItem(ui.listWidget->currentRow());
}

void QListWidgetDemo::onSelAll()
{
	ui.listWidget->selectAll();
}

void QListWidgetDemo::onSelNone()
{
	ui.listWidget->clearSelection();
}

void QListWidgetDemo::onSelInvs()
{
	int intCount = ui.listWidget->count();

	for (int i = 0; i < intCount; i++)
	{
		ui.listWidget->item(i)->setSelected(!ui.listWidget->item(i)->isSelected());
	}
}
