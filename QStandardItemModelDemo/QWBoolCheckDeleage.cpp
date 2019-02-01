#include "QWBoolCheckDeleage.h"

#include <qcheckbox.h>

QWBoolCheckDeleage::QWBoolCheckDeleage(QObject *parent): QStyledItemDelegate(parent)
{
}

QWBoolCheckDeleage::~QWBoolCheckDeleage()
{
}

QWidget *QWBoolCheckDeleage::createEditor(QWidget *parent,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	QCheckBox *editor = new QCheckBox(parent);

	editor->setChecked(false);

	return editor;
}

void QWBoolCheckDeleage::setEditorData(QWidget *editor, const QModelIndex &index) const
{
	int val = index.model()->data(index, Qt::EditRole).toInt();

	QCheckBox *theEditor = static_cast<QCheckBox*>(editor);
	theEditor->setChecked(val == 1 ? true : false);
}

void QWBoolCheckDeleage::setModelData(QWidget *editor,
	QAbstractItemModel *model,
	const QModelIndex &index) const
{
	QCheckBox *theEditor = static_cast<QCheckBox *>(editor);
	bool val = theEditor->isChecked();

	model->setData(index, val == true ? "1" : "0", Qt::EditRole);
}

void QWBoolCheckDeleage::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	editor->setGeometry(option.rect);
}
