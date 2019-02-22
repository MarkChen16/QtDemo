#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QThreadDemo.h"

#include "QDiceCup.h"
#include <qtimer.h>

class QThreadDemo : public QMainWindow
{
	Q_OBJECT

public:
	QThreadDemo(QWidget *parent = Q_NULLPTR);

protected:
	void closeEvent(QCloseEvent *event) override;

	private slots:
	void on_actStart_triggered();
	void on_actPauseResume_triggered(bool bChecked);
	void on_actAskForStop_triggered();
	void on_actStop_triggered();
	void on_actShowCopy_triggered();
	void on_actShowBuff_triggered();
	void on_actQuit_triggered();

	void on_started();
	void on_finished();

	void on_createdResult(QVariant var);

	void on_timeout();

private:
	Ui::QThreadDemoClass ui;

	QDiceCup cup;
	QTimer *timer;
};
