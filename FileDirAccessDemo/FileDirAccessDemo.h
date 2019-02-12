#pragma once

#include <QtWidgets/QDialog>
#include "ui_FileDirAccessDemo.h"

#include <qfilesystemwatcher.h>

class FileDirAccessDemo : public QDialog
{
	Q_OBJECT

public:
	FileDirAccessDemo(QWidget *parent = Q_NULLPTR);

	void AppendInfo(QString strInfo);

	void LookUpDir(QString strDir);

	private slots:
	void on_btnGetDirInfo_clicked();
	void on_btnSetOrg_clicked();
	void on_btnExit_clicked();

	void on_btnFileOp_clicked();
	void on_btnSetPermission_clicked();

	void on_btnGetFileInfo_clicked();

	void on_btnGetDirInformation_clicked();
	void on_btnDirOp_clicked();
	void on_btnLoopUpDir_clicked();

	void on_btnTempDir_clicked();
	void on_btnTempFile_clicked();

	void on_btnStartListen_clicked();
	void on_btnStopListen_clicked();

	void on_btnOpenFile_clicked();
	void on_btnOpenDir_clicked();
	void on_btnClearText_clicked();

	void onDirectoryChanged(const QString &path);
	void onFileChanged(const QString &path);

private:
	Ui::FileDirAccessDemoClass ui;

	QFileSystemWatcher watcher;
};
