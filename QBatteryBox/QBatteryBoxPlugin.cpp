#include "QBatteryBox.h"
#include "QBatteryBoxPlugin.h"

#include <QtCore/QtPlugin>

#pragma execution_character_set("UTF-8")

QBatteryBoxPlugin::QBatteryBoxPlugin(QObject *parent)
	: QObject(parent)
{
	//接口准备工作
	initialized = false;
}

void QBatteryBoxPlugin::initialize(QDesignerFormEditorInterface * /*core*/)
{
	//初始化接口
	if (initialized)
		return;

	initialized = true;
}

bool QBatteryBoxPlugin::isInitialized() const
{
	//接口是否已经初始化
	return initialized;
}

QWidget *QBatteryBoxPlugin::createWidget(QWidget *parent)
{
	//创建一个自定义组件
	return new QBatteryBox(parent);
}

QString QBatteryBoxPlugin::name() const
{
	//返回自定义组件的名称
	return "QBatteryBox";
}

QString QBatteryBoxPlugin::group() const
{
	//返回组件面板上显示的分组名称
	return "My Widget";
}

QIcon QBatteryBoxPlugin::icon() const
{
	//返回组件面板上显示的组件图标
	return QIcon(":/myIcons/Resources/MyWidget.ICO");
}

QString QBatteryBoxPlugin::toolTip() const
{
	//返回提示信息
	return QString("电池显示组件");
}

QString QBatteryBoxPlugin::whatsThis() const
{
	//返回备注信息
	return QString("这是一个电池显示组件，可以显示当前电量，提供电量过低的警告提示信号。");
}

bool QBatteryBoxPlugin::isContainer() const
{
	//是否可以作为容器
	return false;
}

QString QBatteryBoxPlugin::domXml() const
{
	//XML文件描述信息
	return "<widget class=\"QBatteryBox\" name=\"qBatteryBox\">\n"
		"</widget>\n";
}

QString QBatteryBoxPlugin::includeFile() const
{
	//需要包含的头文件
	return "QBatteryBox.h";
}
