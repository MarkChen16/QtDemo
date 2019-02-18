#include "Q3DSurfaceDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Q3DSurfaceDemo w;
	w.show();
	return a.exec();
}
