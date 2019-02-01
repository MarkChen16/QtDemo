#include "QStringListModelDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QStringListModelDemo w;
	w.show();
	return a.exec();
}
