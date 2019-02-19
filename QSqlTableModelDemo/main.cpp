#include "QSqlTableModelDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QSqlTableModelDemo w;
	w.show();
	return a.exec();
}
