#pragma once
#include <qdialog.h>
#include "ui_CustomModealDialog.h"

//ģʽ�Զ���Ի���ֻ�з��ص���������ܲ��������棻
//һ���������1����������	2����ʼ������	3����������
//����ʹ�����̣�1������ʵ��	2��ģʽ��ʾ		3����ȡ����		4��ɾ��ʵ��

class CustomModalDialog :
	public QDialog
{
	Q_OBJECT
public:
	CustomModalDialog(QString pName, bool pSex, QString pNation, int pScore);

	QString getName();
	bool isBoy();
	QString getNation();
	int getScore();

private:
	Ui::CustomModealDialogClass ui;
};

