#pragma once

#include <qstyleditemdelegate.h>


class QWComboBoxDelegate:public QStyledItemDelegate
{
	Q_OBJECT

public:
	QWComboBoxDelegate(QObject *parent = 0);
	virtual ~QWComboBoxDelegate();

	void SetList(QStringList lst);

	//�Զ���������ʵ������4��������

	//�����༭��
	QWidget *createEditor(QWidget *parent,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const;

	//��ģ�ͻ�ȡ����
	void setEditorData(QWidget *editor, const QModelIndex &index) const;

	//��д���ݵ�ģ��
	void setModelData(QWidget *editor,
		QAbstractItemModel *model,
		const QModelIndex &index) const;

	//���ñ༭����λ�úʹ�С
	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const;

private:
	QStringList lstItem;
};

