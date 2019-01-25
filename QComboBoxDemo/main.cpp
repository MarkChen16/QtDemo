#include "QComboBoxDemo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QComboBoxDemo w;
	w.show();
	return a.exec();
}
