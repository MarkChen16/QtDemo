/********************************************************************************
** Form generated from reading UI file 'SimpleTcpDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLETCPDEMO_H
#define UI_SIMPLETCPDEMO_H

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

class Ui_SimpleTcpDemoClass
{
public:
    QAction *actStart;
    QAction *actStop;
    QAction *actNewClient;
    QAction *actQuit;
    QWidget *centralWidget;
    QListWidget *lstMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *SimpleTcpDemoClass)
    {
        if (SimpleTcpDemoClass->objectName().isEmpty())
            SimpleTcpDemoClass->setObjectName(QStringLiteral("SimpleTcpDemoClass"));
        SimpleTcpDemoClass->resize(560, 303);
        actStart = new QAction(SimpleTcpDemoClass);
        actStart->setObjectName(QStringLiteral("actStart"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/SimpleTcpDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon);
        actStop = new QAction(SimpleTcpDemoClass);
        actStop->setObjectName(QStringLiteral("actStop"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/SimpleTcpDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon1);
        actNewClient = new QAction(SimpleTcpDemoClass);
        actNewClient->setObjectName(QStringLiteral("actNewClient"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/SimpleTcpDemo/Resources/MSN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actNewClient->setIcon(icon2);
        actQuit = new QAction(SimpleTcpDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/SimpleTcpDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon3);
        centralWidget = new QWidget(SimpleTcpDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lstMsg = new QListWidget(centralWidget);
        lstMsg->setObjectName(QStringLiteral("lstMsg"));
        lstMsg->setGeometry(QRect(60, 10, 431, 211));
        SimpleTcpDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(SimpleTcpDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        SimpleTcpDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(SimpleTcpDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        SimpleTcpDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addAction(actNewClient);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(SimpleTcpDemoClass);

        QMetaObject::connectSlotsByName(SimpleTcpDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *SimpleTcpDemoClass)
    {
        SimpleTcpDemoClass->setWindowTitle(QApplication::translate("SimpleTcpDemoClass", "SimpleTcpDemo", Q_NULLPTR));
        actStart->setText(QApplication::translate("SimpleTcpDemoClass", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        actStop->setText(QApplication::translate("SimpleTcpDemoClass", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        actNewClient->setText(QApplication::translate("SimpleTcpDemoClass", "\345\210\233\345\273\272\345\256\242\346\210\267\347\253\257", Q_NULLPTR));
        actQuit->setText(QApplication::translate("SimpleTcpDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SimpleTcpDemoClass: public Ui_SimpleTcpDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLETCPDEMO_H
