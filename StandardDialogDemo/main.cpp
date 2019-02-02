#include "StandardDialogDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	StandardDialogDemo w;
	w.show();
	return a.exec();
}
