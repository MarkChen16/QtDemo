#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QStyleFactory>
#include <QTranslator>

#include <qsettings.h>

extern QTranslator *trans;

//使用UTF8+BOM只在源文件，并使用utf-8选项来编译；
#if _MSC_VER >= 1600
    #pragma execution_character_set("utf-8")
#endif

/*
 * 一、多语言程序设置：
 * 1、使用tr函数封装字符串常量、使用tr("第%1行 第%2列").arg(i).arg(j)组装字符串
 * 2、修改.pro文件，设置语言翻译ts文件，TRANSLATIONS = Sys_CN.ts Sys_EN.ts，运行Update Translations(lupdate)生成两个tr文件
 * 3、使用Qt Linguist翻译英文ts文件，运行Release Translations(lrelease)生成qm文件
 * 4、程序启动时设置界面语言
 * 5、动态切换界面语言
 *
 *
 * 二、QT 样式表
 * 1、选择器：通过类名、属性、ID、从属父控件的控件选择应用样式的控件
 * 2、子控件：针对控件内的子控件应用的样式
 * 3、状态条件：当控件处于某种状态时应用的样式
 * 4、控件盒子模型：content(显示内容矩形区域)->padding(包围content矩形的空白边距)->border(包围padding的边框)->margin(与父控件的空白边距)
 * 5、控件有多个选择器应用的样式，显示是最后的样式
 * 6、APP、MainWindow和控件多级都有对应的样式表时，显示离控件最近的样式
 * 7、QT内置了9种系统的默认样式表
 *
 * 三、程序版本发布 C:\Qt\Qt5.9.1\5.9.1\msvc2015\bin\windeployqt.exe [options] [files] 发布工具
 * 1、静态链接：需要QT的静态库版本重新编译生成执行文件；
 * 2、共享库方式：一般程序发布都采用这种方式；
 * 3、命令行
 */

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //代码化组件
    initUI();

    translateUI();

    //初始化内置样式列表
    QStringList lstCSS = QStyleFactory::keys();
    ui->cbSysCSS->addItems(lstCSS);

    //默认系统样式表
    QString strDefalut = QApplication::style()->metaObject()->className();
    for(int i=0;i < ui->cbSysCSS->count();i++)
    {
        if (strDefalut.indexOf(ui->cbSysCSS->itemText(i)) >= 0)
        {
            ui->cbSysCSS->setCurrentIndex(i);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnCN_clicked()
{
    ChangeLanguage("Sys_CN.qm");

	QSettings settings("HKEY_CURRENT_USER\\Software\\MoreLanguageStyleView", QSettings::NativeFormat);
	settings.setValue("Language", "CN");
}

void MainWindow::on_btnEN_clicked()
{
    ChangeLanguage("Sys_EN.qm");

	QSettings settings("HKEY_CURRENT_USER\\Software\\MoreLanguageStyleView", QSettings::NativeFormat);
	settings.setValue("Language", "EN");
}

void MainWindow::on_btnCSS1_clicked()
{
    //设置MainWindow的样式表
    this->setStyleSheet("QPushButton{border:5px groove blue; border-radius: 30px; min-width:60px;max-height:60px;}");
}

void MainWindow::on_btnCSS2_clicked()
{
    //设置btnCSS2的样式表
    ui->btnCSS2->setStyleSheet("QPushButton{border:2px groove green; border-radius: 30px; min-width:60px;max-height:60px;}QPushButton:hover{border-color:red;}");
}

void MainWindow::ChangeLanguage(QString strLang)
{
    //动态切换语言============================

    //删除原来的翻译器
    QApplication::removeTranslator(trans);
    delete trans;

    //安装新的翻译器
    trans = new QTranslator;
    trans->load(strLang);

    QApplication::installTranslator(trans);

    //刷新界面字符串
    ui->retranslateUi(this);

    //刷新代码化的组件字符串
    translateUI();
}

void MainWindow::initUI()
{
    m_labState = new QLabel;
    ui->statusBar->addWidget(m_labState);

    m_pgbState = new QProgressBar();
    m_pgbState->setMinimum(0);
    m_pgbState->setMaximum(100);
    m_pgbState->setMinimumWidth(420);
    m_pgbState->setValue(67);
    ui->statusBar->addWidget(m_pgbState);
}

void MainWindow::translateUI()
{
    m_labState->setText(tr("系统状态："));
}

void MainWindow::on_btnClearCSS_clicked()
{
    //清除样式表
    this->setStyleSheet("");
    ui->btnCSS2->setStyleSheet("");
}

void MainWindow::on_btnSysCSS_clicked()
{
    QStyle *style = QStyleFactory::create(ui->cbSysCSS->currentText());

    QApplication::setStyle(style);
}
