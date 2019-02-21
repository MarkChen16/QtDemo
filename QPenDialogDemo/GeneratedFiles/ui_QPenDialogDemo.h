/********************************************************************************
** Form generated from reading UI file 'QPenDialogDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPENDIALOGDEMO_H
#define UI_QPENDIALOGDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QPenDialogDemoClass
{
public:
    QPushButton *btnGetPen;

    void setupUi(QDialog *QPenDialogDemoClass)
    {
        if (QPenDialogDemoClass->objectName().isEmpty())
            QPenDialogDemoClass->setObjectName(QStringLiteral("QPenDialogDemoClass"));
        QPenDialogDemoClass->resize(445, 267);
        btnGetPen = new QPushButton(QPenDialogDemoClass);
        btnGetPen->setObjectName(QStringLiteral("btnGetPen"));
        btnGetPen->setGeometry(QRect(170, 220, 101, 31));

        retranslateUi(QPenDialogDemoClass);

        QMetaObject::connectSlotsByName(QPenDialogDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QPenDialogDemoClass)
    {
        QPenDialogDemoClass->setWindowTitle(QApplication::translate("QPenDialogDemoClass", "QPenDialogDemo", Q_NULLPTR));
        btnGetPen->setText(QApplication::translate("QPenDialogDemoClass", "Get Pen", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QPenDialogDemoClass: public Ui_QPenDialogDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPENDIALOGDEMO_H
