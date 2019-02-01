#include "QFileSystemModelDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QFileSystemModelDemo w;
	w.show();
	return a.exec();
}
