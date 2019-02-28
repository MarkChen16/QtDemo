#include "ThreadedTcpDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ThreadedTcpDemo w;
	w.show();
	return a.exec();
}
