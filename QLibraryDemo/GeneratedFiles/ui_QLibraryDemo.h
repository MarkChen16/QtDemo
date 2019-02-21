/********************************************************************************
** Form generated from reading UI file 'QLibraryDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLIBRARYDEMO_H
#define UI_QLIBRARYDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QLibraryDemoClass
{
public:
    QPushButton *btnInv1;
    QPushButton *btnInv2;

    void setupUi(QDialog *QLibraryDemoClass)
    {
        if (QLibraryDemoClass->objectName().isEmpty())
            QLibraryDemoClass->setObjectName(QStringLiteral("QLibraryDemoClass"));
        QLibraryDemoClass->resize(344, 155);
        btnInv1 = new QPushButton(QLibraryDemoClass);
        btnInv1->setObjectName(QStringLiteral("btnInv1"));
        btnInv1->setGeometry(QRect(60, 60, 101, 41));
        btnInv2 = new QPushButton(QLibraryDemoClass);
        btnInv2->setObjectName(QStringLiteral("btnInv2"));
        btnInv2->setGeometry(QRect(190, 60, 101, 41));

        retranslateUi(QLibraryDemoClass);

        QMetaObject::connectSlotsByName(QLibraryDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QLibraryDemoClass)
    {
        QLibraryDemoClass->setWindowTitle(QApplication::translate("QLibraryDemoClass", "QLibraryDemo", Q_NULLPTR));
        btnInv1->setText(QApplication::translate("QLibraryDemoClass", "\351\235\231\346\200\201\351\223\276\346\216\245", Q_NULLPTR));
        btnInv2->setText(QApplication::translate("QLibraryDemoClass", "\345\212\250\346\200\201\351\223\276\346\216\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QLibraryDemoClass: public Ui_QLibraryDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLIBRARYDEMO_H
