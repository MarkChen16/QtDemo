#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ComplexUIWind.h"

#include <QtWidgets\qlabel.h>
#include <QtWidgets\qprogressbar.h>
#include <QtWidgets\qspinbox.h>
#include <QtWidgets\qfontcombobox.h>

#pragma execution_character_set("UTF-8")

class ComplexUIWind : public QMainWindow
{
	Q_OBJECT

public:
	ComplexUIWind(QWidget *parent = Q_NULLPTR);
	~ComplexUIWind();

	void InitUI();
	void InitSlots();

	private slots:
	void on_txtEdit_copyAvailable(bool b);
	void on_txtEdit_selectionChanged();

	void on_changeFont();

	void on_changeFontSize(int aFontSize);

	void on_changeFontName(const QString &arg1);
	
private:
	//可视化设计
	Ui::ComplexUIWindClass ui;

	//代码化设计
	QLabel *labCurrFile = Q_NULLPTR;
	QProgressBar *pbSaveProgress = Q_NULLPTR;

	QSpinBox *sbFontSize = Q_NULLPTR;
	QFontComboBox *fcbFont = Q_NULLPTR;

};
