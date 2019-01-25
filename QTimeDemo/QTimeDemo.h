#pragma once

#include <QtWidgets/QDialog>
#include "ui_QTimeDemo.h"

#include <qtimer.h>
#include <qdatetime.h>

class QTimeDemo : public QDialog
{
	Q_OBJECT

public:
	QTimeDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_timer_timeout();
	void on_startTimer();
	void on_stopTimer();

private:
	Ui::QTimeDemoClass ui;

	QTimer *fTimer;
	QTime fTimeCounter;
};
