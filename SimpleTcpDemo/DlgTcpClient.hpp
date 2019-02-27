#pragma once
#include <QWidget>
#include "ui_dlgtcpclient.h"

class DlgTcpClient : public QWidget {
	Q_OBJECT

public:
	DlgTcpClient(QWidget * parent = Q_NULLPTR);
	~DlgTcpClient();

private:
	Ui::DlgTcpClient ui;
};
