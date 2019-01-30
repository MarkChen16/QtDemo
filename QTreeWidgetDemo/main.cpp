#include "QTreeWidgetDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTreeWidgetDemo w;
	w.show();
	return a.exec();
}
