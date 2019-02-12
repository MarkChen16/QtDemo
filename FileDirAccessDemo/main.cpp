#include "FileDirAccessDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	FileDirAccessDemo w;
	w.show();
	return a.exec();
}
