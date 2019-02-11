#include "DocForm.hpp"

DocForm::DocForm(QWidget * parent) : 
	QWidget(parent) 
{
	ui.setupUi(this);

}

DocForm::~DocForm() 
{
	
}

void DocForm::init(QString strContent)
{
	ui.plainTextEdit->setPlainText(strContent);
}

void DocForm::cut()
{
	ui.plainTextEdit->cut();
}

void DocForm::copy()
{
	ui.plainTextEdit->copy();
}

void DocForm::paste()
{
	ui.plainTextEdit->paste();
}

void DocForm::clear()
{
	ui.plainTextEdit->clear();
}

void DocForm::on_plainTextEdit_selectionChanged()
{
	//使用textCursor判断是否选择
	QTextCursor cursor = ui.plainTextEdit->textCursor();
	if (cursor.selectedText().isEmpty())
	{
		emit textSelected(false);
	}
	else
	{
		emit textSelected(true);
	}
}
