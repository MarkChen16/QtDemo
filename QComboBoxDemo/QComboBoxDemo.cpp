#include "QComboBoxDemo.h"

#include <qicon.h>

#pragma execution_character_set("UTF-8")

QComboBoxDemo::QComboBoxDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	//��ʼ������Ӵ���ͼ�������
	ui.cbIcon->clear();
	
	//�����Դ�ļ������ICON
	QIcon icon;
	icon.addFile(":/QComboBoxDemo/Resources/DISTLSTL.ICO");
	ui.cbIcon->addItem(icon, tr("����"));
	icon.addFile(":/QComboBoxDemo/Resources/EXITEML.ICO");
	ui.cbIcon->addItem(icon, tr("�Ϻ�"));
	icon.addFile(":/QComboBoxDemo/Resources/POSTL.ICO");
	ui.cbIcon->addItem(icon, tr("����"));
	icon.addFile(":/QComboBoxDemo/Resources/RESENDL.ICO");
	ui.cbIcon->addItem(icon, tr("����"));

	ui.cbIcon->addItem("տ��");
	ui.cbIcon->addItem("�ɶ�");

	icon.addFile(":/QComboBoxDemo/Resources/SIGNL.ICO");
	ui.cbIcon->insertItem(0, icon, "�麣");

	ui.cbIcon->setCurrentIndex(0);
}
