#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QTreeWidgetDemo.h"

class QTreeWidgetDemo : public QMainWindow
{
	Q_OBJECT

public:
	QTreeWidgetDemo(QWidget *parent = Q_NULLPTR);

private slots:
	void on_treeWidget_currentItemChanged(QTreeWidgetItem *current, QTreeWidgetItem *previous);

	void on_actFixW_triggered();
	void on_actFixH_triggered();
	void on_actOrgSize_triggered();
	void on_actBig_triggered();
	void on_actSmall_triggered();

	void on_actDelNode_triggered();
	void on_actLookup_triggered();

	void on_actAddDir_triggered();
	void on_actAddFile_triggered();

	void on_actFloat_triggered();
	void on_actVisable_triggered();

private:
	Ui::QTreeWidgetDemoClass ui;

	//定义列的类型，第一列(节点)、第二列(节点类型)
	enum treeeColNum
	{
		colItem = 0, colItemType = 1
	};

	//定义节点的类型：第一层(顶点)、第二层(目录)、第三层(文件)
	enum treeItemType
	{
		itTopItem = 1001, itGroupItem, itImageItem
	};

	QLabel *labFileName;
	QPixmap currPixmap;
	float pixRatio = 1.0;

	void iniTree();
	void addFolderItem(QTreeWidgetItem *parItem, QString dirName);
	QString getFinalFolderName(const QString &fullPathName);
	void addImageItem(QTreeWidgetItem *parItem, QString aFileName);
	void displayImage(QTreeWidgetItem *item);
	void changeItemCaption(QTreeWidgetItem *item);
};
