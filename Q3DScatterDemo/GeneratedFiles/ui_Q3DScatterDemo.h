/********************************************************************************
** Form generated from reading UI file 'Q3DScatterDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Q3DSCATTERDEMO_H
#define UI_Q3DSCATTERDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Q3DScatterDemoClass
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Q3DScatterDemoClass)
    {
        if (Q3DScatterDemoClass->objectName().isEmpty())
            Q3DScatterDemoClass->setObjectName(QStringLiteral("Q3DScatterDemoClass"));
        Q3DScatterDemoClass->resize(600, 400);
        centralWidget = new QWidget(Q3DScatterDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Q3DScatterDemoClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Q3DScatterDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Q3DScatterDemoClass->setStatusBar(statusBar);

        retranslateUi(Q3DScatterDemoClass);

        QMetaObject::connectSlotsByName(Q3DScatterDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *Q3DScatterDemoClass)
    {
        Q3DScatterDemoClass->setWindowTitle(QApplication::translate("Q3DScatterDemoClass", "Q3DScatterDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Q3DScatterDemoClass: public Ui_Q3DScatterDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Q3DSCATTERDEMO_H
