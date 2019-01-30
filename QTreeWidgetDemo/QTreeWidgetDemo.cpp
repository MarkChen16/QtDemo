#include "QTreeWidgetDemo.h"

#include <qfiledialog.h>

#pragma execution_character_set("UTF-8");

QTreeWidgetDemo::QTreeWidgetDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//ͨ��on_objname_event�Զ��󶨣�����Ҫ�ر�ָ���źŲ�
	//connect(ui.actAddDir, SIGNAL(triggered()), this, SLOT(on_actAddDir_triggered()));
	//connect(ui.actAddFile, SIGNAL(triggered()), this, SLOT(on_actAddFile_triggered()));

	//��ʼ��״̬��
	labFileName = new QLabel("�ļ�·����");
	ui.statusBar->addWidget(labFileName);

	//������ʾlabelͼƬ
	this->setCentralWidget(ui.scrollArea);

	//��ʼ�����Ϳؼ�
	iniTree();
}

void QTreeWidgetDemo::on_actAddDir_triggered()
{
	//���Ŀ¼
	QString strDir = QFileDialog::getExistingDirectory();

	if (strDir.isEmpty()) return;

	QTreeWidgetItem *parItem = ui.treeWidget->topLevelItem(0);
	if (parItem == nullptr) return;

	addFolderItem(parItem, strDir);
}

void QTreeWidgetDemo::on_actOrgSize_triggered()
{
	//ʵ�ʴ�С
	pixRatio = 1.0;
	ui.label->setPixmap(currPixmap);
}

void QTreeWidgetDemo::on_actBig_triggered()
{
	//�Ŵ�
	pixRatio = pixRatio * 1.2;
	int w = pixRatio * currPixmap.width();
	int h = pixRatio * currPixmap.height();

	QPixmap pix = currPixmap.scaled(w, h);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_actSmall_triggered()
{
	//��С
	pixRatio = pixRatio * 0.8;
	int w = pixRatio * currPixmap.width();
	int h = pixRatio * currPixmap.height();

	QPixmap pix = currPixmap.scaled(w, h);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_actDelNode_triggered()
{
	//ɾ���ڵ�
	QTreeWidgetItem *curr = ui.treeWidget->currentItem();

	if (curr == nullptr) return;

	int type = curr->type();

	if (curr->type() == itTopItem)
	{
		//ɾ��������Ŀ
		QTreeWidgetItem *top = ui.treeWidget->takeTopLevelItem(0);
		delete top;
	}
	else
	{
		//���ø���ɾ������
		QTreeWidgetItem *prvItem = curr->parent();
		prvItem->removeChild(curr);
		delete curr;
	}
}

void QTreeWidgetDemo::on_actLookup_triggered()
{
	//�������нڵ�
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
	//��Ӧ�����ʾͼƬ
	int W = ui.scrollArea->width();
	QPixmap pix = currPixmap.scaledToWidth(W - 30);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_treeWidget_currentItemChanged(QTreeWidgetItem * current, QTreeWidgetItem * previous)
{
	//��ʾͼ��
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
	//��Ӧ�߶���ʾͼƬ
	int H = ui.scrollArea->height();
	QPixmap pix = currPixmap.scaledToHeight(H-30);
	ui.label->setPixmap(pix);
}

void QTreeWidgetDemo::on_actAddFile_triggered()
{
	QTreeWidgetItem *parItem = ui.treeWidget->currentItem();
	if (parItem == nullptr) return;

	if (parItem->type() != itGroupItem) return;

	QStringList files = QFileDialog::getOpenFileNames(this, "��ѡ��һ�������ļ�", "", "Image(*.jpg)");
	if (files.isEmpty()) return;

	for each (QString var in files)
	{
		addImageItem(parItem, var);
	}
}

void QTreeWidgetDemo::iniTree()
{
	//��ʼ��ͼƬĿ¼��
	ui.treeWidget->clear();

	QIcon icon(":/QTreeWidgetDemo/Resources/MYSL.ICO");

	QTreeWidgetItem *item = new QTreeWidgetItem(itTopItem);
	item->setIcon(colItem, icon);	//��ʾ��ͼ��

	item->setText(colItem, "ͼƬ�ļ�");		//��һ����ʾ���ı�
	item->setText(colItemType, "type=itTopItem");	//�ڶ�����ʾ���ı�

	item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
	item->setCheckState(colItem, Qt::Checked);

	QString strData = "";
	item->setData(colItem, Qt::UserRole, QVariant(strData));	//���ù���������

	ui.treeWidget->addTopLevelItem(item);	//����ڶ���ڵ�
}

void QTreeWidgetDemo::addFolderItem(QTreeWidgetItem * parItem, QString dirName)
{
	//����һ��ͼ��
	QIcon icon;
	icon.addFile(":/QTreeWidgetDemo/Resources/FOLDER.ICO");

	//��ȡĿ¼����
	QString strNodeName = getFinalFolderName(dirName);

	//���Ŀ¼�ڵ�
	QTreeWidgetItem *item;
	item = new QTreeWidgetItem(itGroupItem);
	item->setIcon(colItem, icon);

	item->setText(colItem, strNodeName);
	item->setText(colItemType, "type=itGroupItem");

	item->setFlags(Qt::ItemIsSelectable|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled|Qt::ItemIsAutoTristate);
	item->setCheckState(colItem, Qt::Checked);

	item->setData(colItem, Qt::UserRole, QVariant(dirName));	//��������ΪĿ¼ȫ·��

	parItem->addChild(item);
	parItem->setExpanded(true);
}

QString QTreeWidgetDemo::getFinalFolderName(const QString & fullPathName)
{
	//��ȡĿ¼����
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
	labFileName->setText("�ļ�·����" + strFilePath);

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
			changeItemCaption(item->child(j));	//�ݹ����
		}
	}
}
