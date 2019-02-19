#include "QSqlTableModelDemo.h"

#include <qfiledialog.h>
#include <qmessagebox.h>

#pragma execution_character_set("UTF-8")

QSqlTableModelDemo::QSqlTableModelDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	this->setCentralWidget(ui.splitter_2);
	this->setWindowState(Qt::WindowMaximized);

	tabModel = NULL;
	selModel = NULL;
	dataMapper = NULL;
}

void QSqlTableModelDemo::openTable()
{
	//打开数据表
	tabModel = new QSqlTableModel(this, DB);
	tabModel->setTable("employee");		//打开的数据表
	tabModel->setSort(tabModel->fieldIndex("EmpNo"), Qt::AscendingOrder);	//默认排序是EmpNo
	tabModel->setEditStrategy(QSqlTableModel::OnManualSubmit);		//手动提交修改

	if (!tabModel->select())
	{
		QMessageBox::warning(this, "错误", "查询数据表失败！", QMessageBox::Ok);
		return;
	}

	//设置字段显示名称
	tabModel->setHeaderData(tabModel->fieldIndex("EmpNo"), Qt::Horizontal, "编号");
	tabModel->setHeaderData(tabModel->fieldIndex("EmpName"), Qt::Horizontal, "姓名");
	tabModel->setHeaderData(tabModel->fieldIndex("Gender"), Qt::Horizontal, "性别");
	tabModel->setHeaderData(tabModel->fieldIndex("Height"), Qt::Horizontal, "身高");
	tabModel->setHeaderData(tabModel->fieldIndex("Birthday"), Qt::Horizontal, "生日日期");
	tabModel->setHeaderData(tabModel->fieldIndex("Mobile"), Qt::Horizontal, "手机");
	tabModel->setHeaderData(tabModel->fieldIndex("Province"), Qt::Horizontal, "省份");
	tabModel->setHeaderData(tabModel->fieldIndex("City"), Qt::Horizontal, "城市");
	tabModel->setHeaderData(tabModel->fieldIndex("Department"), Qt::Horizontal, "部门");
	tabModel->setHeaderData(tabModel->fieldIndex("Education"), Qt::Horizontal, "学历");
	tabModel->setHeaderData(tabModel->fieldIndex("Salary"), Qt::Horizontal, "工资");
	tabModel->setHeaderData(tabModel->fieldIndex("Photo"), Qt::Horizontal, "照片");
	tabModel->setHeaderData(tabModel->fieldIndex("Memo"), Qt::Horizontal, "备注");

	//选择模型
	selModel = new QItemSelectionModel(tabModel);
	connect(selModel, SIGNAL(currentChanged(QModelIndex, QModelIndex)), this, SLOT(on_currentChanged(QModelIndex, QModelIndex)));
	connect(selModel, SIGNAL(currentRowChanged(QModelIndex, QModelIndex)), this, SLOT(on_currentRowChanged(QModelIndex, QModelIndex)));

	//设置view组件
	ui.tv->setModel(tabModel);
	ui.tv->setSelectionModel(selModel);
	ui.tv->setSelectionMode(QAbstractItemView::SingleSelection);

	//隐藏某列
	ui.tv->setColumnHidden(tabModel->fieldIndex("Photo"), true);
	ui.tv->setColumnHidden(tabModel->fieldIndex("Memo"), true);

	//创建数据映射
	dataMapper = new QDataWidgetMapper(this);
	dataMapper->setModel(tabModel);
	dataMapper->setSubmitPolicy(QDataWidgetMapper::AutoSubmit);		//修改自动提交

	dataMapper->addMapping(ui.sbEmpNo, tabModel->fieldIndex("EmpNo"));
	dataMapper->addMapping(ui.txtName, tabModel->fieldIndex("EmpName"));
	dataMapper->addMapping(ui.cbSex, tabModel->fieldIndex("Gender"));
	dataMapper->addMapping(ui.sbHeight, tabModel->fieldIndex("Height"));
	dataMapper->addMapping(ui.dtBirthday, tabModel->fieldIndex("Birthday"));
	dataMapper->addMapping(ui.txtMobile, tabModel->fieldIndex("Mobile"));
	dataMapper->addMapping(ui.cbProv, tabModel->fieldIndex("Province"));
	dataMapper->addMapping(ui.txtCity, tabModel->fieldIndex("City"));
	dataMapper->addMapping(ui.cbPartment, tabModel->fieldIndex("Department"));
	dataMapper->addMapping(ui.cbEducation, tabModel->fieldIndex("Education"));
	dataMapper->addMapping(ui.sbSalary, tabModel->fieldIndex("Salary"));
	dataMapper->addMapping(ui.ptMemo, tabModel->fieldIndex("Memo"));

	dataMapper->toFirst();	//移动到首记录

	//自定义代理
	QStringList lstSex;
	lstSex << "男" << "女";
	cbDelegate.SetList(lstSex);
	ui.tv->setItemDelegateForColumn(tabModel->fieldIndex("Gender"), &cbDelegate);

	//初始化排序的字段列表
	getFieldNames();

	//Action使能
	ui.actOpen->setEnabled(false);
	ui.actAdd->setEnabled(true);
	ui.actInsert->setEnabled(true);
	ui.actDelete->setEnabled(true);

	ui.actSetImage->setEnabled(true);
	ui.actClearImage->setEnabled(true);
	ui.actAddSalary->setEnabled(true);

	ui.groupBox_Sort->setEnabled(true);
	ui.groupBox_Filter->setEnabled(true);
}

void QSqlTableModelDemo::getFieldNames()
{
	QSqlRecord rec = tabModel->record();	//返回空的行

	ui.cbSort->clear();
	for (int i = 0; i < rec.count(); i++)
	{
		ui.cbSort->addItem(rec.fieldName(i));	//获取字段名称
	}

	if (ui.cbSort->count() != 0) ui.cbSort->setCurrentIndex(0);
}

void QSqlTableModelDemo::closeEvent(QCloseEvent * event)
{
	if (tabModel != NULL)
	{
		if (tabModel->isDirty())
		{
			int intRev = QMessageBox::warning(this, "询问框",
				"数据库已经修改，是否保存并退出程序？",
				QMessageBox::Yes, QMessageBox::No);

			if (intRev == QMessageBox::Yes)
			{
				tabModel->submitAll();
			}
			else
			{ 
				event->ignore();	//取消退出
				return;
			}
		}
	}

	event->accept();
}

void QSqlTableModelDemo::on_actOpen_triggered()
{
	//打开数据库
	QString strDBFile = QFileDialog::getOpenFileName(this, "", QCoreApplication::applicationDirPath(), "SQLite数据库(*.db *.db3 *.sqlite);;所有文件(*.*)");
	if (strDBFile.isEmpty()) return;

	DB = QSqlDatabase::addDatabase("QSQLITE");
	DB.setDatabaseName(strDBFile);

	if (!DB.open())
	{
		//打开失败
		QMessageBox::warning(this, "错误", "打开数据库失败！", QMessageBox::Ok);
		return;
	}

	openTable();
}

void QSqlTableModelDemo::on_actAdd_triggered()
{
	//添加记录
	tabModel->insertRow(tabModel->rowCount());
	QModelIndex newIndex = tabModel->index(tabModel->rowCount() - 1, 1);

	selModel->clearSelection();	//取消当前选择
	selModel->setCurrentIndex(newIndex, QItemSelectionModel::Select);

	int currRow = newIndex.row();
	tabModel->setData(tabModel->index(currRow, 0), 2000 + tabModel->rowCount());	//设置初始编号
	tabModel->setData(tabModel->index(currRow, 2), "男");
}

void QSqlTableModelDemo::on_actInsert_triggered()
{
	//插入记录
	QModelIndex currIndex = selModel->currentIndex();
	tabModel->insertRow(currIndex.row(), QModelIndex());

	selModel->clearSelection();
	selModel->setCurrentIndex(currIndex, QItemSelectionModel::Select);
}

void QSqlTableModelDemo::on_actDelete_triggered()
{
	//删除当前记录
	QModelIndex currIndex = selModel->currentIndex();
	tabModel->removeRow(currIndex.row());
}

void QSqlTableModelDemo::on_actSetImage_triggered()
{
	//设置照片=========================
	//获取当前索引
	QModelIndex currIndex = selModel->currentIndex();
	if (!currIndex.isValid()) return;

	//选择文件
	QString imageFile = QFileDialog::getOpenFileName(this, "选择一个图片", 
		QCoreApplication::applicationDirPath(), "Image File(*.jpg *.png *.bmp *.jpge);;All File(*.*)");
	if (imageFile.isEmpty()) return;

	//读取照片
	QByteArray arr;
	QFile *file = new QFile(imageFile);
	if (!file->open(QIODevice::ReadOnly))
	{
		QMessageBox::warning(this, "错误", "读取图片失败！");
		return;
	}

	arr = file->readAll();
	file->close();

	//修改照片数据
	QSqlRecord rec = tabModel->record(currIndex.row());
	rec.setValue("Photo", arr);
	tabModel->setRecord(currIndex.row(), rec);

	//显示图片
	QPixmap pix;
	pix.loadFromData(arr);

	ui.labPhoto->setPixmap(pix.scaledToWidth(ui.labPhoto->size().width()));
}

void QSqlTableModelDemo::on_actClearImage_triggered()
{
	//清除照片===================
	//获取当前索引
	QModelIndex currIndex = selModel->currentIndex();
	if (!currIndex.isValid()) return;

	//修改照片数据
	QSqlRecord rec = tabModel->record(currIndex.row());
	rec.setNull("Photo");
	tabModel->setRecord(currIndex.row(), rec);

	//显示图片
	ui.labPhoto->clear();
}

void QSqlTableModelDemo::on_actAddSalary_triggered()
{
	//全部加工资%10
	int cnt = tabModel->rowCount();
	if (cnt <= 0) return;

	for (int i = 0; i < cnt; i++)
	{
		QSqlRecord rec = tabModel->record(i);

		float fSalary = 10000;
		if (!rec.isNull("Salary")) fSalary = rec.value("Salary").toFloat();

		fSalary *= 1.1;
		rec.setValue("Salary", fSalary);

		tabModel->setRecord(i, rec);
	}

	if (tabModel->submitAll())
	{
		QMessageBox::information(this, "提示", "全员涨工资10%完毕，继续加油！");
	}
	else
	{
		QMessageBox::warning(this, "警告", "提交数据库失败！");
	}
}

void QSqlTableModelDemo::on_actSave_triggered()
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

void QSqlTableModelDemo::on_actCancel_triggered()
{
	//取消修改
	tabModel->revertAll();

	ui.actSave->setEnabled(false);
	ui.actCancel->setEnabled(false);
}

void QSqlTableModelDemo::on_currentChanged(const QModelIndex &current, const QModelIndex &previous)
{
	//当前行被修改时
	ui.actSave->setEnabled(tabModel->isDirty());
	ui.actCancel->setEnabled(tabModel->isDirty());
}

void QSqlTableModelDemo::on_currentRowChanged(const QModelIndex &current, const QModelIndex &previous)
{
	//行切换时，显示图片
	ui.actDelete->setEnabled(current.isValid());
	ui.actSetImage->setEnabled(current.isValid());
	ui.actClearImage->setEnabled(current.isValid());

	//如果行无效时
	if (!current.isValid())
	{
		ui.labPhoto->clear();	//清空照片
		return;
	}

	//更新数据映射的行号，并显示照片
	dataMapper->setCurrentIndex(current.row());	

	QSqlRecord rec = tabModel->record(current.row());
	if (rec.isNull("Photo"))
	{
		//照片为空
		ui.labPhoto->clear();
	}
	else
	{
		//照片不为空，显示照片
		QByteArray arr = rec.value("Photo").toByteArray();

		QPixmap pic;
		pic.loadFromData(arr);

		ui.labPhoto->setPixmap(pic.scaledToWidth(ui.labPhoto->size().width()));	//根据宽度进行缩放
	}
}

void QSqlTableModelDemo::on_rbAsc_clicked(bool bCheck)
{
	on_cbSort_currentIndexChanged(0);
}

void QSqlTableModelDemo::on_rbDesc_clicked(bool bCheck)
{
	on_cbSort_currentIndexChanged(0);
}

void QSqlTableModelDemo::on_cbSort_currentIndexChanged(int index)
{
	if (ui.rbAsc->isChecked())
	{
		tabModel->setSort(ui.cbSort->currentIndex(), Qt::AscendingOrder);
	}
	else
	{
		tabModel->setSort(ui.cbSort->currentIndex(), Qt::DescendingOrder);
	}

	tabModel->select();
}

void QSqlTableModelDemo::on_rbBoy_clicked(bool bCheck)
{
	//设置SQL中的Where条件
	if (bCheck)	tabModel->setFilter(" Gender = '男' ");
}

void QSqlTableModelDemo::on_rbGril_clicked(bool bCheck)
{
	//设置SQL中的Where条件
	if (bCheck)	tabModel->setFilter(" Gender = '女' ");
}

void QSqlTableModelDemo::on_rbBoyAndGril_clicked(bool bCheck)
{
	if (bCheck)	tabModel->setFilter("");
}

