#include "MuliWindowDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MuliWindowDemo w;
	w.show();
	return a.exec();
}
