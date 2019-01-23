#pragma once

#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QHBoxLayout>

class ManualUIDialog : public QDialog
{
	Q_OBJECT

public:
	ManualUIDialog(QWidget *parent = Q_NULLPTR);
	~ManualUIDialog();

	void initUI();
	void initSlots();

	//槽函数声明
	private slots:
	void on_chkBoxUnder(bool checked);
	void on_chkBoxItalic(bool checked);
	void on_chkBoxBold(bool checked);

	void setTextColors();

private:
	QHBoxLayout *hly1;
	QHBoxLayout *hly2;
	QHBoxLayout *hly3;
	QVBoxLayout *vly;

	QCheckBox		*chkBoxUnder;
	QCheckBox		*chkBoxItalic;
	QCheckBox		*chkBoxBold;

	QRadioButton	*rBtnBlack;
	QRadioButton	*rBtnRed;
	QRadioButton	*rBtnBlue;

	QPlainTextEdit	*txtEdit;

	QPushButton		*btnOK;
	QPushButton		*btnCanccel;
	QPushButton		*btnClose;
};


