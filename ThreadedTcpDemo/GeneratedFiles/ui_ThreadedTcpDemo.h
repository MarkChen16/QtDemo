/********************************************************************************
** Form generated from reading UI file 'ThreadedTcpDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREADEDTCPDEMO_H
#define UI_THREADEDTCPDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThreadedTcpDemoClass
{
public:
    QAction *actStart;
    QAction *actStop;
    QAction *actQuit;
    QWidget *centralWidget;
    QListWidget *lstMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ThreadedTcpDemoClass)
    {
        if (ThreadedTcpDemoClass->objectName().isEmpty())
            ThreadedTcpDemoClass->setObjectName(QStringLiteral("ThreadedTcpDemoClass"));
        ThreadedTcpDemoClass->resize(582, 355);
        actStart = new QAction(ThreadedTcpDemoClass);
        actStart->setObjectName(QStringLiteral("actStart"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ThreadedTcpDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon);
        actStop = new QAction(ThreadedTcpDemoClass);
        actStop->setObjectName(QStringLiteral("actStop"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ThreadedTcpDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon1);
        actQuit = new QAction(ThreadedTcpDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ThreadedTcpDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        centralWidget = new QWidget(ThreadedTcpDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lstMsg = new QListWidget(centralWidget);
        lstMsg->setObjectName(QStringLiteral("lstMsg"));
        lstMsg->setGeometry(QRect(70, 20, 401, 251));
        ThreadedTcpDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(ThreadedTcpDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        ThreadedTcpDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ThreadedTcpDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ThreadedTcpDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(ThreadedTcpDemoClass);

        QMetaObject::connectSlotsByName(ThreadedTcpDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ThreadedTcpDemoClass)
    {
        ThreadedTcpDemoClass->setWindowTitle(QApplication::translate("ThreadedTcpDemoClass", "ThreadedTcpDemo", Q_NULLPTR));
        actStart->setText(QApplication::translate("ThreadedTcpDemoClass", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        actStop->setText(QApplication::translate("ThreadedTcpDemoClass", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        actQuit->setText(QApplication::translate("ThreadedTcpDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ThreadedTcpDemoClass: public Ui_ThreadedTcpDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREADEDTCPDEMO_H
