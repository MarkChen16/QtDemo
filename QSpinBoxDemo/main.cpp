#include "QSpinBoxDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QSpinBoxDemo w;
	w.show();
	return a.exec();
}
