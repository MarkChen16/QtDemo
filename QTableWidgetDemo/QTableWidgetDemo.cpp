#include "QTableWidgetDemo.h"


#pragma execution_character_set("UTF-8")

QTableWidgetDemo::QTableWidgetDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	
	//初始化状态栏
	labPos = new QLabel("坐标：");
	labPos->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding));
	labPos->setMinimumWidth(200);
	ui.statusBar->addWidget(labPos);

	labType = new QLabel("类型：");
	labType->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding));
	labType->setMinimumWidth(200);
	ui.statusBar->addWidget(labType);

	labContent = new QLabel("内容：");
	labContent->setSizePolicy(QSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding));
	labContent->setMinimumWidth(200);
	ui.statusBar->addWidget(labContent);

	initTableHead();
	setRows();
	initData();

	editAble();
	spacingColor();
	showRowHead();
	showColHead();

	selRowMode();
	selCellMode();

	cellClicked(0, 0);

	//绑定信号槽
	connect(ui.btnInitHead, SIGNAL(clicked()), this, SLOT(initTableHead()));
	connect(ui.btnSetRow, SIGNAL(clicked()), this, SLOT(setRows()));
	connect(ui.btnInitData, SIGNAL(clicked()), this, SLOT(initData()));

	connect(ui.btnInsertRow, SIGNAL(clicked()), this, SLOT(insertRow()));
	connect(ui.btnAddRow, SIGNAL(clicked()), this, SLOT(addRow()));
	connect(ui.btnDelRow, SIGNAL(clicked()), this, SLOT(delRow()));

	connect(ui.btnAutoRowH, SIGNAL(clicked()), this, SLOT(autoRowH()));
	connect(ui.btnAutoColW, SIGNAL(clicked()), this, SLOT(autoColW()));

	connect(ui.btnReadToText, SIGNAL(clicked()), this, SLOT(readToText()));

	connect(ui.tableWidget, SIGNAL(cellClicked(int, int)), this, SLOT(cellClicked(int, int)));

	connect(ui.cbEditable, SIGNAL(clicked()), this, SLOT(editAble()));
	connect(ui.cbShowColHead, SIGNAL(clicked()), this, SLOT(showColHead()));
	connect(ui.cbShowRowHead, SIGNAL(clicked()), this, SLOT(showRowHead()));
	connect(ui.cbSpacingColor, SIGNAL(clicked()), this, SLOT(spacingColor()));
	connect(ui.rbSelCell, SIGNAL(clicked()), this, SLOT(selCellMode()));
	connect(ui.rbSelRow, SIGNAL(clicked()), this, SLOT(selRowMode()));
}

void QTableWidgetDemo::initTableHead()
{
	//清除所有TableWidgetItem
	ui.tableWidget->clear();

	//清除行头
	while (ui.tableWidget->rowCount() != 0)
	{
		ui.tableWidget->removeRow(0);
	}

	//清除列头
	while (ui.tableWidget->columnCount() != 0)
	{
		ui.tableWidget->removeColumn(0);
	}


	//设置表头
	QTableWidgetItem *head;
	QStringList headerText;
	headerText << "姓 名" << "性 别" << "出生日期" << "民 族" << "分 数" << "是否党员";

	ui.tableWidget->setColumnCount(headerText.count());

	for (int i = 0; i < headerText.count(); i++)
	{
		head = new QTableWidgetItem(headerText[i]);

		QFont font = head->font();
		font.setBold(true);
		font.setPointSize(10);
		head->setFont(font);

		head->setTextColor(Qt::blue);

		ui.tableWidget->setHorizontalHeaderItem(i, head);
	}

	//如果只是设置表头，不需要设置字体、颜色和关联的数据
	//ui.tableWidget->setHorizontalHeaderLabels(headerText);
}

void QTableWidgetDemo::initData()
{
	//只清除单元格式内容
	ui.tableWidget->clearContents();

	//初始化数据
	QDate d;
	d.setDate(1986, 5, 10);

	int intRows = ui.tableWidget->rowCount();

	for (int i = 0; i < intRows; i++)
	{
		d = d.addDays(i);

		createRow(i, QString::asprintf("学生%d", i+1), i % 2 == 0 ? "男" : "女", d, "汉族", qrand()%100, i % 2 == 0);
	}

}

void QTableWidgetDemo::createRow(int rowNo, QString sName, QString sSex, QDate birth, QString sNation, int iScore, bool isPM)
{
	createCell(rowNo, 0, ctName, sName, QVariant(sName));
	createCell(rowNo, 1, ctSex, sSex, QVariant(sSex));
	createCell(rowNo, 2, ctBirth, birth.toString("yyyy-MM-dd"), QVariant(birth));
	createCell(rowNo, 3, ctNation, sNation, QVariant(sNation));
	createCell(rowNo, 4, ctScore, QString::asprintf("%d", iScore), QVariant(iScore));
	createCell(rowNo, 5, ctPM, "", QVariant(isPM));
}

void QTableWidgetDemo::createCell(int iRow, int iCol, colType type, QString sText, QVariant vData)
{
	QTableWidgetItem *cell;
	cell = new QTableWidgetItem(sText, type);

	QIcon icon;

	switch (type)
	{
	case QTableWidgetDemo::ctName:

		break;
	case QTableWidgetDemo::ctSex:
		//性别，设置图标
		if ("男" == sText) icon.addFile(":/QTableWidgetDemo/Resources/CONTACTL.ICO");
		else icon.addFile(":/QTableWidgetDemo/Resources/DISTLSTL.ICO");
		cell->setIcon(icon);

		cell->setTextAlignment(Qt::AlignHCenter | Qt::AlignVCenter);

		break;
	case QTableWidgetDemo::ctBirth:

		break;
	case QTableWidgetDemo::ctNation:

		break;
	case QTableWidgetDemo::ctScore:

		break;
	case QTableWidgetDemo::ctPM:
		//如果是党员，设置为复选框
		cell->setFlags(Qt::ItemIsUserCheckable|Qt::ItemIsSelectable|Qt::ItemIsEnabled);

		if (vData.toBool()) cell->setCheckState(Qt::Checked);
		else cell->setCheckState(Qt::Unchecked);

		cell->setBackgroundColor(Qt::yellow);

		break;
	}

	cell->setData(Qt::UserRole, vData);

	ui.tableWidget->setItem(iRow, iCol, cell);
}

void QTableWidgetDemo::editAble()
{
	if (ui.cbEditable->isChecked())
	{
		ui.tableWidget->setEditTriggers(QAbstractItemView::DoubleClicked | QAbstractItemView::SelectedClicked);
	}
	else
	{
		ui.tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
	}
}

void QTableWidgetDemo::spacingColor()
{
	ui.tableWidget->setAlternatingRowColors(ui.cbSpacingColor->isChecked());
}

void QTableWidgetDemo::showRowHead()
{
	ui.tableWidget->horizontalHeader()->setVisible(ui.cbShowRowHead->isChecked());
}

void QTableWidgetDemo::showColHead()
{
	ui.tableWidget->verticalHeader()->setVisible(ui.cbShowColHead->isChecked());
}

void QTableWidgetDemo::selRowMode()
{
	if (ui.rbSelRow->isChecked()) ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
}

void QTableWidgetDemo::selCellMode()
{
	if (ui.rbSelCell->isChecked()) ui.tableWidget->setSelectionBehavior(QAbstractItemView::SelectItems);
}

void QTableWidgetDemo::cellClicked(int row, int col)
{
	QTableWidgetItem *item = ui.tableWidget->item(row, col);

	labPos->setText(QString::asprintf("坐标：%d, %d", row, col));

	labType->setText(QString::asprintf("类型：%d", item->type()));

	labContent->setText("内容：" + item->data(Qt::UserRole).toString());
}

void QTableWidgetDemo::readToText()
{
	QString strData = "";

	for (int i = 0; i < ui.tableWidget->rowCount(); i++)
	{
		for (int j = 0; j < ui.tableWidget->columnCount(); j++)
		{
			QTableWidgetItem *item = ui.tableWidget->item(i, j);

			switch (item->type())
			{
			case ctName:
				strData += item->data(Qt::UserRole).toString() + "\t";
				break;
			case ctSex:
				strData += item->data(Qt::UserRole).toString() + "\t";
				break;
			case ctBirth:
				strData += item->data(Qt::UserRole).toDate().toString("yyyy-MM-dd") + "\t";
				break;
			case ctNation:
				strData += item->data(Qt::UserRole).toString() + "\t";
				break;
			case ctScore:
				strData += item->data(Qt::UserRole).toString() + "\t";
				break;
			case ctPM:
				strData += item->data(Qt::UserRole).toBool() ? "男" : "女";
				break;
			}
		}

		strData += "\n";
	}

	ui.plainTextEdit->setPlainText(strData);
}

void QTableWidgetDemo::autoRowH()
{
	ui.tableWidget->resizeRowsToContents();
}

void QTableWidgetDemo::autoColW()
{
	ui.tableWidget->resizeColumnsToContents();
}

void QTableWidgetDemo::addRow()
{
	//添加行
	int currRow = ui.tableWidget->rowCount();
	ui.tableWidget->insertRow(currRow);
	createRow(currRow, "新生", "女", QDate::currentDate(), "壮族", 70, true);

	ui.tableWidget->selectRow(currRow);
}

void QTableWidgetDemo::delRow()
{
	//删除行
	int intCurrRow = ui.tableWidget->currentRow();
	if (intCurrRow == -1) return;

	ui.tableWidget->removeRow(intCurrRow);
}

void QTableWidgetDemo::insertRow()
{
	//插入行
	int intCurrRow = ui.tableWidget->currentRow();
	if (intCurrRow == -1) return;

	ui.tableWidget->insertRow(intCurrRow);
	createRow(intCurrRow, "新同学", "男", QDate::currentDate(), "苗族", 80, true);

	ui.tableWidget->selectRow(intCurrRow);
}

void QTableWidgetDemo::setRows()
{
	//设置行头
	int intRows = ui.sbRowCount->value();

	QTableWidgetItem *item;

	ui.tableWidget->setRowCount(intRows);
	for (int i = 0; i < intRows; i++)
	{
		item = new QTableWidgetItem(QString::asprintf("%d", i+1));

		QFont font = item->font();
		font.setBold(true);
		font.setPointSize(10);
		item->setFont(font);

		item->setTextColor(Qt::blue);

		ui.tableWidget->setVerticalHeaderItem(i, item);
	}
}
