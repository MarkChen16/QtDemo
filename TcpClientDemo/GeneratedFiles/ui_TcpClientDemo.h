/********************************************************************************
** Form generated from reading UI file 'TcpClientDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPCLIENTDEMO_H
#define UI_TCPCLIENTDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TcpClientDemoClass
{
public:

    void setupUi(QWidget *TcpClientDemoClass)
    {
        if (TcpClientDemoClass->objectName().isEmpty())
            TcpClientDemoClass->setObjectName(QStringLiteral("TcpClientDemoClass"));
        TcpClientDemoClass->resize(600, 400);

        retranslateUi(TcpClientDemoClass);

        QMetaObject::connectSlotsByName(TcpClientDemoClass);
    } // setupUi

    void retranslateUi(QWidget *TcpClientDemoClass)
    {
        TcpClientDemoClass->setWindowTitle(QApplication::translate("TcpClientDemoClass", "TcpClientDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TcpClientDemoClass: public Ui_TcpClientDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENTDEMO_H
