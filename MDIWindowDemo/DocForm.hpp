#pragma once
#include <QWidget>
#include "ui_docform.h"

class DocForm : public QWidget {
	Q_OBJECT

public:
	DocForm(QWidget * parent = Q_NULLPTR);
	~DocForm();

	void init(QString strContent);
	void cut();
	void copy();
	void paste();
	void clear();

	private slots:
	void on_plainTextEdit_selectionChanged();

signals:
	void textSelected(bool isSel);

private:
	Ui::DocFormClass ui;
};
