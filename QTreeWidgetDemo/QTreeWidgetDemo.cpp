#include "QTreeWidgetDemo.h"

#include <qfiledialog.h>

#pragma execution_character_set("UTF-8");

QTreeWidgetDemo::QTreeWidgetDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//通过on_objname_event自动绑定，不需要特别指定信号槽
	//connect(ui.actAddDir, SIGNAL(triggered()), this, SLOT(on_actAddDir_triggered()));
	//connect(ui.actAddFile, SIGNAL(triggered()), this, SLOT(on_actAddFile_triggered()));

	//初始化状态栏
	labFileName = new QLabel("文件路径：");
	ui.statusBar->addWidget(labFileName);

	//集中显示label图片
	this->setCentralWidget(ui.scrollArea);

	//初始化树型控件
	iniTree();
}

void QTreeWidgetDemo::on_actAddDir_triggered()
{
	//添加目录
	QString strDir = QFileDialog::getExistingDirectory();

	if (strDir.isEmpty()) return;

	QTreeWidgetItem *parItem = ui.treeWidget->topLevelItem(0);
	if (parItem == nullptr) return;

	addFolderItem(parItem, strDir);
}

void QTreeWidgetDemo::on_actOrgSize_triggered()
{
	//实际大小
	pixRatio = 1.0;
	ui.label->setPixmap(currPixmap);
}

void QTreeWidgetDemo::on_actBig_triggered()
{
	//放大
	pixRatio = pixRatio * 1.2;
	int w = pixRatio * currPixmap.width();
	int h = pixRatio * currPixmap.height();

	QPixmap pix = currPixmap.scaled(w, h);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_actSmall_triggered()
{
	//缩小
	pixRatio = pixRatio * 0.8;
	int w = pixRatio * currPixmap.width();
	int h = pixRatio * currPixmap.height();

	QPixmap pix = currPixmap.scaled(w, h);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_actDelNode_triggered()
{
	//删除节点
	QTreeWidgetItem *curr = ui.treeWidget->currentItem();

	if (curr == nullptr) return;

	int type = curr->type();

	if (curr->type() == itTopItem)
	{
		//删除顶级项目
		QTreeWidgetItem *top = ui.treeWidget->takeTopLevelItem(0);
		delete top;
	}
	else
	{
		//利用父级删除子项
		QTreeWidgetItem *prvItem = curr->parent();
		prvItem->removeChild(curr);
		delete curr;
	}
}

void QTreeWidgetDemo::on_actLookup_triggered()
{
	//遍历所有节点
	for (int i = 0; i < ui.treeWidget->topLevelItemCount(); i++)
	{
		QTreeWidgetItem *item = ui.treeWidget->topLevelItem(i);
		changeItemCaption(item);
	}
}

void QTreeWidgetDemo::on_actFloat_triggered()
{
	bool bFloat = ui.dockWidget->isFloating();

	ui.dockWidget->setFloating(!bFloat);
}

void QTreeWidgetDemo::on_actVisable_triggered()
{
	bool bVis = ui.dockWidget->isVisible();

	ui.dockWidget->setVisible(!bVis);
}

void QTreeWidgetDemo::on_actFixW_triggered()
{
	//适应宽度显示图片
	int W = ui.scrollArea->width();
	QPixmap pix = currPixmap.scaledToWidth(W - 30);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_treeWidget_currentItemChanged(QTreeWidgetItem * current, QTreeWidgetItem * previous)
{
	//显示图像
	if (current == nullptr) return;

	if (current->type() == itImageItem)
	{
		displayImage(current);
	}
	else
	{
		currPixmap.load("");
		ui.label->setPixmap(currPixmap);
	}
}

void QTreeWidgetDemo::on_actFixH_triggered()
{
	//适应高度显示图片
	int H = ui.scrollArea->height();
	QPixmap pix = currPixmap.scaledToHeight(H-30);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_actAddFile_triggered()
{
	QTreeWidgetItem *parItem = ui.treeWidget->currentItem();
	if (parItem == nullptr) return;

	if (parItem->type() != itGroupItem) return;

	QStringList files = QFileDialog::getOpenFileNames(this, "请选择一个或多个文件", "", "Image(*.jpg)");
	if (files.isEmpty()) return;

	for each (QString var in files)
	{
		addImageItem(parItem, var);
	}
}

void QTreeWidgetDemo::iniTree()
{
	//初始化图片目录树
	ui.treeWidget->clear();

	QIcon icon(":/QTreeWidgetDemo/Resources/MYSL.ICO");

	QTreeWidgetItem *item = new QTreeWidgetItem(itTopItem);
	item->setIcon(colItem, icon);	//显示的图标

	item->setText(colItem, "图片文件");		//第一列显示的文本
	item->setText(colItemType, "type=itTopItem");	//第二列显示的文本

	item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
	item->setCheckState(colItem, Qt::Checked);

	QString strData = "";
	item->setData(colItem, Qt::UserRole, QVariant(strData));	//设置关联的数据

	ui.treeWidget->addTopLevelItem(item);	//添加在顶层节点
}

void QTreeWidgetDemo::addFolderItem(QTreeWidgetItem * parItem, QString dirName)
{
	//声明一个图标
	QIcon icon;
	icon.addFile(":/QTreeWidgetDemo/Resources/FOLDER.ICO");

	//获取目录名称
	QString strNodeName = getFinalFolderName(dirName);

	//添加目录节点
	QTreeWidgetItem *item;
	item = new QTreeWidgetItem(itGroupItem);
	item->setIcon(colItem, icon);

	item->setText(colItem, strNodeName);
	item->setText(colItemType, "type=itGroupItem");

	item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
	item->setCheckState(colItem, Qt::Checked);

	item->setData(colItem, Qt::UserRole, QVariant(dirName));	//设置数据为目录全路径

	parItem->addChild(item);
	parItem->setExpanded(true);
}

QString QTreeWidgetDemo::getFinalFolderName(const QString & fullPathName)
{
	//获取目录名称
	int cnt = fullPathName.length();
	
	int i = fullPathName.lastIndexOf("/");
	QString str = fullPathName.right(cnt - i - 1);
	return str;
}

void QTreeWidgetDemo::addImageItem(QTreeWidgetItem * parItem, QString aFileName)
{
	QIcon icon(":/QTreeWidgetDemo/Resources/POSTITL.ICO");
	
	QString strNodeName = getFinalFolderName(aFileName);

	QTreeWidgetItem *item;
	item = new QTreeWidgetItem(itImageItem);

	item->setIcon(colItem, icon);
	item->setText(colItem, strNodeName);
	item->setText(colItemType, "type=itImageItem");

	item->setFlags(Qt::ItemIsSelectable | Qt::ItemIsAutoTristate | Qt::ItemIsUserCheckable | Qt::ItemIsEnabled);
	item->setCheckState(colItem, Qt::Checked);

	item->setData(colItem, Qt::UserRole, QVariant(aFileName));

	parItem->addChild(item);
	parItem->setExpanded(true);
}

void QTreeWidgetDemo::displayImage(QTreeWidgetItem * item)
{
	if (item->type() != itImageItem) return;

	QString strFilePath = item->data(colItem, Qt::UserRole).toString();
	currPixmap.load(strFilePath);
	labFileName->setText("文件路径：" + strFilePath);

	pixRatio = 1.0;
	on_actFixW_triggered();
}

void QTreeWidgetDemo::changeItemCaption(QTreeWidgetItem * item)
{
	if (item->type() == itImageItem)
	{
		QString strText = item->text(colItem);
		item->setText(colItem, "*" + strText);
	}
	else
	{ 
		item->setExpanded(true);

		for (int j = 0; j < item->childCount(); j++)
		{
			changeItemCaption(item->child(j));	//递归调用
		}
	}
}
