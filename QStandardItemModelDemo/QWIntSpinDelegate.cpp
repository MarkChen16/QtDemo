#include "QWIntSpinDelegate.h"

#include <qspinbox.h>

QWIntSpinDelegate::QWIntSpinDelegate(QObject *parent) :QStyledItemDelegate(parent)
{

}

QWIntSpinDelegate::~QWIntSpinDelegate()
{
}

QWidget *QWIntSpinDelegate::createEditor(QWidget *parent,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	QSpinBox *editor = new QSpinBox(parent);
	editor->setFrame(false);	//设置没有边框

	editor->setMinimum(0);		//设置最小值
	editor->setMaximum(100);	//设置最大值
	
	return editor;	//返回编辑器
}

void QWIntSpinDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
	//从数据模型获取数据，显示在编辑器上
	int val = index.model()->data(index, Qt::EditRole).toInt();

	QSpinBox *theEditor = static_cast<QSpinBox*>(editor);
	theEditor->setValue(val);
}

void QWIntSpinDelegate::setModelData(QWidget *editor,
	QAbstractItemModel *model,
	const QModelIndex &index) const
{
	//将编辑器的数据保存到数据模型中
	QSpinBox *theEditor = static_cast<QSpinBox*>(editor);
	int val = theEditor->value();
	
	model->setData(index, val, Qt::EditRole);
}

void QWIntSpinDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	//设置编辑器的位置和大小
	editor->setGeometry(option.rect);
}
