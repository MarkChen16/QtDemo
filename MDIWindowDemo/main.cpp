#include "MDIWindowDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MDIWindowDemo w;
	w.show();
	return a.exec();
}
