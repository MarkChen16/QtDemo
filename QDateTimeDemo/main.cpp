#include "QDateTimeDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QDateTimeDemo w;
	w.show();
	return a.exec();
}
