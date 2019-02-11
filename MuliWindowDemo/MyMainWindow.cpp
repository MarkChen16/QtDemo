#include "MyMainWindow.h"

MyMainWindow::MyMainWindow(QWidget * parent) : QMainWindow(parent) {
	ui.setupUi(this);

	this->setCentralWidget(ui.plainTextEdit);
}

MyMainWindow::~MyMainWindow() {
	
}
