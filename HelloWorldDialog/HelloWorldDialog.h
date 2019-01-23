#pragma once

#include <QtWidgets/QDialog>
#include "ui_HelloWorldDialog.h"

//QT Designer���ӻ�UI��ƣ�ui_HelloWorldDialog.h�Զ����ɿؼ������֡��ź�/�۵Ĵ���
class HelloWorldDialog : public QDialog
{
	Q_OBJECT	//ʹ���źźͲ۵Ŀؼ���Ҫ��������궨��

public:
	HelloWorldDialog(QWidget *parent = Q_NULLPTR);

private slots:	//���º���Ϊ�ۺ���
	//ͨ��connectSlotsByName�Զ��󶨣��ۺ��������޶�Ϊon_<sender>_<signal>()
	void on_cb1_clicked(bool clicked);
	void on_cb2_clicked(bool clicked);
	void on_cb3_clicked(bool clicked);

	//�Զ���ۺ�������Ҫconnect������
	void setTextColor();

private:
	Ui::HelloWorldDialogClass ui;	//�������������пؼ�
};
