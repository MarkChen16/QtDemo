#include "QPenDialogDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPenDialogDemo w;
	w.show();
	return a.exec();
}
