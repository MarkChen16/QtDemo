#include "QStringListModelDemo.h"

#pragma execution_character_set("UTF-8")

QStringListModelDemo::QStringListModelDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	initModel();

	//设置触发编辑的动作
	ui.lvCity->setEditTriggers(QAbstractItemView::DoubleClicked);	
}

void QStringListModelDemo::on_btnInit_clicked()
{
	initModel();
}

void QStringListModelDemo::initModel()
{
	//初始化数据模型
	QStringList lstData;
	lstData << "北京" << "山东" << "广东" << "广西" << "河南" << "河北" << "天津" << "南京" << "西湖" << "深圳" << "广州" << "成都";

	model = new QStringListModel;
	model->setStringList(lstData);

	//绑定数据模型
	ui.lvCity->setModel(model);
}

void QStringListModelDemo::on_btnAdd_clicked()
{
	model->insertRow(model->rowCount());	//在后面插入一行

	QModelIndex index = model->index(model->rowCount() - 1, 0);	//获取最后子项(count-1, 0)的索引

	model->setData(index, "新增城市", Qt::DisplayRole);		//设置数据
	
	ui.lvCity->setCurrentIndex(index);		//设置当前数据索引
}

void QStringListModelDemo::on_btnInsert_clicked()
{
	model->insertRow(ui.lvCity->currentIndex().row());	//在当前行前插入一行

	QModelIndex index = model->index(ui.lvCity->currentIndex().row()-1, 0);	//获取子项(count-1, 0)的索引

	model->setData(index, "中途城市", Qt::DisplayRole);		//设置数据

	ui.lvCity->setCurrentIndex(index);		//设置当前数据索引

}

void QStringListModelDemo::on_btnDel_clicked()
{
	//判断是否选择
	int currRow = ui.lvCity->currentIndex().row();
	if (currRow == -1) return;

	//删除
	model->removeRow(currRow);
}

void QStringListModelDemo::on_btnClear_clicked()
{
	//删除所有的行
	model->removeRows(0, model->rowCount());
}

void QStringListModelDemo::on_btnClearText_clicked()
{
	ui.ptData->setPlainText("");
}

void QStringListModelDemo::on_btnShowData_clicked()
{
	QStringList lstData = model->stringList();

	ui.ptData->setPlainText("");
	for each (QString var in lstData)
	{
		ui.ptData->appendPlainText(var);
	}
}

void QStringListModelDemo::on_lvCity_clicked(QModelIndex index)
{
	QString strInfo = QString::asprintf("当前项：row = %d, col = %d", index.row(), index.column());

	ui.labState->setText(strInfo);
}
