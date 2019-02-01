#pragma once

#include <QtWidgets/QWidget>
#include "ui_QFileSystemModelDemo.h"

#include <qfilesystemmodel.h>

class QFileSystemModelDemo : public QWidget
{
	Q_OBJECT

public:
	QFileSystemModelDemo(QWidget *parent = Q_NULLPTR);

private:
	QString getFinalFolderName(const QString & fullPathName);


	private slots:
	void showDirInfo(const QModelIndex &index);




private:
	Ui::QFileSystemModelDemoClass ui;

	QFileSystemModel *model;


};
