#include "DownloadUrlFileDemo.h"

#pragma execution_character_set("UTF-8")

#include <qmessagebox.h>
#include <qdesktopservices.h>

DownloadUrlFileDemo::DownloadUrlFileDemo(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void DownloadUrlFileDemo::on_btnDownload_clicked()
{
	QString strUrl = ui.txtUrl->text();
	QUrl myUrl = QUrl::fromUserInput(strUrl);
	if (myUrl.isValid() == false)
	{
		QMessageBox::warning(this, "警告", QString("URL[%1]是无效的！").arg(strUrl));
		return;
	}

	mFileName = ".\\" + myUrl.fileName();
	if (QFile::exists(mFileName)) QFile::remove(mFileName);

	mFile = new QFile(mFileName, this);
	if (mFile->open(QIODevice::WriteOnly) == false)
	{
		QMessageBox::warning(this, "警告", "临时文件打开错误！");
		return;
	}

	ui.btnDownload->setEnabled(false);
	
	mManager = new QNetworkAccessManager(this);
	mReply = mManager->get(QNetworkRequest(myUrl));

	connect(mReply, SIGNAL(finished()), this, SLOT(on_finished()));
	connect(mReply, SIGNAL(readyRead()), this, SLOT(on_readyRead()));
	connect(mReply, SIGNAL(downloadProgress(qint64, qint64)), this, SLOT(on_downloadProgress(qint64, qint64)));
}

void DownloadUrlFileDemo::on_readyRead()
{
	//读取数据
	mFile->write(mReply->readAll());
}

void DownloadUrlFileDemo::on_finished()
{
	//下载结束
	QFileInfo info(mFile->fileName());

	mFile->close();
	mFile = Q_NULLPTR;
	
	//使用默认的程序打开文件
	QDesktopServices::openUrl(QUrl::fromLocalFile(info.absoluteFilePath()));

	ui.btnDownload->setEnabled(true);
}

void DownloadUrlFileDemo::on_downloadProgress(qint64 bytesReceived, qint64 bytesTotal)
{
	//下载进度
	ui.pbDownload->setMaximum(bytesTotal);
	ui.pbDownload->setValue(bytesReceived);
}
