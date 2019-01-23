#include "ManualUIDialog.h"

ManualUIDialog::ManualUIDialog(QWidget *parent)
	: QDialog(parent)
{
	initUI();

	initSlots();

	setWindowTitle("Form created mannually");
}

ManualUIDialog::~ManualUIDialog()
{
	delete hly1;
	delete hly2;
	delete hly3;
	delete vly;

	delete chkBoxUnder;
	delete chkBoxItalic;
	delete chkBoxBold;

	delete rBtnBlack;
	delete rBtnRed;
	delete rBtnBlue;

	delete txtEdit;

	delete btnOK;
	delete btnCanccel;
	delete btnClose;
}

void ManualUIDialog::initUI()
{
	//创建控件和布局===========================
	//创建3个CheckBox，并添加在一个水平布局
	chkBoxUnder = new QCheckBox(tr("Underline"));
	chkBoxItalic = new QCheckBox(tr("Italic"));
	chkBoxBold = new QCheckBox(tr("Bold"));
	hly1 = new QHBoxLayout;
	hly1->addWidget(chkBoxUnder);
	hly1->addWidget(chkBoxItalic);
	hly1->addWidget(chkBoxBold);

	//创建3个RadioButton，并添加在一个水平布局
	rBtnBlack = new QRadioButton(tr("Black"));
	rBtnRed = new QRadioButton(tr("Red"));
	rBtnBlue = new QRadioButton(tr("Blue"));
	hly2 = new QHBoxLayout;
	hly2->addWidget(rBtnBlack);
	hly2->addWidget(rBtnRed);
	hly2->addWidget(rBtnBlue);
	
	//创建3个PushButton，并添加在一个水平布局
	btnOK = new QPushButton("确定");
	btnCanccel = new QPushButton("取消");
	btnClose = new QPushButton("退出");
	hly3 = new QHBoxLayout;
	hly3->addWidget(btnOK);
	hly3->addWidget(btnCanccel);
	hly3->addWidget(btnClose);

	//创建1个PlainTextEdit
	txtEdit = new QPlainTextEdit();
	txtEdit->setPlainText("Hello world\n\nIt is my demo.");
	QFont font = txtEdit->font();
	font.setPointSize(20);
	txtEdit->setFont(font);

	//创建垂直布局，添加所有水平布局和控件
	vly = new QVBoxLayout;
	vly->addLayout(hly1);
	vly->addLayout(hly2);
	vly->addWidget(txtEdit);
	vly->addLayout(hly3);

	//设置为主布局
	setLayout(vly);
}

void ManualUIDialog::initSlots()
{
	//关联信号和槽函数===========================
	connect(chkBoxUnder, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxUnder(bool)));
	connect(chkBoxItalic, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxItalic(bool)));
	connect(chkBoxBold, SIGNAL(clicked(bool)), this, SLOT(on_chkBoxBold(bool)));

	connect(rBtnBlack, SIGNAL(clicked()), this, SLOT(setTextColors()));
	connect(rBtnRed, SIGNAL(clicked()), this, SLOT(setTextColors()));
	connect(rBtnBlue, SIGNAL(clicked()), this, SLOT(setTextColors()));

	connect(btnOK, SIGNAL(clicked()), this, SLOT(accept()));
	connect(btnCanccel, SIGNAL(clicked()), this, SLOT(reject()));
	connect(btnClose, SIGNAL(clicked()), this, SLOT(close()));
}

//槽函数定义===========================
void ManualUIDialog::on_chkBoxUnder(bool checked)
{
	QFont font = txtEdit->font();
	font.setUnderline(checked);
	txtEdit->setFont(font);
}
void ManualUIDialog::on_chkBoxItalic(bool checked)
{
	QFont font = txtEdit->font();
	font.setItalic(checked);
	txtEdit->setFont(font);
}
void ManualUIDialog::on_chkBoxBold(bool checked)
{
	QFont font = txtEdit->font();
	font.setBold(checked);
	txtEdit->setFont(font);
}

void ManualUIDialog::setTextColors()
{
	QPalette pale = txtEdit->palette();
	
	if (rBtnBlack->isChecked()) pale.setColor(QPalette::Text, Qt::black);
	if (rBtnRed->isChecked()) pale.setColor(QPalette::Text, Qt::red);
	if (rBtnBlue->isChecked()) pale.setColor(QPalette::Text, Qt::blue);

	txtEdit->setPalette(pale);
}

