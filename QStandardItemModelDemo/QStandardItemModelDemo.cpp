#include "QStandardItemModelDemo.h"

#pragma execution_character_set("UTF-8")

#include <qfiledialog.h>
#include <qtextstream.h>

QStandardItemModelDemo::QStandardItemModelDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	//初始化状态栏
	labCurrFile = new QLabel(this);
	labCurrFile->setText("当前文件：");
	labCurrFile->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred));
	labCurrFile->setMinimumWidth(200);
	ui.statusBar->addWidget(labCurrFile);

	labCurrCell = new QLabel(this);
	labCurrCell->setText("当前单元格：");
	labCurrCell->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred));
	labCurrCell->setMinimumWidth(200);
	ui.statusBar->addWidget(labCurrCell);

	labCellContent = new QLabel(this);
	labCellContent->setText("单元格内容：");
	labCellContent->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred));
	labCellContent->setMinimumWidth(200);
	ui.statusBar->addWidget(labCellContent);

	//初始化数据模型
	theModel = new QStandardItemModel(2, 5, this);
	theSelection = new QItemSelectionModel(theModel);

	//绑定TableView组件
	ui.tvShow->setModel(theModel);
	ui.tvShow->setSelectionModel(theSelection);

	ui.tvShow->setSelectionMode(QAbstractItemView::ExtendedSelection);	//选择方式
	ui.tvShow->setSelectionBehavior(QAbstractItemView::SelectItems);	//多选

	//设置自定义代理
	ui.tvShow->setItemDelegateForColumn(3, &dgInt);		//设置下标为3的列使用dgInt自定义代理
	ui.tvShow->setItemDelegateForColumn(4, &dgBool);	//设置下标为4的列使用dgBool自定义代理

	connect(theSelection, SIGNAL(currentChanged(QModelIndex, QModelIndex)), this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));
}

void QStandardItemModelDemo::initModel(QStringList lstData)
{
	//从StringList初始化数据模型
	int rowCnt = lstData.count();
	if (rowCnt <= 0) return;

	theModel->clear();
	theModel->setRowCount(rowCnt-1);

	//设置表头
	QString strHead = lstData.at(0);
	QStringList lstHead = strHead.split(",");

	theModel->setHorizontalHeaderLabels(lstHead);

	//设置表格的数据
	QStandardItem *item;

	for (int i = 1; i < rowCnt; i++)
	{
		QString strLine = lstData.at(i);
		QStringList lstLine = strLine.split(",");

		if (lstLine.count() != 5) continue;

		for (int j = 0; j < 5; j++)
		{
			item = new QStandardItem(lstLine.at(j));

			theModel->setItem(i - 1, j, item);
		}

		item = new QStandardItem(lstLine.at(0));
		theModel->setItem(i - 1, 0, item);
	}
}

void QStandardItemModelDemo::on_actOpenFile_triggered()
{
	//打开文件
	QString currPath = QCoreApplication::applicationDirPath();
	QString strFile = QFileDialog::getOpenFileName(this, "打开一个文件：", currPath, "Text File(*.txt);All File(*.*)");

	if (strFile.isEmpty()) return;

	QStringList lstData;
	QFile file(strFile);
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		QTextStream stream(&file);
		stream.setCodec("UTF-8");

		ui.ptShow->clear();

		while (!stream.atEnd())
		{
			QString strLine = stream.readLine();

			if (!strLine.trimmed().isEmpty())
			{
				lstData.append(strLine);
				ui.ptShow->appendPlainText(strLine);
			}
		}

		file.close();

		initModel(lstData);

		labCurrFile->setText("当前文件：" + strFile);
	}
}

void QStandardItemModelDemo::on_actSaveAs_triggered()
{
	QString strFile = QFileDialog::getSaveFileName(this, "选择一个文本文件：",
		QCoreApplication::applicationDirPath(), "Text File(*.txt);All File(*.*)");

	if (strFile.isEmpty()) return;


	QString strData;

	//获取表头数据
	int i;
	for (i = 0; i < theModel->columnCount() - 1; i++)
	{
		strData += theModel->horizontalHeaderItem(i)->text() + ",";
	}
	strData += theModel->horizontalHeaderItem(i)->text() + "\n";

	//获取数据
	for (int i = 0; i < theModel->rowCount(); i++)
	{
		int j;
		for (j = 0; j < 4; j++)
		{
			strData += theModel->item(i, j)->text() + ",";
		}
		strData += theModel->item(i, j)->text() +"\n";
	}

	//保存到文件
	QFile file(strFile);
	if (file.open(QIODevice::WriteOnly | QIODevice::Text))
	{
		file.write(strData.toUtf8());
		file.close();
	}
}

void QStandardItemModelDemo::on_actPreview_triggered()
{

}

void QStandardItemModelDemo::on_actAddRow_triggered()
{
	//在后面插入新行
	QList<QStandardItem *> lstItem;
	lstItem.append(new QStandardItem("99901"));
	lstItem.append(new QStandardItem("新生"));
	lstItem.append(new QStandardItem("21"));
	lstItem.append(new QStandardItem("95"));

	QStandardItem *item = new QStandardItem("");
	item->setCheckable(true);
	item->setCheckState(Qt::Checked);
	lstItem.append(item);

	theModel->insertRow(theModel->rowCount(), lstItem);

	//设置当前索引为新增行
	QModelIndex newIndex = theModel->index(theModel->rowCount() - 1, 0);
	theSelection->setCurrentIndex(newIndex, QItemSelectionModel::ClearAndSelect);
}

void QStandardItemModelDemo::on_actInsertRow_triggered()
{
	//如果没有选择任何行
	if (theSelection->hasSelection() == false) return;

	//在当前行前插入新行
	QList<QStandardItem *> lstItem;
	lstItem.append(new QStandardItem("88802"));
	lstItem.append(new QStandardItem("插班生"));
	lstItem.append(new QStandardItem("20"));
	lstItem.append(new QStandardItem("77"));

	QStandardItem *item = new QStandardItem("");
	item->setCheckable(true);
	item->setCheckState(Qt::Unchecked);
	lstItem.append(item);

	theModel->insertRow(theSelection->currentIndex().row(), lstItem);

	//设置当前索引为新增行
	QModelIndex newIndex = theModel->index(theSelection->currentIndex().row()-1, 0);

	theSelection->setCurrentIndex(newIndex, QItemSelectionModel::ClearAndSelect);
}

void QStandardItemModelDemo::on_actDelRow_triggered()
{
	//如果没有选择任何行
	if (theSelection->hasSelection() == false) return;

	theModel->removeRow(theSelection->currentIndex().row());
}

void QStandardItemModelDemo::on_actAlignLeft_triggered()
{
	//如果没有选择
	if (theSelection->hasSelection() == false) return;

	QModelIndexList lstIndex = theSelection->selectedIndexes();
	for (int i = 0; i < lstIndex.count(); i++)
	{
		QModelIndex index = lstIndex.at(i);
		QStandardItem *item = theModel->itemFromIndex(index);
		item->setTextAlignment(Qt::AlignLeft | Qt::AlignVCenter);
	}
}

void QStandardItemModelDemo::on_actAlignCenter_triggered()
{
	//如果没有选择
	if (theSelection->hasSelection() == false) return;

	QModelIndexList lstIndex = theSelection->selectedIndexes();
	for (int i = 0; i < lstIndex.count(); i++)
	{
		QModelIndex index = lstIndex.at(i);
		QStandardItem *item = theModel->itemFromIndex(index);
		item->setTextAlignment(Qt::AlignCenter);
	}
}

void QStandardItemModelDemo::on_actAlignRight_triggered()
{
	//如果没有选择
	if (theSelection->hasSelection() == false) return;

	QModelIndexList lstIndex = theSelection->selectedIndexes();
	for (int i = 0; i < lstIndex.count(); i++)
	{
		QModelIndex index = lstIndex.at(i);
		QStandardItem *item = theModel->itemFromIndex(index);
		item->setTextAlignment(Qt::AlignRight | Qt::AlignVCenter);
	}
}

void QStandardItemModelDemo::on_actBlod_triggered(bool isChecked)
{
	//如果没有选择
	if (theSelection->hasSelection() == false) return;

	QModelIndexList lstIndex = theSelection->selectedIndexes();
	for (int i = 0; i < lstIndex.count(); i++)
	{
		QModelIndex index = lstIndex.at(i);
		QStandardItem *item = theModel->itemFromIndex(index);

		QFont font = item->font();
		font.setBold(isChecked);
		item->setFont(font);
	}
}

void QStandardItemModelDemo::on_currentChanged(QModelIndex currIndex, QModelIndex currPrevious)
{
	if (currIndex.isValid())
	{
		//单元格坐标
		labCurrCell->setText(QString::asprintf("当前单元格：%d, %d", currIndex.row(), currIndex.column()));

		//获取当前单元格
		QStandardItem *item = theModel->itemFromIndex(currIndex);
		if (item->isCheckable())
		{
			labCellContent->setText(QString::asprintf("单元格内容：%s", item->checkState()==Qt::Checked?"1":"0"));
		}
		else
		{
			labCellContent->setText(QString::asprintf("单元格内容：%s", item->text().toStdString().c_str()));
		}

		//初始化粗体按钮
		ui.actBlod->setChecked(item->font().bold());

	}
}
