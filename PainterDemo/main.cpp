#include "PainterDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PainterDemo w;
	w.show();
	return a.exec();
}
