#include "QBatteryBoxDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QBatteryBoxDemo w;
	w.show();
	return a.exec();
}
