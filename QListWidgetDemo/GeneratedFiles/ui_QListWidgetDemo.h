/********************************************************************************
** Form generated from reading UI file 'QListWidgetDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLISTWIDGETDEMO_H
#define UI_QLISTWIDGETDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_QListWidgetDemoClass
{
public:

    void setupUi(QDialog *QListWidgetDemoClass)
    {
        if (QListWidgetDemoClass->objectName().isEmpty())
            QListWidgetDemoClass->setObjectName(QStringLiteral("QListWidgetDemoClass"));
        QListWidgetDemoClass->resize(600, 400);

        retranslateUi(QListWidgetDemoClass);

        QMetaObject::connectSlotsByName(QListWidgetDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QListWidgetDemoClass)
    {
        QListWidgetDemoClass->setWindowTitle(QApplication::translate("QListWidgetDemoClass", "QListWidgetDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QListWidgetDemoClass: public Ui_QListWidgetDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLISTWIDGETDEMO_H
