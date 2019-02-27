#include "SimpleTcpDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SimpleTcpDemo w;
	w.show();
	return a.exec();
}
