#include "QPlainTextEditDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QPlainTextEditDemo w;
	w.show();
	return a.exec();
}
