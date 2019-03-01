#include "mainwindow.h"
#include <QApplication>
#include <qtranslator.h>

#include <qsettings.h>

QTranslator *trans = NULL;

QString ReadLanguage()
{
	QSettings settings("HKEY_CURRENT_USER\\Software\\MoreLanguageStyleView", QSettings::NativeFormat);

	QString szLanguage = settings.value("Language", "EN").toString();

    return szLanguage;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //定义翻译器
    trans = new QTranslator;
    bool bOK = false;

    //加载翻译文件，当前目录是build-project文件夹
    QString strLang = ReadLanguage();
    if ("CN" == strLang)
    {
        bOK = trans->load("Sys_CN.qm");  //中文
    }
    else
    {
        bOK = trans->load("Sys_EN.qm");  //英文
    }

    //安装翻译器
    a.installTranslator(trans);

    MainWindow w;
    w.show();

    return a.exec();
}
