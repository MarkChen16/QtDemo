/********************************************************************************
** Form generated from reading UI file 'ChartViewDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARTVIEWDEMO_H
#define UI_CHARTVIEWDEMO_H

#include <QtCharts>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChartViewDemoClass
{
public:
    QWidget *centralWidget;
    QChartView *chartView;

    void setupUi(QMainWindow *ChartViewDemoClass)
    {
        if (ChartViewDemoClass->objectName().isEmpty())
            ChartViewDemoClass->setObjectName(QStringLiteral("ChartViewDemoClass"));
        ChartViewDemoClass->resize(612, 325);
        centralWidget = new QWidget(ChartViewDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        chartView = new QChartView(centralWidget);
        chartView->setObjectName(QStringLiteral("chartView"));
        chartView->setGeometry(QRect(90, 20, 381, 261));
        ChartViewDemoClass->setCentralWidget(centralWidget);

        retranslateUi(ChartViewDemoClass);

        QMetaObject::connectSlotsByName(ChartViewDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *ChartViewDemoClass)
    {
        ChartViewDemoClass->setWindowTitle(QApplication::translate("ChartViewDemoClass", "ChartViewDemo", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChartViewDemoClass: public Ui_ChartViewDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARTVIEWDEMO_H
