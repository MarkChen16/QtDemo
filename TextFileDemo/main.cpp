#include "TextFileDemo.h"
#include <QtWidgets/QApplication>

#include <qtextcodec.h>

int main(int argc, char *argv[])
{
	//����Ӧ�ó���ȫ��֧��Unicode���룬���ļ�ʱ���Բ�����setAutoDetectUnicode(true)Ҳ��������ʶ������(���Բ�ͨ��)
	//QTextCodec *codec = QTextCodec::codecForName("UTF-8");
	//QTextCodec::setCodecForLocale(codec);

	QApplication a(argc, argv);
	TextFileDemo w;
	w.show();
	return a.exec();
}
