#include "ManualUIDialog.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>

/*
解决中文乱码和跨平台的问题：
	1、把所有源代码文件，在高级保存选项中选择UFT-8 with BOM
	2、在项目属性中附加选项和命令行/uft-8，或者使用#pragma execution_character_set("UTF-8")
*/

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ManualUIDialog w;
	w.show();
	return a.exec();
}
