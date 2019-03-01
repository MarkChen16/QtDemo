#include "UdpDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	UdpDemo w;
	w.show();
	return a.exec();
}
