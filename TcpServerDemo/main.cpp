#include "TcpServerDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TcpServerDemo w;
	w.show();
	return a.exec();
}
