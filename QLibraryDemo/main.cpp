#include "QLibraryDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLibraryDemo w;
	w.show();
	return a.exec();
}
