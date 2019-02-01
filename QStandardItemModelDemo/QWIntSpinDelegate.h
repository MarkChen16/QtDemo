#pragma once

#include <qstyleditemdelegate.h>


class QWIntSpinDelegate :
	public QStyledItemDelegate
{
	Q_OBJECT

public:
	QWIntSpinDelegate(QObject *parent = 0);
	virtual ~QWIntSpinDelegate();

	//�Զ���������ʵ������4��������

	//�����༭��
	QWidget *createEditor(QWidget *parent,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	//��ģ�ͻ�ȡ����
	void setEditorData(QWidget *editor, const QModelIndex &index) const Q_DECL_OVERRIDE;

	//��д���ݵ�ģ��
	void setModelData(QWidget *editor,
		QAbstractItemModel *model,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

	//���ñ༭����λ�úʹ�С
	void updateEditorGeometry(QWidget *editor,
		const QStyleOptionViewItem &option,
		const QModelIndex &index) const Q_DECL_OVERRIDE;

};

