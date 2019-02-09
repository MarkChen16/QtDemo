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
	//�ر�ʱ����
	CustomDialogDemo * parent = (CustomDialogDemo *)this->parent();
	parent->umd = nullptr;

	parent->SetColorEnable(true);
}

void CustomUnmodalDialog::showEvent(QShowEvent * event)
{
	//��һ����ʾʱ����
}

void CustomUnmodalDialog::paintEvent(QPaintEvent * event)
{
	//�����ػ�ʱ����
}

void CustomUnmodalDialog::mouseMoveEvent(QMouseEvent * event)
{
	//����ƶ�ʱ������Ĭ�ϰ��������ƶ����ܴ�����������������Ϳ��Դ�������Ҫ����setMouseTracking����
}

void CustomUnmodalDialog::mouseDoubleClickEvent(QMouseEvent * event)
{
	//˫��ʱ����
}

void CustomUnmodalDialog::mousePressEvent(QMouseEvent * event)
{
	//��갴��ʱ����
}

void CustomUnmodalDialog::mouseReleaseEvent(QMouseEvent * event)
{
	//����ͷ�ʱ����
}

void CustomUnmodalDialog::keyPressEvent(QKeyEvent * event)
{
	//���̰���ʱ����
}

void CustomUnmodalDialog::keyReleaseEvent(QKeyEvent * event)
{
	//�����ͷ�ʱ����
}

void CustomUnmodalDialog::GoRGBAChanged()
{
	int iR = ui.hsRed->value();
	int iG = ui.hsGreen->value();
	int iB = ui.hsBlue->value();
	int iA = ui.hsAlpha->value();

	//ͨ��������ָ��ʵ�ֻ�����
	CustomDialogDemo * parent = (CustomDialogDemo *)this->parent();

	QColor color(iR, iG, iB, iA);
	parent->SetListColor(color);

	//�����ź�
	emit RGBAChanged(iR, iG, iB, iA);
}
