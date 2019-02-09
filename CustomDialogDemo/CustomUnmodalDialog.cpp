#include "CustomUnmodalDialog.h"
#include "CustomDialogDemo.h"

CustomUnmodalDialog::CustomUnmodalDialog(QWidget *parent):
	QDialog(parent)
{
	ui.setupUi(this);

	this->setMouseTracking(true);
}

CustomUnmodalDialog::~CustomUnmodalDialog()
{
}

void CustomUnmodalDialog::SetRGBA(int iR, int iG, int iB, int iA)
{
	ui.hsRed->setValue(iR);
	ui.hsGreen->setValue(iG);
	ui.hsBlue->setValue(iB);
	ui.hsAlpha->setValue(iA);
}

void CustomUnmodalDialog::on_hsRed_valueChanged(int value)
{
	GoRGBAChanged();
}

void CustomUnmodalDialog::on_hsBlue_valueChanged(int value)
{
	GoRGBAChanged();
}

void CustomUnmodalDialog::on_hsGreen_valueChanged(int value)
{
	GoRGBAChanged();
}

void CustomUnmodalDialog::on_hsAlpha_valueChanged(int value)
{
	GoRGBAChanged();
}

void CustomUnmodalDialog::closeEvent(QCloseEvent * event)
{
	//关闭时触发
	CustomDialogDemo * parent = (CustomDialogDemo *)this->parent();
	parent->umd = nullptr;

	parent->SetColorEnable(true);
}

void CustomUnmodalDialog::showEvent(QShowEvent * event)
{
	//第一次显示时触发
}

void CustomUnmodalDialog::paintEvent(QPaintEvent * event)
{
	//窗口重绘时触发
}

void CustomUnmodalDialog::mouseMoveEvent(QMouseEvent * event)
{
	//鼠标移动时触发，默认按下鼠标后移动才能触发，如果不按下鼠标就可以触发，需要调用setMouseTracking函数
}

void CustomUnmodalDialog::mouseDoubleClickEvent(QMouseEvent * event)
{
	//双击时触发
}

void CustomUnmodalDialog::mousePressEvent(QMouseEvent * event)
{
	//鼠标按下时触发
}

void CustomUnmodalDialog::mouseReleaseEvent(QMouseEvent * event)
{
	//鼠标释放时触发
}

void CustomUnmodalDialog::keyPressEvent(QKeyEvent * event)
{
	//键盘按下时触发
}

void CustomUnmodalDialog::keyReleaseEvent(QKeyEvent * event)
{
	//键盘释放时触发
}

void CustomUnmodalDialog::GoRGBAChanged()
{
	int iR = ui.hsRed->value();
	int iG = ui.hsGreen->value();
	int iB = ui.hsBlue->value();
	int iA = ui.hsAlpha->value();

	//通过父窗口指针实现互操作
	CustomDialogDemo * parent = (CustomDialogDemo *)this->parent();

	QColor color(iR, iG, iB, iA);
	parent->SetListColor(color);

	//发送信号
	emit RGBAChanged(iR, iG, iB, iA);
}
