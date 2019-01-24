#pragma once

#include <QtWidgets/QDialog>
#include "ui_CommonComponent.h"

#include <qtimer.h>

class CommonComponent : public QDialog
{
	Q_OBJECT

public:
	CommonComponent(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_timer_timeout();
	void on_startTimer();
	void on_stopTimer();

private:
	Ui::CommonComponentClass ui;

	QTimer *fTimer;

	QTime fTimeCounter;
};
