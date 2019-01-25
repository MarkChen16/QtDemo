#include "QPlainTextEditDemo.h"

#pragma execution_character_set("UTF-8")

#include <qtextdocument.h>
#include <QTextBlock>
#include <qmessagebox.h>

QPlainTextEditDemo::QPlainTextEditDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void QPlainTextEditDemo::on_btnAppend_clicked()
{
	ui.ptEdit->appendPlainText(QString::asprintf("第%d行", ++iRow));
}

void QPlainTextEditDemo::on_btnReadLine_clicked()
{
	QTextDocument *txtDoc = ui.ptEdit->document();
	int iCount = txtDoc->blockCount();

	ui.cbLine->clear();
	for (int i = 0; i < iCount; i++)
	{
		QTextBlock tbLine = txtDoc->findBlockByNumber(i);
		QString strLine = tbLine.text();

		ui.cbLine->addItem(strLine);
	}
}

void QPlainTextEditDemo::on_btnReadAll_clicked()
{
	QString strAll = ui.ptEdit->toPlainText();

	int iRev  =QMessageBox::information(this, "文本内容", strAll, QMessageBox::Ok|QMessageBox::Cancel);
	if (iRev == QMessageBox::Ok)
	{
		ui.ptEdit->setPlainText("");
	}
}
