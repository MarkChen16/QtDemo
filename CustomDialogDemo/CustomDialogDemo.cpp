#include "CustomDialogDemo.h"

#include "CustomModalDialog.h"

#pragma execution_character_set("UTF-8")

CustomDialogDemo::CustomDialogDemo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

	umd = nullptr;
}

void CustomDialogDemo::on_btnEditItem_clicked()
{
	//传递数据，显示模式自定义对话框
	CustomModalDialog *modDialog = new CustomModalDialog("张三", true, "汉族", 90);
	int iRev = modDialog->exec();

	//判断结果
	if (iRev == CustomModalDialog::Accepted)
	{
		//获取数据
		ui.lstData->addItem(QString::asprintf("%s  %s  %s  %d", 
			modDialog->getName().toStdString().c_str(), 
			modDialog->isBoy()?"男":"女", 
			modDialog->getNation().toStdString().c_str(), 
			modDialog->getScore()));
	}

	//删除对话框
	delete modDialog;
}

void CustomDialogDemo::SetListColor(QColor color)
{
	QPalette pal = ui.lstData->palette();
	pal.setColor(QPalette::Text, color);

	ui.lstData->setPalette(pal);
}

void CustomDialogDemo::SetColorEnable(bool bEn)
{
	ui.btnSetColor->setEnabled(bEn);
}

void CustomDialogDemo::on_btnSetColor_clicked()
{
	//非模式对话框
	ui.btnSetColor->setEnabled(false);

	//创建非模式对话框
	umd = new CustomUnmodalDialog(this);
	umd->setAttribute(Qt::WA_DeleteOnClose);	//关闭后自动删除窗体，释放内存

	umd->setWindowFlag(Qt::WindowStaysOnTopHint, true);	//在顶层显示该窗口

	//绑定信号槽
	connect(umd, SIGNAL(RGBAChanged(int, int, int, int)), this, SLOT(onRGBAChanged(int, int, int, int)));
	
	QPalette pal = ui.lstData->palette();
	QColor nowColor = pal.color(QPalette::Text);

	umd->SetRGBA(nowColor.red(), nowColor.green(), nowColor.blue(), nowColor.alpha());

	umd->show();
}

void CustomDialogDemo::onRGBAChanged(int iR, int iG, int iB, int iA)
{
	QString strInfo = QString::asprintf("RGBA：%d, %d, %d, %d", iR, iG, iB, iA);

	ui.label->setText(strInfo);
}

