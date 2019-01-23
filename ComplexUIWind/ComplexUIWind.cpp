#include "ComplexUIWind.h"

#pragma execution_character_set("UTF-8")

ComplexUIWind::ComplexUIWind(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	InitUI();
	InitSlots();
}

ComplexUIWind::~ComplexUIWind()
{
	if (Q_NULLPTR != labCurrFile)
	{
		delete labCurrFile;
		labCurrFile = Q_NULLPTR;
	}

	if (Q_NULLPTR != pbSaveProgress)
	{
		delete pbSaveProgress;
		pbSaveProgress = Q_NULLPTR;
	}

	if (Q_NULLPTR != sbFontSize)
	{
		delete sbFontSize;
		sbFontSize = Q_NULLPTR;
	}

	if (Q_NULLPTR != fcbFont)
	{
		delete fcbFont;
		fcbFont = Q_NULLPTR;
	}
}

void ComplexUIWind::InitUI()
{
	//在状态栏上添加组件
	labCurrFile = new QLabel(tr("当前文件："));
	labCurrFile->setMidLineWidth(150);
	ui.statusBar->addWidget(labCurrFile);

	pbSaveProgress = new QProgressBar;
	pbSaveProgress->setMaximumWidth(200);
	pbSaveProgress->setMinimum(0);
	pbSaveProgress->setMaximum(100);
	pbSaveProgress->setValue(67);
	ui.statusBar->addWidget(pbSaveProgress);

	//在菜单栏上添加组件
	ui.tbCreate->addWidget(new QLabel("字体大小 "));
	sbFontSize = new QSpinBox;
	sbFontSize->setMinimum(5);
	sbFontSize->setMaximum(50);
	sbFontSize->setValue(10);
	sbFontSize->setMinimumWidth(50);
	ui.tbCreate->addWidget(sbFontSize);
	
	ui.tbCreate->addSeparator();

	ui.tbCreate->addWidget(new QLabel("字体 "));
	fcbFont = new QFontComboBox;
	fcbFont->setMinimumWidth(150);
	ui.tbCreate->addWidget(fcbFont);

	setCentralWidget(ui.txtEdit);
}

void ComplexUIWind::InitSlots()
{
	bool bOK = false;

	bOK = connect(ui.actionBold, SIGNAL(triggered()), this, SLOT(on_changeFont()));
	bOK = connect(ui.actionItalic, SIGNAL(triggered()), this, SLOT(on_changeFont()));
	bOK = connect(ui.actionUnder, SIGNAL(triggered()), this, SLOT(on_changeFont()));

	bOK = connect(sbFontSize, SIGNAL(valueChanged(int)), this, SLOT(on_changeFontSize(int)));
	bOK = connect(fcbFont, SIGNAL(currentIndexChanged(const QString &)), this, SLOT(on_changeFontName(const QString &)));
}

void ComplexUIWind::on_txtEdit_copyAvailable(bool b)
{
	//更新action的enabled
	ui.actionCut->setEnabled(b);
	ui.actionCopy->setEnabled(b);
	ui.actionPaste->setEnabled(ui.txtEdit->canPaste());
}

void ComplexUIWind::on_txtEdit_selectionChanged()
{
	//更新action的checked
	QTextCharFormat tcf = ui.txtEdit->currentCharFormat();

	ui.actionBold->setChecked(tcf.font().bold());
	ui.actionItalic->setChecked(tcf.font().italic());
	ui.actionUnder->setChecked(tcf.font().underline());
}

void ComplexUIWind::on_changeFont()
{
	QFont font = ui.txtEdit->font();

	font.setBold(ui.actionBold->isChecked());
	font.setItalic(ui.actionItalic->isChecked());
	font.setUnderline(ui.actionUnder->isChecked());

	ui.txtEdit->setFont(font);
}

void ComplexUIWind::on_changeFontSize(int aFontSize)
{
	QFont font = ui.txtEdit->font();
	font.setPointSize(aFontSize);
	ui.txtEdit->setFont(font);
}

void ComplexUIWind::on_changeFontName(const QString &arg1)
{
	QFont font = ui.txtEdit->font();
	font.setFamily(arg1);
	ui.txtEdit->setFont(font);
}

