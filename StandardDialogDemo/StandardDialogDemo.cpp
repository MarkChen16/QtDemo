#include "StandardDialogDemo.h"

#include <qfiledialog.h>

#include <qcolordialog.h>

#include <qfontdialog.h>

#include <qinputdialog.h>

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")


StandardDialogDemo::StandardDialogDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	currPath = QCoreApplication::applicationDirPath();

	//文件过滤器：括号内可以设置多个扩展名，不同类型文件之间使用双分号隔开
	fileFilter = "TextFile(*.txt *.doc);;ImageFile(*.jpg *.bmp *.tif);;AllFile(*.*)";
}

void StandardDialogDemo::on_btnOpenFile_clicked()
{
	QString strFile = QFileDialog::getOpenFileName(this, "打开一个文件", currPath, fileFilter);
	if (strFile.isEmpty()) return;

}

void StandardDialogDemo::on_btnOpenFiles_clicked()
{
	QStringList lstFile = QFileDialog::getOpenFileNames(this, "打开多个文件", currPath, fileFilter);
	if (lstFile.count() == 0) return;

}

void StandardDialogDemo::on_btnSaveFile_clicked()
{
	QString strFile = QFileDialog::getSaveFileName(this, "保存一个文件", currPath, fileFilter);
	if (strFile.isEmpty()) return;

}

void StandardDialogDemo::on_btnSelDir_clicked()
{
	QString strDir = QFileDialog::getExistingDirectory(this, "选择一个目录", currPath);
	if (strDir.isEmpty()) return;

}

void StandardDialogDemo::on_OpenFileUrl_clicked()
{
	QUrl urlFile = QFileDialog::getOpenFileUrl(this, "打开一个网络文件", QUrl("//192.168.1.200/sharepath/"), fileFilter);
	if (urlFile.isEmpty()) return;

}

void StandardDialogDemo::on_btnPickColor_clicked()
{
	QPalette pal = ui.ptShowColor->palette();
	QColor initColor = pal.color(QPalette::Text);	//获取当前文本的颜色

	QColor newColor = QColorDialog::getColor(initColor, this, "选择一个新的颜色");
	if (newColor.isValid() == false) return;

	pal.setColor(QPalette::Text, newColor);			//设置新的文本颜色
	ui.ptShowColor->setPalette(pal);
}

void StandardDialogDemo::on_btnPickFont_clicked()
{
	QFont initFont = ui.ptShowFont->font();		//获取当前字体

	bool bOk = false;
	QFont newFont = QFontDialog::getFont(&bOk, initFont, this, "请选择一个新的字体");
	if (bOk == false) return;

	ui.ptShowFont->setFont(newFont);		//设置新的字体
}

void StandardDialogDemo::on_btnInputLine_clicked()
{
	bool bOk = false;
	QString strLine = QInputDialog::getText(this, "输入单行文本", "请输入文件名：", QLineEdit::Normal, "xxx.jpg", &bOk);
	if (bOk == false) return;

	ui.ptShowInput->setPlainText(strLine);
}

void StandardDialogDemo::on_btnInputInt_clicked()
{
	bool bOk = false;

	//可以设置默认值、最小值、最大值、增长大小
	int intVal = QInputDialog::getInt(this, "输入整数", "请输入学生成绩：", 80, 0, 100, 10, &bOk);
	if (bOk == false) return;

	ui.ptShowInput->setPlainText(QString::asprintf("%d", intVal));
}

void StandardDialogDemo::on_btnInputFloat_clicked()
{
	bool bOk = false;

	//可以设置默认值、最小值，最大值、小数位数
	double fVal = QInputDialog::getDouble(this, "输入浮点数", "请输入桌子长度：", 10.0, 0.0, 100.0, 2, &bOk);
	if (bOk == false) return;

	ui.ptShowInput->setPlainText(QString::asprintf("%.2f", fVal));
}

void StandardDialogDemo::on_btnGetItem_clicked()
{
	QStringList lstItems;
	lstItems << "北京" << "上海" << "深圳" << "广州";

	bool bOk = false;
	//可以设置选择列表、默认子项，是否可以编辑
	QString strCity = QInputDialog::getItem(this, "输入一个子项", "请选择一个城市：", lstItems, 0, false, &bOk);
	if (bOk == false) return;

	ui.ptShowInput->setPlainText(strCity);
}

void StandardDialogDemo::on_btnInputLines_clicked()
{
	bool bOk = false;
	QString strLines = QInputDialog::getMultiLineText(this, "输入多行文本", "请输入多个文件名：", "xxx.jpg\nxxx.bmp", &bOk);
	if (bOk == false) return;

	ui.ptShowInput->setPlainText(strLines);
}

void StandardDialogDemo::on_btnInfoMsg_clicked()
{
	QMessageBox::information(this, "信息提示", "文件已经打开！", QMessageBox::Ok);
}

void StandardDialogDemo::on_btnQuestMsg_clicked()
{
	int iResult = QMessageBox::question(this, "询问提示", "是否连接服务器？", QMessageBox::Yes, QMessageBox::No);
	if (iResult == QMessageBox::Yes)
	{
		QMessageBox::information(this, "提示", "你选择了[Yes]按钮！", QMessageBox::Ok);
	}
}

void StandardDialogDemo::on_btnWarningMsg_clicked()
{
	QMessageBox::warning(this, "警告提示", "文件太大了！", QMessageBox::Ok);

}

void StandardDialogDemo::on_btnCriticalMsg_clicked()
{
	QMessageBox::critical(this, "错误提示", "系统发生了一个严重的错误！", QMessageBox::Ok);
}

void StandardDialogDemo::on_btnAboutMsg_clicked()
{
	QMessageBox::about(this, "关于提示", "文件的大小是1G！");
}

void StandardDialogDemo::on_btnAboutQtMsg_clicked()
{
	QMessageBox::aboutQt(this, "关于QT");
}
