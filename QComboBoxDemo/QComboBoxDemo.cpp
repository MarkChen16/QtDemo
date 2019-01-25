#include "QComboBoxDemo.h"

#include <qicon.h>

#pragma execution_character_set("UTF-8")

QComboBoxDemo::QComboBoxDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//初始化，添加带有图标的子项
	ui.cbIcon->clear();
	
	//添加资源文件里面的ICON
	QIcon icon;
	icon.addFile(":/QComboBoxDemo/Resources/DISTLSTL.ICO");
	ui.cbIcon->addItem(icon, tr("北京"));
	icon.addFile(":/QComboBoxDemo/Resources/EXITEML.ICO");
	ui.cbIcon->addItem(icon, tr("上海"));
	icon.addFile(":/QComboBoxDemo/Resources/POSTL.ICO");
	ui.cbIcon->addItem(icon, tr("广州"));
	icon.addFile(":/QComboBoxDemo/Resources/RESENDL.ICO");
	ui.cbIcon->addItem(icon, tr("深圳"));

	ui.cbIcon->addItem("湛江");
	ui.cbIcon->addItem("成都");

	icon.addFile(":/QComboBoxDemo/Resources/SIGNL.ICO");
	ui.cbIcon->insertItem(0, icon, "珠海");

	ui.cbIcon->setCurrentIndex(0);
}
