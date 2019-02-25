#pragma once
#include <QWidget>
#include "ui_dlgshowcopy.h"

#include "QThreadDemo.h"

#include "QThreadShow.hpp"


class DlgShowCopy : public QWidget {
	Q_OBJECT

public:
	DlgShowCopy(int showType, QString strTitle, QWidget * parent = Q_NULLPTR);
	~DlgShowCopy();

	private slots:
	void on_showValue(QVariant var);

private:
	Ui::DlgShowCopy ui;

	QThreadShow *thrShow;
};
