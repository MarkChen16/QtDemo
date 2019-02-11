#include "BinaryFileDemo.h"

#include <qfiledialog.h>
#include <qfile.h>
#include <qdatastream.h>

#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")

//解决中文乱码的问题：
//第一种方法：使用QStringLiteral宏将每个包含中文的ANSI字符串封装成UTF8编码的QString
//第二种方法：使用#pragma execution_character_set("UTF-8")，保存代码文件为UTF8+BOM格式


BinaryFileDemo::BinaryFileDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.tableView);

	theModel = new QStandardItemModel(0, 5, this);

	//设置表头
	QStringList lstHead;
	lstHead << "编 号"
		<< "姓 名" 
		<< "性 别" 
		<< "年 龄"
		<< "分 数";
	theModel->setHorizontalHeaderLabels(lstHead);

	selModel = new QItemSelectionModel(theModel);

	ui.tableView->setModel(theModel);	//绑定数据模型
	ui.tableView->setSelectionModel(selModel);	//绑定选择模型
}

void BinaryFileDemo::on_actionOpenSTM_triggered()
{
	theModel->clear();

	//使用QFile和QDataStream读取stm QT预定义格式二进制文件

	//STM文件可以方便保存很多QT序列化类型，例如QColor、QFont、QPoint等等，但STM文件不能用于其他语言平台
	strSTMFile = QFileDialog::getOpenFileName(this, "打开一个STM文件",
		QCoreApplication::applicationDirPath(),
		"STM File(*.stm);;All File(*.*)");
	if (strSTMFile.isEmpty()) return;

	QFile file(strSTMFile);
	if (file.exists() == false) return;

	if (!file.open(QIODevice::ReadOnly))
	{
		QMessageBox::critical(this, "错误", "打开STM文件失败，返回错误{" + file.errorString() + "}", QMessageBox::Ok);
		return;
	}

	QDataStream stream(&file);
	stream.setVersion(QDataStream::Qt_5_9);		//设置预定义格式的QT版本

	//读取行数和列数，两个整数
	int iRow, iCol;
	stream >> iRow >> iCol;

	theModel->setRowCount(iRow);
	theModel->setColumnCount(iCol);

	//读取列头，5个字符串
	QStringList lstHead;
	for (int i = 0; i < iCol; i++)
	{
		QString strTmp;
		stream >> strTmp;

		lstHead.append(strTmp);
	}

	theModel->setHorizontalHeaderLabels(lstHead);

	//读取数据，int，QString，bool，int，int
	for (int i = 0; i < iRow; i++)
	{
		int iID = 0;
		QString strName = "";
		bool bSex = true;
		int iAge = 0;
		int iSocre = 0;

		stream >> iID >> strName >> bSex >> iAge >> iSocre;

		QModelIndex index;
		
		index = theModel->index(i, 0);
		theModel->setData(index, iID, Qt::DisplayRole);

		index = theModel->index(i, 1);
		theModel->setData(index, strName, Qt::DisplayRole);

		index = theModel->index(i, 2);
		theModel->setData(index, bSex, Qt::DisplayRole);

		index = theModel->index(i, 3);
		theModel->setData(index, iAge, Qt::DisplayRole);

		index = theModel->index(i, 4);
		theModel->setData(index, iSocre, Qt::DisplayRole);
	}

	file.close();
}

void BinaryFileDemo::on_actionSaveSTM_triggered()
{
	//使用QFile和QDataStream保存stm QT预定义格式二进制文件
	if (strSTMFile.isEmpty())
	{
		strSTMFile = QFileDialog::getSaveFileName(this, "打开一个STM文件",
			QCoreApplication::applicationDirPath(),
			"STM File(*.stm);;All File(*.*)");
	}

	if (strSTMFile.isEmpty()) return;

	QFile file(strSTMFile);

	if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
	{
		QMessageBox::critical(this, "错误", "打开STM文件失败，返回错误{" + file.errorString() + "}", QMessageBox::Ok);
		return;
	}

	QDataStream stream(&file);
	stream.setVersion(QDataStream::Qt_5_9);		//设置预定义格式的QT版本

	int iRow, iCol;
	iRow = theModel->rowCount();
	iCol = theModel->columnCount();

	//行数，列数
	stream << iRow << iCol;

	//表头
	for (int i = 0; i < iCol; i++)
	{
		QStandardItem *item = theModel->horizontalHeaderItem(i);
		stream << item->data(Qt::DisplayRole).toString();
	}

	//表内容
	QModelIndex index;
	for (int i = 0; i < iRow; i++)
	{
		index = theModel->index(i, 0);
		stream << index.data(Qt::DisplayRole).toInt();

		index = theModel->index(i, 1);
		stream << index.data(Qt::DisplayRole).toString();

		index = theModel->index(i, 2);
		stream << index.data(Qt::DisplayRole).toBool();

		index = theModel->index(i, 3);
		stream << index.data(Qt::DisplayRole).toInt();

		index = theModel->index(i, 4);
		stream << index.data(Qt::DisplayRole).toInt();
	}

	file.close();

	QMessageBox::information(this, "提示", "保存STM文件成功！", QMessageBox::Ok);
}

void BinaryFileDemo::on_actionOpenDAT_triggered()
{
	theModel->clear();

	//使用QFile和QDataStream读取dat标准数据文件，只能保存基本类型，字符串使用readBytes，其他固定长度类型使用readRawData
	strDATFile = QFileDialog::getOpenFileName(this, "打开一个DAT文件",
		QCoreApplication::applicationDirPath(),
		"DAT File(*.dat);;All File(*.*)");
	if (strDATFile.isEmpty()) return;

	QFile file(strDATFile);
	if (file.exists() == false) return;

	if (!file.open(QIODevice::ReadOnly))
	{
		QMessageBox::critical(this, "错误", "打开DAT文件失败，返回错误{" + file.errorString() + "}", QMessageBox::Ok);
		return;
	}

	QDataStream stream(&file);
	stream.setByteOrder(QDataStream::LittleEndian);	//字节顺序设置为小端，X86平台都是小端，嵌入式都是大端

	//读取行数和列数，两个整数
	int iRow, iCol;
	stream.readRawData((char *)&iRow, sizeof(iRow));
	stream.readRawData((char *)&iCol, sizeof(iCol));

	theModel->setRowCount(iRow);
	theModel->setColumnCount(iCol);

	//读取列头，5个字符串
	char *ucBuff;
	uint uiLen;

	QStringList lstHead;
	for (int i = 0; i < iCol; i++)
	{
		stream.readBytes(ucBuff, uiLen);

		lstHead.append(QString::fromUtf8(ucBuff, uiLen));
	}

	theModel->setHorizontalHeaderLabels(lstHead);

	//读取数据，int，QString，bool，int，int
	for (int i = 0; i < iRow; i++)
	{
		int iID = 0;
		QString strName = "";
		bool bSex = true;
		int iAge = 0;
		int iSocre = 0;

		stream.readRawData((char *)&iID, sizeof(iID));

		stream.readBytes(ucBuff, uiLen);
		strName = QString::fromUtf8(ucBuff, uiLen);

		stream.readRawData((char *)&bSex, sizeof(bSex));
		stream.readRawData((char *)&iAge, sizeof(iAge));
		stream.readRawData((char *)&iSocre, sizeof(iSocre));

		QModelIndex index;

		index = theModel->index(i, 0);
		theModel->setData(index, iID, Qt::DisplayRole);

		index = theModel->index(i, 1);
		theModel->setData(index, strName, Qt::DisplayRole);

		index = theModel->index(i, 2);
		theModel->setData(index, bSex, Qt::DisplayRole);

		index = theModel->index(i, 3);
		theModel->setData(index, iAge, Qt::DisplayRole);

		index = theModel->index(i, 4);
		theModel->setData(index, iSocre, Qt::DisplayRole);
	}

	file.close();
}

void BinaryFileDemo::on_actionSaveDAT_triggered()
{
	//使用QFile和QDataStream保存dat
	if (strDATFile.isEmpty())
	{
		strDATFile = QFileDialog::getSaveFileName(this, "打开一个DAT文件",
			QCoreApplication::applicationDirPath(),
			"DAT File(*.dat);;All File(*.*)");
	}

	if (strDATFile.isEmpty()) return;

	QFile file(strDATFile);

	if (!file.open(QIODevice::WriteOnly | QIODevice::Truncate))
	{
		QMessageBox::critical(this, "错误", "打开DAT文件失败，返回错误{" + file.errorString() + "}", QMessageBox::Ok);
		return;
	}

	QDataStream stream(&file);
	stream.setByteOrder(QDataStream::LittleEndian);	//字节顺序设置为小端，X86平台都是小端，嵌入式都是大端

	int iRow, iCol;
	iRow = theModel->rowCount();
	iCol = theModel->columnCount();

	//行数，列数
	stream.writeRawData((char *)&iRow, sizeof(iRow));
	stream.writeRawData((char *)&iCol, sizeof(iCol));

	//表头
	for (int i = 0; i < iCol; i++)
	{
		QStandardItem *item = theModel->horizontalHeaderItem(i);
		QByteArray arr = item->data(Qt::DisplayRole).toString().toUtf8();

		stream.writeBytes(arr, arr.length());
	}

	//表内容
	QModelIndex index;
	for (int i = 0; i < iRow; i++)
	{
		index = theModel->index(i, 0);
		int iID = index.data(Qt::DisplayRole).toInt();
		stream.writeRawData((char *)&iID, sizeof(iID));

		index = theModel->index(i, 1);
		QString strName = index.data(Qt::DisplayRole).toString();
		QByteArray arr = strName.toUtf8();
		stream.writeBytes(arr, arr.length());

		index = theModel->index(i, 2);
		bool bSex = index.data(Qt::DisplayRole).toBool();
		stream.writeRawData((char *)&bSex, sizeof(bSex));

		index = theModel->index(i, 3);
		int iAge = index.data(Qt::DisplayRole).toInt();
		stream.writeRawData((char *)&iAge, sizeof(iAge));

		index = theModel->index(i, 4);
		int iSocre = index.data(Qt::DisplayRole).toInt();
		stream.writeRawData((char *)&iSocre, sizeof(iSocre));
	}

	file.close();

	QMessageBox::information(this, "提示", "保存DAT文件成功！", QMessageBox::Ok);
}

void BinaryFileDemo::on_actionAddRow_triggered()
{
	QList<QStandardItem*> lstItem;
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());

	lstItem.at(0)->setData(++iRowBase, Qt::DisplayRole);
	lstItem.at(2)->setData(true, Qt::DisplayRole);
	lstItem.at(3)->setData(0, Qt::DisplayRole);
	lstItem.at(4)->setData(0, Qt::DisplayRole);

	theModel->appendRow(lstItem);
}

void BinaryFileDemo::on_actionInsertRow_triggered()
{
	if (selModel->hasSelection() == false) return;

	QModelIndex index = selModel->selectedIndexes().at(0);	//获取选中的索引

	QList<QStandardItem*> lstItem;
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());
	lstItem.append(new QStandardItem());

	lstItem.at(0)->setData(++iRowBase, Qt::DisplayRole);
	lstItem.at(2)->setData(true, Qt::DisplayRole);
	lstItem.at(3)->setData(0, Qt::DisplayRole);
	lstItem.at(4)->setData(0, Qt::DisplayRole);

	theModel->insertRow(theModel->itemFromIndex(index)->row(), lstItem);
}

void BinaryFileDemo::on_actionDelRow_triggered()
{
	if (selModel->hasSelection() == false) return;

	QModelIndex index = selModel->selectedIndexes().at(0);	//获取选中的索引

	theModel->removeRow(theModel->itemFromIndex(index)->row());
}
