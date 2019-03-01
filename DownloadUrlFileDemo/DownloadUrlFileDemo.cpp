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
		QMessageBox::warning(this, "����", QString("URL[%1]����Ч�ģ�").arg(strUrl));
		return;
	}

	mFileName = ".\\" + myUrl.fileName();
	if (QFile::exists(mFileName)) QFile::remove(mFileName);

	mFile = new QFile(mFileName, this);
	if (mFile->open(QIODevice::WriteOnly) == false)
	{
		QMessageBox::warning(this, "����", "��ʱ�ļ��򿪴���");
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
	//��ȡ����
	mFile->write(mReply->readAll());
}

void DownloadUrlFileDemo::on_finished()
{
	//���ؽ���
	QFileInfo info(mFile->fileName());

	mFile->close();
	mFile = Q_NULLPTR;
	
	//ʹ��Ĭ�ϵĳ�����ļ�
	QDesktopServices::openUrl(QUrl::fromLocalFile(info.absoluteFilePath()));

	ui.btnDownload->setEnabled(true);
}

void DownloadUrlFileDemo::on_downloadProgress(qint64 bytesReceived, qint64 bytesTotal)
{
	//���ؽ���
	ui.pbDownload->setMaximum(bytesTotal);
	ui.pbDownload->setValue(bytesReceived);
}
