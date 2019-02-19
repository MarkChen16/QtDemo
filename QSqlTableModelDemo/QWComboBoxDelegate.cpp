#include "QWComboBoxDelegate.h"

#include <qcombobox.h>

QWComboBoxDelegate::QWComboBoxDelegate(QObject *parent) :QStyledItemDelegate(parent)
{

}

QWComboBoxDelegate::~QWComboBoxDelegate()
{
}

void QWComboBoxDelegate::SetList(QStringList lst)
{
	lstItem.clear();
	lstItem.append(lst);
}

QWidget * QWComboBoxDelegate::createEditor(QWidget * parent, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	QComboBox *editor = new QComboBox(parent);
	editor->setFrame(false);	//ÉèÖÃÃ»ÓÐ±ß¿ò

	editor->addItems(lstItem);

	return editor;	//·µ»Ø±à¼­Æ÷
}

void QWComboBoxDelegate::setEditorData(QWidget * editor, const QModelIndex & index) const
{
	QString strVal = index.data(Qt::EditRole).toString();
	
	QComboBox *sb = (QComboBox *)editor;
	sb->setCurrentText(strVal);
}

void QWComboBoxDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
{
	QComboBox *sb = (QComboBox *)editor;
	QString strVal = sb->currentText();

	model->setData(index, strVal, Qt::EditRole);
}

void QWComboBoxDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
{
	editor->setGeometry(option.rect);
}
