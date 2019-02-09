/********************************************************************************
** Form generated from reading UI file 'CustomDialogDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMDIALOGDEMO_H
#define UI_CUSTOMDIALOGDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomDialogDemoClass
{
public:
    QListWidget *lstData;
    QPushButton *btnEditItem;
    QPushButton *btnSetColor;
    QLabel *label;

    void setupUi(QWidget *CustomDialogDemoClass)
    {
        if (CustomDialogDemoClass->objectName().isEmpty())
            CustomDialogDemoClass->setObjectName(QStringLiteral("CustomDialogDemoClass"));
        CustomDialogDemoClass->resize(431, 355);
        lstData = new QListWidget(CustomDialogDemoClass);
        lstData->setObjectName(QStringLiteral("lstData"));
        lstData->setGeometry(QRect(10, 10, 291, 311));
        btnEditItem = new QPushButton(CustomDialogDemoClass);
        btnEditItem->setObjectName(QStringLiteral("btnEditItem"));
        btnEditItem->setGeometry(QRect(310, 10, 111, 23));
        btnSetColor = new QPushButton(CustomDialogDemoClass);
        btnSetColor->setObjectName(QStringLiteral("btnSetColor"));
        btnSetColor->setGeometry(QRect(310, 40, 111, 23));
        label = new QLabel(CustomDialogDemoClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 330, 241, 16));

        retranslateUi(CustomDialogDemoClass);

        QMetaObject::connectSlotsByName(CustomDialogDemoClass);
    } // setupUi

    void retranslateUi(QWidget *CustomDialogDemoClass)
    {
        CustomDialogDemoClass->setWindowTitle(QApplication::translate("CustomDialogDemoClass", "CustomDialogDemo", Q_NULLPTR));
        btnEditItem->setText(QApplication::translate("CustomDialogDemoClass", "\346\267\273\345\212\240\350\256\260\345\275\225", Q_NULLPTR));
        btnSetColor->setText(QApplication::translate("CustomDialogDemoClass", "\350\256\276\347\275\256\351\242\234\350\211\262", Q_NULLPTR));
        label->setText(QApplication::translate("CustomDialogDemoClass", "RGBA\357\274\232255, 255, 255, 255", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomDialogDemoClass: public Ui_CustomDialogDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMDIALOGDEMO_H
