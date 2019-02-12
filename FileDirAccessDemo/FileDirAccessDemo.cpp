#include "FileDirAccessDemo.h"


#include <qfiledialog.h>
#include <qfile.h>
#include <qdatetime.h>

#include <qtemporarydir.h>
#include <qtemporaryfile.h>

FileDirAccessDemo::FileDirAccessDemo(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

void FileDirAccessDemo::on_btnGetDirInfo_clicked()
{
	AppendInfo("applicationDirPath: " + QCoreApplication::applicationDirPath());
	AppendInfo("applicationFilePath: " + QCoreApplication::applicationFilePath());
	AppendInfo("applicationName: " + QCoreApplication::applicationName());
	
	AppendInfo("===============================================");
	AppendInfo("organizationDomain: " + QCoreApplication::organizationDomain());
	AppendInfo("organizationName: " + QCoreApplication::organizationName());
	
	AppendInfo("===============================================");
	QStringList lstLibraryPath = QCoreApplication::libraryPaths();
	for (int i = 0; i < lstLibraryPath.count(); i++)
	{
		AppendInfo("libraryPaths: " + lstLibraryPath.at(i));
	}
}

void FileDirAccessDemo::AppendInfo(QString strInfo)
{
	ui.ptInfo->appendPlainText(strInfo);
}

void FileDirAccessDemo::LookUpDir(QString strDir)
{
	QDir dir(strDir);

	//只遍历文件和目录，排序是目录靠后
	QStringList lstFileDir = dir.entryList(QDir::Files | QDir::Dirs | QDir::NoDot | QDir::NoDotDot, QDir::DirsLast);
	for (int i = 0; i < lstFileDir.count(); i++)
	{
		QFileInfo info(strDir + "\\" + lstFileDir.at(i));
		if (info.isFile())
		{
			AppendInfo(info.absoluteFilePath());
		}
		else if(info.isDir())
		{
			LookUpDir(strDir + "\\" + lstFileDir.at(i));	//递归调用，遍历子目录
		}
	}
}

void FileDirAccessDemo::on_btnSetOrg_clicked()
{
	QCoreApplication::setOrganizationDomain("www.dekey.com");
	QCoreApplication::setOrganizationName("dekey");
}

void FileDirAccessDemo::on_btnExit_clicked()
{
	QCoreApplication::exit(0);
}

void FileDirAccessDemo::on_btnFileOp_clicked()
{
	QFile::copy(ui.txtFile->text(), "newFile.dat");
	QFile::rename("newFile.dat", "renameFile.dat");
	if (QFile::exists("renameFile.dat")) QFile::remove("renameFile.dat");
}

void FileDirAccessDemo::on_btnSetPermission_clicked()
{
	int intFlags = QFile::permissions(ui.txtFile->text());
	if (intFlags & QFileDevice::ReadGroup)
	{
		//判断是否用户组可以读
	}

	QFile::setPermissions(ui.txtFile->text(), QFileDevice::ReadOwner | QFileDevice::WriteOwner);	//拥有者可以读写
}

void FileDirAccessDemo::on_btnGetFileInfo_clicked()
{
	QFileInfo info(ui.txtFile->text());

	AppendInfo("absoluteFilePath: " + info.absoluteFilePath());
	AppendInfo("absolutePath: " + info.absolutePath());
	AppendInfo("fileName: " + info.fileName());
	AppendInfo("filePath: " + info.filePath());
	AppendInfo("path: " + info.path());
	AppendInfo("baseName: " + info.baseName());
	AppendInfo("completeBaseName: " + info.completeBaseName());
	AppendInfo("suffix: " + info.suffix());
	AppendInfo("completeSuffix: " + info.completeSuffix());
	AppendInfo("size: " + QString::asprintf("%l", info.size()));

	//是否文件
	if (info.isFile())
	{
	}

	//是否目录
	if (info.isDir())
	{
	}

	//是否可执行
	if (info.isExecutable())
	{

	}

	//是否存在
	if (info.exists())
	{

	}

	QDateTime dtCreate = info.created();
	QDateTime dtMod = info.lastModified();
	QDateTime dtRead = info.lastRead();
}

void FileDirAccessDemo::on_btnGetDirInformation_clicked()
{
	AppendInfo("tempPath: " + QDir::tempPath());
	AppendInfo("rootPath: " + QDir::rootPath());
	AppendInfo("homePath: " + QDir::homePath());
	AppendInfo("currentPath: " + QDir::currentPath());

	AppendInfo("===============================================");
	QFileInfoList lstInfo = QDir::drives();
	for (int i = 0; i < lstInfo.count(); i++)
	{
		AppendInfo("Drives: " + lstInfo.at(i).absolutePath());
	}
}

void FileDirAccessDemo::on_btnDirOp_clicked()
{
	QDir dir(ui.txtDir->text());

	dir.mkdir("newDir");
	dir.rename("newDir", "renameDir");
	dir.remove("renameDir");

	//删除当前目录下所有文件目录
	dir.removeRecursively();
}

void FileDirAccessDemo::on_btnLoopUpDir_clicked()
{
	LookUpDir(ui.txtDir->text());
}

void FileDirAccessDemo::on_btnTempDir_clicked()
{
	QTemporaryDir td("");
	td.setAutoRemove(true);	//删除变量后自动删除目录

	AppendInfo("path: " + td.path());
}

void FileDirAccessDemo::on_btnTempFile_clicked()
{
	QTemporaryFile tf("");
	tf.setAutoRemove(true);	//删除变量后自动删除文件

	tf.open();
	AppendInfo("fileName: " + tf.fileName());
	tf.write("123456");
	tf.close();
}

void FileDirAccessDemo::on_btnStartListen_clicked()
{
	//添加文件或目录到监听列表
	watcher.addPath(ui.txtDir->text());
	watcher.addPath(ui.txtFile->text());

	//绑定信号槽
	connect(&watcher, SIGNAL(directoryChanged(const QString &)), this, SLOT(onDirectoryChanged(const QString &)));
	connect(&watcher, SIGNAL(fileChanged(const QString &)), this, SLOT(onFileChanged(const QString &)));

	AppendInfo("开始监听...");
}

void FileDirAccessDemo::on_btnStopListen_clicked()
{
	//删除监听列表中的文件或目录
	watcher.removePath(ui.txtDir->text());
	watcher.removePath(ui.txtFile->text());

	//解绑信号槽
	disconnect(&watcher, "directoryChanged", this, "onDirectoryChanged");
	disconnect(&watcher, "fileChanged", this, "onFileChanged");

	AppendInfo("停止监听!!!");
}

void FileDirAccessDemo::on_btnOpenFile_clicked()
{
	QString strFile = QFileDialog::getOpenFileName(this, "请选择一个文件", 
		QCoreApplication::applicationDirPath(), "All File(*.*)");

	if (strFile.isEmpty()) return;

	ui.txtFile->setText(strFile);
}

void FileDirAccessDemo::on_btnOpenDir_clicked()
{
	QString strDir = QFileDialog::getExistingDirectory(this, "请选择一个目录", QCoreApplication::applicationDirPath());

	if (strDir.isEmpty()) return;

	ui.txtDir->setText(strDir);
}

void FileDirAccessDemo::on_btnClearText_clicked()
{
	ui.ptInfo->clear();
}

void FileDirAccessDemo::onDirectoryChanged(const QString & path)
{
	AppendInfo("onDirectoryChanged: " + path);
}

void FileDirAccessDemo::onFileChanged(const QString & path)
{
	AppendInfo("onFileChanged: " + path);
}
