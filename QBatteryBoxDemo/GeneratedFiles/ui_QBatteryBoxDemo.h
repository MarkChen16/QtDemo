/********************************************************************************
** Form generated from reading UI file 'QBatteryBoxDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QBATTERYBOXDEMO_H
#define UI_QBATTERYBOXDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include "QBatteryBox.h"

QT_BEGIN_NAMESPACE

class Ui_QBatteryBoxDemoClass
{
public:
    QBatteryBox *myBattery;
    QSlider *hsPower;
    QLabel *labCurrPower;

    void setupUi(QDialog *QBatteryBoxDemoClass)
    {
        if (QBatteryBoxDemoClass->objectName().isEmpty())
            QBatteryBoxDemoClass->setObjectName(QStringLiteral("QBatteryBoxDemoClass"));
        QBatteryBoxDemoClass->resize(532, 254);
        myBattery = new QBatteryBox(QBatteryBoxDemoClass);
        myBattery->setObjectName(QStringLiteral("myBattery"));
        myBattery->setGeometry(QRect(130, 30, 271, 101));
        myBattery->setPowerLevel(67);
        hsPower = new QSlider(QBatteryBoxDemoClass);
        hsPower->setObjectName(QStringLiteral("hsPower"));
        hsPower->setGeometry(QRect(130, 150, 271, 19));
        hsPower->setMaximum(100);
        hsPower->setSingleStep(1);
        hsPower->setPageStep(10);
        hsPower->setValue(67);
        hsPower->setOrientation(Qt::Horizontal);
        hsPower->setTickPosition(QSlider::NoTicks);
        labCurrPower = new QLabel(QBatteryBoxDemoClass);
        labCurrPower->setObjectName(QStringLiteral("labCurrPower"));
        labCurrPower->setGeometry(QRect(200, 200, 161, 16));

        retranslateUi(QBatteryBoxDemoClass);

        QMetaObject::connectSlotsByName(QBatteryBoxDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QBatteryBoxDemoClass)
    {
        QBatteryBoxDemoClass->setWindowTitle(QApplication::translate("QBatteryBoxDemoClass", "QBatteryBoxDemo", Q_NULLPTR));
        labCurrPower->setText(QApplication::translate("QBatteryBoxDemoClass", "\345\275\223\345\211\215\347\224\265\351\207\217\357\274\23267%", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QBatteryBoxDemoClass: public Ui_QBatteryBoxDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QBATTERYBOXDEMO_H
