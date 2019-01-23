#include "HelloWorldDialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	HelloWorldDialog w;
	w.show();
	return a.exec();
}
