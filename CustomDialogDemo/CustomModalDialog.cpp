#include "CustomModalDialog.h"

#pragma execution_character_set("UTF-8")


CustomModalDialog::CustomModalDialog(QString pName, bool pSex, QString pNation, int pScore)
{
	ui.setupUi(this);		//创建界面

	//初始化数据
	ui.editName->setText(pName);

	if (pSex) ui.rbBoy->setChecked(true);
	else ui.rbGril->setChecked(true);

	ui.cbNation->setCurrentText(pNation);

	ui.sbScore->setValue(pScore);
}

QString CustomModalDialog::getName()
{
	//返回名称
	return ui.editName->text();
}

bool CustomModalDialog::isBoy()
{
	//返回性别
	return ui.rbBoy->isChecked();
}

QString CustomModalDialog::getNation()
{
	//返回民族
	return ui.cbNation->currentText();
}

int CustomModalDialog::getScore()
{
	//返回分数
	return ui.sbScore->value();
}
