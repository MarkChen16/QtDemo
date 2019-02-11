#include "TextFileDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TextFileDemo w;
	w.show();
	return a.exec();
}
