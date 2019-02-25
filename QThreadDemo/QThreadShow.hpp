#pragma once
#include <Qthread>

#include "QDiceCup.h"

class QThreadShow : public QThread {
	Q_OBJECT

public:
	QThreadShow(QDiceCup &cup, int showType, QObject * parent = Q_NULLPTR);
	~QThreadShow();

	void askForStop();

signals:
	void ShowValue(QVariant val);

protected:
	void run() override;

private:
	QDiceCup &mCup;
	int mShowType;

	bool mAskForStop = false;
	QMutex mMutex;
};
