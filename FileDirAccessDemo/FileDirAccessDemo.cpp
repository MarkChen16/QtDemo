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

	//ֻ�����ļ���Ŀ¼��������Ŀ¼����
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
			LookUpDir(strDir + "\\" + lstFileDir.at(i));	//�ݹ���ã�������Ŀ¼
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
		//�ж��Ƿ��û�����Զ�
	}

	QFile::setPermissions(ui.txtFile->text(), QFileDevice::ReadOwner | QFileDevice::WriteOwner);	//ӵ���߿��Զ�д
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

	//�Ƿ��ļ�
	if (info.isFile())
	{
	}

	//�Ƿ�Ŀ¼
	if (info.isDir())
	{
	}

	//�Ƿ��ִ��
	if (info.isExecutable())
	{

	}

	//�Ƿ����
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

	//ɾ����ǰĿ¼�������ļ�Ŀ¼
	dir.removeRecursively();
}

void FileDirAccessDemo::on_btnLoopUpDir_clicked()
{
	LookUpDir(ui.txtDir->text());
}

void FileDirAccessDemo::on_btnTempDir_clicked()
{
	QTemporaryDir td("");
	td.setAutoRemove(true);	//ɾ���������Զ�ɾ��Ŀ¼

	AppendInfo("path: " + td.path());
}

void FileDirAccessDemo::on_btnTempFile_clicked()
{
	QTemporaryFile tf("");
	tf.setAutoRemove(true);	//ɾ���������Զ�ɾ���ļ�

	tf.open();
	AppendInfo("fileName: " + tf.fileName());
	tf.write("123456");
	tf.close();
}

void FileDirAccessDemo::on_btnStartListen_clicked()
{
	//����ļ���Ŀ¼�������б�
	watcher.addPath(ui.txtDir->text());
	watcher.addPath(ui.txtFile->text());

	//���źŲ�
	connect(&watcher, SIGNAL(directoryChanged(const QString &)), this, SLOT(onDirectoryChanged(const QString &)));
	connect(&watcher, SIGNAL(fileChanged(const QString &)), this, SLOT(onFileChanged(const QString &)));

	AppendInfo("��ʼ����...");
}

void FileDirAccessDemo::on_btnStopListen_clicked()
{
	//ɾ�������б��е��ļ���Ŀ¼
	watcher.removePath(ui.txtDir->text());
	watcher.removePath(ui.txtFile->text());

	//����źŲ�
	disconnect(&watcher, "directoryChanged", this, "onDirectoryChanged");
	disconnect(&watcher, "fileChanged", this, "onFileChanged");

	AppendInfo("ֹͣ����!!!");
}

void FileDirAccessDemo::on_btnOpenFile_clicked()
{
	QString strFile = QFileDialog::getOpenFileName(this, "��ѡ��һ���ļ�", 
		QCoreApplication::applicationDirPath(), "All File(*.*)");

	if (strFile.isEmpty()) return;

	ui.txtFile->setText(strFile);
}

void FileDirAccessDemo::on_btnOpenDir_clicked()
{
	QString strDir = QFileDialog::getExistingDirectory(this, "��ѡ��һ��Ŀ¼", QCoreApplication::applicationDirPath());

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
