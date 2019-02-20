#include "QSqlRelationalTableDemo.h"

#pragma	 execution_character_set("UTF-8")


QSqlRelationalTableDemo::QSqlRelationalTableDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.tv);
}

void QSqlRelationalTableDemo::openTable()
{
	//创建模型
	tabModel = new QSqlRelationalTableModel(this, DB);
	tabModel->setTable("studInfo");
	tabModel->setSort(0, Qt::AscendingOrder);
	tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);

	tabModel->setHeaderData(tabModel->fieldIndex("studID"), Qt::Horizontal, "编号");
	tabModel->setHeaderData(tabModel->fieldIndex("studName"), Qt::Horizontal, "姓名");
	tabModel->setHeaderData(tabModel->fieldIndex("gender"), Qt::Horizontal, "性别");
	tabModel->setHeaderData(tabModel->fieldIndex("departID"), Qt::Horizontal, "学院");
	tabModel->setHeaderData(tabModel->fieldIndex("majorID"), Qt::Horizontal, "专业");

	//设置代码字段的关系
	tabModel->setRelation(tabModel->fieldIndex("departID"),
		QSqlRelation("departments", "departID", "departments"));	//显示departments，实际操作的是departID

	tabModel->setRelation(tabModel->fieldIndex("majorID"),
		QSqlRelation("majors", "majorID", "major"));	//显示departments，实际操作的是departID

	//创建选择模型
	selModel = new QItemSelectionModel(tabModel);

	bool bOk = false;
	bOk = connect(selModel, SIGNAL(currentChanged(QModelIndex, QModelIndex)), this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));

	//绑定view
	ui.tv->setModel(tabModel);
	ui.tv->setSelectionModel(selModel);

	//设置关系代理为默认代理
	ui.tv->setItemDelegate(new QSqlRelationalDelegate(ui.tv));

	//查询数据表
	if (!tabModel->select())
	{
		QMessageBox::warning(this, "警告", "查询数据库失败！", QMessageBox::Ok);
	}
	else
	{
		ui.actOpen->setEnabled(false);
		ui.actClose->setEnabled(true);
		ui.actDelete->setEnabled(true);
		ui.actInsert->setEnabled(true);
	}
}

void QSqlRelationalTableDemo::on_actOpen_triggered()
{
	QString strFile = QFileDialog::getOpenFileName(this, "选择一个SQLite数据库文件", QCoreApplication::applicationDirPath(), "SQLite File(*.db *.db3 *.sqlite);;All File(*.*)");
	if (strFile.isEmpty()) return;

	DB = QSqlDatabase::addDatabase("QSQLITE");
	DB.setDatabaseName(strFile);
	if (DB.open() == false)
	{
		QMessageBox::warning(this, "警告", "打开数据库失败，返回错误" + DB.lastError().text(), QMessageBox::Ok);
		return;
	}

	openTable();
}

void QSqlRelationalTableDemo::on_actClose_triggered()
{
	tabModel->submitAll();
	tabModel->clear();
	DB.close();

	ui.actOpen->setEnabled(true);
	ui.actClose->setEnabled(false);
	ui.actDelete->setEnabled(false);
	ui.actInsert->setEnabled(false);
	ui.actSave->setEnabled(false);
	ui.actCancel->setEnabled(false);
}

void QSqlRelationalTableDemo::on_actInsert_triggered()
{
	tabModel->insertRow(tabModel->rowCount(), QModelIndex());
	QModelIndex index = tabModel->index(tabModel->rowCount() - 1, 1);

	selModel->clearSelection();
	selModel->setCurrentIndex(index, QItemSelectionModel::Rows);
}

void QSqlRelationalTableDemo::on_actDelete_triggered()
{
	QModelIndex index = selModel->currentIndex();
	if (index.isValid() == false) return;

	tabModel->removeRow(selModel->currentIndex().row());
}

void QSqlRelationalTableDemo::on_actSave_triggered()
{
	//保存修改
	bool bRev = tabModel->submitAll();
	if (bRev)
	{
		ui.actSave->setEnabled(false);
		ui.actCancel->setEnabled(false);
	}
	else
	{
		QMessageBox::warning(this, "错误", "保存数据库失败，返回错误[" + tabModel->lastError().text() + "]", QMessageBox::Ok);
	}
}

void QSqlRelationalTableDemo::on_actCancel_triggered()
{
	tabModel->revertAll();

	ui.actSave->setEnabled(false);
	ui.actCancel->setEnabled(false);
}

void QSqlRelationalTableDemo::on_currentChanged(const QModelIndex & current, const QModelIndex & parent)
{
	ui.actSave->setEnabled(tabModel->isDirty());
	ui.actCancel->setEnabled(tabModel->isDirty());
}

