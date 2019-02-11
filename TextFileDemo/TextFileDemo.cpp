#include "TextFileDemo.h"

#include <qmessagebox.h>
#include <qfiledialog.h>
#include <qfile.h>
#include <qtextstream.h>

#pragma execution_character_set("UTF-8")

TextFileDemo::TextFileDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.plainTextEdit);
}

void TextFileDemo::on_actionOpenTextFile_triggered()
{
	//使用QFile和QTextStream读取文本文件
	strFileName = QFileDialog::getOpenFileName(this, "打开一个文本文件",
		QCoreApplication::applicationDirPath(), "Text File(*.txt);;All File(*.*)");

	if (strFileName.isEmpty()) return;

	//判断文件是否存在
	QFile file(strFileName);
	if (!file.exists())
	{
		QMessageBox::warning(this, "警告", "文件不存在！", QMessageBox::Ok);
		return;
	}

	//判断文件打开是否成功
	if (!file.open(QIODevice::Text | QIODevice::ReadOnly))
	{
		QMessageBox::warning(this, "警告", "打开文件失败，返回错误{" + file.errorString() + "}", QMessageBox::Ok);
		return;
	}

	//按行读取所有文件内容
	QTextStream stream(&file);
	stream.setAutoDetectUnicode(true);	//自动识别Unicode编码

	ui.plainTextEdit->clear();
	while (stream.atEnd() == false)
	{
		ui.plainTextEdit->appendPlainText(stream.readLine());
	}

	file.close();
}

void TextFileDemo::on_actionSaveTextFile_triggered()
{
	//使用QFile和QTextStream保存文本文件
	if (strFileName.isEmpty()) return;

	//打开文件
	QFile file(strFileName);
	if (!file.open(QIODevice::Text | QIODevice::WriteOnly))
	{
		QMessageBox::warning(this, "警告", "打开文件失败，返回错误{" + file.errorString() + "}", QMessageBox::Ok);
		return;
	}

	//保存文本到文件，UTF8编码
	QTextStream stream(&file);
	stream.setAutoDetectUnicode(true);

	QString strData = ui.plainTextEdit->toPlainText();
	QByteArray bytes = strData.toUtf8();
	stream << bytes;

	file.close();

	QMessageBox::information(this, "提示", "保存文件成功！", QMessageBox::Ok);
}

void TextFileDemo::on_actionAbout_triggered()
{
	QMessageBox::aboutQt(this, "关于QT");
}
