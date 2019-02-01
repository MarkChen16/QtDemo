#include "QFileSystemModelDemo.h"

#pragma execution_character_set("UTF-8");


/*
Model：数据模型：存放数据
View：视图组件：显示数据
ModelIndex：模型索引，相当数据索引
Delegate：代理：控制显示/修改数据

*/

QFileSystemModelDemo::QFileSystemModelDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	//初始化数据模型
	model = new QFileSystemModel;
	model->setRootPath(QDir::currentPath());

	//三大视图组件设置同一个数据模型
	ui.tvDir->setModel(model);
	ui.lvDir->setModel(model);
	ui.tvDirItem->setModel(model);

	//绑定信号槽，联动信号
	connect(ui.tvDir, SIGNAL(clicked(QModelIndex)), ui.lvDir, SLOT(setRootIndex(QModelIndex)));
	connect(ui.lvDir, SIGNAL(clicked(QModelIndex)), ui.tvDirItem, SLOT(setRootIndex(QModelIndex)));

	connect(ui.tvDir, SIGNAL(clicked(QModelIndex)), this, SLOT(showDirInfo(QModelIndex)));
	connect(ui.lvDir, SIGNAL(clicked(QModelIndex)), this, SLOT(showDirInfo(QModelIndex)));
	connect(ui.tvDirItem, SIGNAL(clicked(QModelIndex)), this, SLOT(showDirInfo(QModelIndex)));
}

void QFileSystemModelDemo::showDirInfo(const QModelIndex & index)
{
	ui.cbIsDir->setChecked(model->isDir(index));

	QString strInfo;
	if (model->fileInfo(index).isFile())
	{
		QString strFile = model->fileInfo(index).fileName();
		strInfo.sprintf("目标信息：%s     %.2fM", strFile.toStdString().c_str(), float(model->fileInfo(index).size()) / 1024 / 1024);
	}
	else
	{
		QString strDir = getFinalFolderName(model->fileInfo(index).filePath());
		strInfo.sprintf("目标信息：%s", strDir.toStdString().c_str());
	}
	ui.labInfo->setText(strInfo);

	ui.labPos->setText("目标位置：" + model->filePath(index));
}

QString QFileSystemModelDemo::getFinalFolderName(const QString & fullPathName)
{
	//获取目录名称
	int cnt = fullPathName.length();

	int i = fullPathName.lastIndexOf("/");
	QString str = fullPathName.right(cnt - i - 1);
	return str;
}

