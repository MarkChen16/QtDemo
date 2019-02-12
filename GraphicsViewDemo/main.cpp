#include "GraphicsViewDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GraphicsViewDemo w;
	w.show();
	return a.exec();
}
