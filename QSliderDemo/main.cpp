#include "QSliderDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QSliderDemo w;
	w.show();
	return a.exec();
}
