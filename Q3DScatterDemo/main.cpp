#include "Q3DScatterDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Q3DScatterDemo w;
	w.show();
	return a.exec();
}
