#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DownloadUrlFileDemo.h"

#include <QtNetwork>

class DownloadUrlFileDemo : public QMainWindow
{
	Q_OBJECT

public:
	DownloadUrlFileDemo(QWidget *parent = Q_NULLPTR);

	private slots:
	void on_btnDownload_clicked();

	void on_readyRead();
	void on_finished();
	void on_downloadProgress(qint64 bytesReceived, qint64 bytesTotal);

private:
	Ui::DownloadUrlFileDemoClass ui;

	QNetworkAccessManager *mManager;

	QNetworkReply *mReply;

	QString mFileName;
	QFile *mFile;
};
