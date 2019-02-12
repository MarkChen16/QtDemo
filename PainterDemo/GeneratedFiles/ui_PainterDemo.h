/********************************************************************************
** Form generated from reading UI file 'PainterDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAINTERDEMO_H
#define UI_PAINTERDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PainterDemoClass
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *PainterDemoClass)
    {
        if (PainterDemoClass->objectName().isEmpty())
            PainterDemoClass->setObjectName(QStringLiteral("PainterDemoClass"));
        PainterDemoClass->resize(600, 400);
        centralWidget = new QWidget(PainterDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PainterDemoClass->setCentralWidget(centralWidget);

        retranslateUi(PainterDemoClass);

        QMetaObject::connectSlotsByName(PainterDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *PainterDemoClass)
    {
        PainterDemoClass->setWindowTitle(QApplication::translate("PainterDemoClass", "PainterDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PainterDemoClass: public Ui_PainterDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAINTERDEMO_H
