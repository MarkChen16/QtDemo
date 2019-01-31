#include "QTableWidgetDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTableWidgetDemo w;
	w.show();
	return a.exec();
}
