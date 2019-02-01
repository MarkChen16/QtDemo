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
	editor->setFrame(false);	//����û�б߿�

	editor->setMinimum(0);		//������Сֵ
	editor->setMaximum(100);	//�������ֵ
	
	return editor;	//���ر༭��
}

void QWIntSpinDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
	//������ģ�ͻ�ȡ���ݣ���ʾ�ڱ༭����
	int val = index.model()->data(index, Qt::EditRole).toInt();

	QSpinBox *theEditor = static_cast<QSpinBox*>(editor);
	theEditor->setValue(val);
}

void QWIntSpinDelegate::setModelData(QWidget *editor,
	QAbstractItemModel *model,
	const QModelIndex &index) const
{
	//���༭�������ݱ��浽����ģ����
	QSpinBox *theEditor = static_cast<QSpinBox*>(editor);
	int val = theEditor->value();
	
	model->setData(index, val, Qt::EditRole);
}

void QWIntSpinDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option,
	const QModelIndex &index) const
{
	//���ñ༭����λ�úʹ�С
	editor->setGeometry(option.rect);
}
