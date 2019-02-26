/********************************************************************************
** Form generated from reading UI file 'TcpServerDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPSERVERDEMO_H
#define UI_TCPSERVERDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpServerDemoClass
{
public:
    QAction *actStart;
    QAction *actStop;
    QAction *actQuit;
    QWidget *centralWidget;
    QListWidget *lstMsg;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *TcpServerDemoClass)
    {
        if (TcpServerDemoClass->objectName().isEmpty())
            TcpServerDemoClass->setObjectName(QStringLiteral("TcpServerDemoClass"));
        TcpServerDemoClass->resize(712, 345);
        actStart = new QAction(TcpServerDemoClass);
        actStart->setObjectName(QStringLiteral("actStart"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/TcpServerDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon);
        actStop = new QAction(TcpServerDemoClass);
        actStop->setObjectName(QStringLiteral("actStop"));
        actStop->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TcpServerDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon1);
        actQuit = new QAction(TcpServerDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TcpServerDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        centralWidget = new QWidget(TcpServerDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lstMsg = new QListWidget(centralWidget);
        lstMsg->setObjectName(QStringLiteral("lstMsg"));
        lstMsg->setGeometry(QRect(40, 20, 621, 251));
        TcpServerDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(TcpServerDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TcpServerDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(TcpServerDemoClass);

        QMetaObject::connectSlotsByName(TcpServerDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *TcpServerDemoClass)
    {
        TcpServerDemoClass->setWindowTitle(QApplication::translate("TcpServerDemoClass", "TcpServerDemo", Q_NULLPTR));
        actStart->setText(QApplication::translate("TcpServerDemoClass", "\345\274\200\345\220\257\347\233\221\345\220\254", Q_NULLPTR));
        actStop->setText(QApplication::translate("TcpServerDemoClass", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        actQuit->setText(QApplication::translate("TcpServerDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TcpServerDemoClass: public Ui_TcpServerDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPSERVERDEMO_H
