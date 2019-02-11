#include "TextFileDemo.h"
#include <QtWidgets/QApplication>

#include <qtextcodec.h>

int main(int argc, char *argv[])
{
	//设置应用程序全局支持Unicode编码，打开文件时可以不调用setAutoDetectUnicode(true)也可以正常识别中文(测试不通过)
	//QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	//QTextCodec::setCodecForLocale(codec);

	QApplication a(argc, argv);
	TextFileDemo w;
	w.show();
	return a.exec();
}
