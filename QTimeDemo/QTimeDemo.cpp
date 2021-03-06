#include "QTimeDemo.h"

QTimeDemo::QTimeDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	ui.btnStop->setEnabled(false);

	fTimer = new QTimer;
	fTimer->stop();
	fTimer->setInterval(1);

	connect(fTimer, SIGNAL(timeout()), this, SLOT(on_timer_timeout()));
	connect(ui.btnStart, SIGNAL(clicked()), this, SLOT(on_startTimer()));
	connect(ui.btnStop, SIGNAL(clicked()), this, SLOT(on_stopTimer()));

	on_startTimer();
}

void QTimeDemo::on_timer_timeout()
{
	QTime t = QTime::currentTime();
	ui.lcdHour->display(t.hour());
	ui.lcdMin->display(t.minute());
	ui.lcdSec->display(t.second());
	ui.lcdMs->display(t.msec());

	int iVal = ui.pbTimer->value();
	if (100 == iVal) iVal = 0;

	ui.pbTimer->setValue(++iVal);
}

void QTimeDemo::on_startTimer()
{
	fTimer->start();	//定时器

	fTimeCounter.start();	//计时器

	ui.btnStart->setEnabled(false);
	ui.btnStop->setEnabled(true);
}

void QTimeDemo::on_stopTimer()
{
	fTimer->stop();	//定时器

	int tmMsec = fTimeCounter.elapsed();	//过去的时间(毫秒数)

	ui.btnStart->setEnabled(true);
	ui.btnStop->setEnabled(false);
}
