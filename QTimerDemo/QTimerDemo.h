#pragma once

#include <QtWidgets/QDialog>
#include "ui_QTimerDemo.h"

#include <qtimer.h>

class QTimerDemo : public QDialog
{
	Q_OBJECT

public:
	QTimerDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_timer_timeout();
	void on_startTimer();
	void on_stopTimer();

private:
	Ui::QTimerDemoClass ui;

	QTimer *fTimer;
	QTime fTimeCounter;
};
