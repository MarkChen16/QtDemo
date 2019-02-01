#pragma once

#include <qstyleditemdelegate.h>


class QWIntSpinDelegate :
	public QStyledItemDelegate
{
	Q_OBJECT

public:
	QWIntSpinDelegate(QObject *parent = 0);
	virtual ~QWIntSpinDelegate();

	//自定义代理必须实现以下4个函数：

	//创建编辑器
	QWidget *createEditor(QWidget *parent,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	//从模型获取数据
	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;

	//回写数据到模型
	void setModelData(QWidget *editor,
		QAbstractItemModel *model,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	//设置编辑器的位置和大小
	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

};

