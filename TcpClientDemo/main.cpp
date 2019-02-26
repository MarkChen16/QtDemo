#include "TcpClientDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TcpClientDemo w;
	w.show();
	return a.exec();
}
