/********************************************************************************
** Form generated from reading UI file 'StrengChartViewDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRENGCHARTVIEWDEMO_H
#define UI_STRENGCHARTVIEWDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qwchartview.h>

QT_BEGIN_NAMESPACE

class Ui_StrengChartViewDemoClass
{
public:
    QAction *actEnlarge;
    QAction *actLessen;
    QAction *actOrgSize;
    QAction *actQuit;
    QWidget *centralWidget;
    QWChartView *view;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *StrengChartViewDemoClass)
    {
        if (StrengChartViewDemoClass->objectName().isEmpty())
            StrengChartViewDemoClass->setObjectName(QStringLiteral("StrengChartViewDemoClass"));
        StrengChartViewDemoClass->resize(600, 356);
        actEnlarge = new QAction(StrengChartViewDemoClass);
        actEnlarge->setObjectName(QStringLiteral("actEnlarge"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/StrengChartViewDemo/Resources/REFBARH.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actEnlarge->setIcon(icon);
        actLessen = new QAction(StrengChartViewDemoClass);
        actLessen->setObjectName(QStringLiteral("actLessen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/StrengChartViewDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actLessen->setIcon(icon1);
        actOrgSize = new QAction(StrengChartViewDemoClass);
        actOrgSize->setObjectName(QStringLiteral("actOrgSize"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/StrengChartViewDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actOrgSize->setIcon(icon2);
        actQuit = new QAction(StrengChartViewDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/StrengChartViewDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon3);
        centralWidget = new QWidget(StrengChartViewDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        view = new QWChartView(centralWidget);
        view->setObjectName(QStringLiteral("view"));
        view->setGeometry(QRect(90, 20, 421, 261));
        StrengChartViewDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(StrengChartViewDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        StrengChartViewDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(StrengChartViewDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        StrengChartViewDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actEnlarge);
        mainToolBar->addAction(actLessen);
        mainToolBar->addAction(actOrgSize);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(StrengChartViewDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), StrengChartViewDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(StrengChartViewDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *StrengChartViewDemoClass)
    {
        StrengChartViewDemoClass->setWindowTitle(QApplication::translate("StrengChartViewDemoClass", "StrengChartViewDemo", Q_NULLPTR));
        actEnlarge->setText(QApplication::translate("StrengChartViewDemoClass", "\346\224\276\345\244\247", Q_NULLPTR));
        actLessen->setText(QApplication::translate("StrengChartViewDemoClass", "\347\274\251\345\260\217", Q_NULLPTR));
        actOrgSize->setText(QApplication::translate("StrengChartViewDemoClass", "\345\216\237\345\247\213\345\244\247\345\260\217", Q_NULLPTR));
        actQuit->setText(QApplication::translate("StrengChartViewDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StrengChartViewDemoClass: public Ui_StrengChartViewDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRENGCHARTVIEWDEMO_H
