#include "CommonComponent.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CommonComponent w;
	w.show();
	return a.exec();
}
