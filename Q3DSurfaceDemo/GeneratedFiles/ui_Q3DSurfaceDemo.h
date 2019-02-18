/********************************************************************************
** Form generated from reading UI file 'Q3DSurfaceDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Q3DSURFACEDEMO_H
#define UI_Q3DSURFACEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Q3DSurfaceDemoClass
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *Q3DSurfaceDemoClass)
    {
        if (Q3DSurfaceDemoClass->objectName().isEmpty())
            Q3DSurfaceDemoClass->setObjectName(QStringLiteral("Q3DSurfaceDemoClass"));
        Q3DSurfaceDemoClass->resize(600, 400);
        centralWidget = new QWidget(Q3DSurfaceDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Q3DSurfaceDemoClass->setCentralWidget(centralWidget);

        retranslateUi(Q3DSurfaceDemoClass);

        QMetaObject::connectSlotsByName(Q3DSurfaceDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *Q3DSurfaceDemoClass)
    {
        Q3DSurfaceDemoClass->setWindowTitle(QApplication::translate("Q3DSurfaceDemoClass", "Q3DSurfaceDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Q3DSurfaceDemoClass: public Ui_Q3DSurfaceDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Q3DSURFACEDEMO_H
