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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TcpClientDemoClass
{
public:
    QProgressBar *pbData;
    QPushButton *btnQuit;
    QPushButton *btnConnect;

    void setupUi(QDialog *TcpClientDemoClass)
    {
        if (TcpClientDemoClass->objectName().isEmpty())
            TcpClientDemoClass->setObjectName(QStringLiteral("TcpClientDemoClass"));
        TcpClientDemoClass->resize(492, 130);
        pbData = new QProgressBar(TcpClientDemoClass);
        pbData->setObjectName(QStringLiteral("pbData"));
        pbData->setGeometry(QRect(10, 10, 471, 61));
        pbData->setValue(0);
        pbData->setAlignment(Qt::AlignCenter);
        pbData->setTextDirection(QProgressBar::TopToBottom);
        btnQuit = new QPushButton(TcpClientDemoClass);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));
        btnQuit->setGeometry(QRect(290, 80, 101, 41));
        btnConnect = new QPushButton(TcpClientDemoClass);
        btnConnect->setObjectName(QStringLiteral("btnConnect"));
        btnConnect->setGeometry(QRect(90, 80, 101, 41));

        retranslateUi(TcpClientDemoClass);

        QMetaObject::connectSlotsByName(TcpClientDemoClass);
    } // setupUi

    void retranslateUi(QDialog *TcpClientDemoClass)
    {
        TcpClientDemoClass->setWindowTitle(QApplication::translate("TcpClientDemoClass", "TcpClientDemo", Q_NULLPTR));
        btnQuit->setText(QApplication::translate("TcpClientDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217(&Q)", Q_NULLPTR));
        btnConnect->setText(QApplication::translate("TcpClientDemoClass", "\350\277\236\346\216\245\344\270\273\346\234\272(&C)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TcpClientDemoClass: public Ui_TcpClientDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPCLIENTDEMO_H
