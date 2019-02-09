#include "CustomDialogDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CustomDialogDemo w;
	w.show();
	return a.exec();
}
