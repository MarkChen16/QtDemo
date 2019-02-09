#pragma once
#include <qdialog.h>
#include "ui_CustomModealDialog.h"

//模式自定义对话框：只有返回到主界面才能操作主界面；
//一、设计流程1、创建界面	2、初始化数据	3、返回数据
//二、使用流程：1、创建实例	2、模式显示		3、获取数据		4、删除实例

class CustomModalDialog :
	public QDialog
{
	Q_OBJECT
public:
	CustomModalDialog(QString pName, bool pSex, QString pNation, int pScore);

	QString getName();
	bool isBoy();
	QString getNation();
	int getScore();

private:
	Ui::CustomModealDialogClass ui;
};

