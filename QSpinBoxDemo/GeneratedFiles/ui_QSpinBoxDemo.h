/********************************************************************************
** Form generated from reading UI file 'QSpinBoxDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSPINBOXDEMO_H
#define UI_QSPINBOXDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_QSpinBoxDemoClass
{
public:
    QLabel *label;
    QSpinBox *sbNum;
    QLabel *label_2;
    QDoubleSpinBox *sbPrice;
    QPushButton *btnCount;
    QLabel *label_3;
    QDoubleSpinBox *sbTotal;

    void setupUi(QDialog *QSpinBoxDemoClass)
    {
        if (QSpinBoxDemoClass->objectName().isEmpty())
            QSpinBoxDemoClass->setObjectName(QStringLiteral("QSpinBoxDemoClass"));
        QSpinBoxDemoClass->resize(372, 138);
        label = new QLabel(QSpinBoxDemoClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 41, 21));
        sbNum = new QSpinBox(QSpinBoxDemoClass);
        sbNum->setObjectName(QStringLiteral("sbNum"));
        sbNum->setGeometry(QRect(90, 40, 81, 22));
        sbNum->setMaximum(1000);
        sbNum->setSingleStep(2);
        sbNum->setValue(5);
        label_2 = new QLabel(QSpinBoxDemoClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(200, 40, 41, 21));
        sbPrice = new QDoubleSpinBox(QSpinBoxDemoClass);
        sbPrice->setObjectName(QStringLiteral("sbPrice"));
        sbPrice->setGeometry(QRect(240, 40, 81, 22));
        sbPrice->setMaximum(1000);
        sbPrice->setSingleStep(5);
        sbPrice->setValue(9.7);
        btnCount = new QPushButton(QSpinBoxDemoClass);
        btnCount->setObjectName(QStringLiteral("btnCount"));
        btnCount->setGeometry(QRect(80, 80, 75, 23));
        label_3 = new QLabel(QSpinBoxDemoClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(200, 80, 41, 21));
        sbTotal = new QDoubleSpinBox(QSpinBoxDemoClass);
        sbTotal->setObjectName(QStringLiteral("sbTotal"));
        sbTotal->setGeometry(QRect(240, 80, 81, 22));
        sbTotal->setMaximum(1e+6);

        retranslateUi(QSpinBoxDemoClass);
        QObject::connect(btnCount, SIGNAL(clicked()), QSpinBoxDemoClass, SLOT(on_count()));

        QMetaObject::connectSlotsByName(QSpinBoxDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QSpinBoxDemoClass)
    {
        QSpinBoxDemoClass->setWindowTitle(QApplication::translate("QSpinBoxDemoClass", "QSpinBoxDemo", Q_NULLPTR));
        label->setText(QApplication::translate("QSpinBoxDemoClass", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        sbNum->setSuffix(QApplication::translate("QSpinBoxDemoClass", "KG", Q_NULLPTR));
        label_2->setText(QApplication::translate("QSpinBoxDemoClass", "\344\273\267\346\240\274\357\274\232", Q_NULLPTR));
        sbPrice->setPrefix(QApplication::translate("QSpinBoxDemoClass", "$", Q_NULLPTR));
        btnCount->setText(QApplication::translate("QSpinBoxDemoClass", "\350\256\241\347\256\227", Q_NULLPTR));
        label_3->setText(QApplication::translate("QSpinBoxDemoClass", "\346\200\273\344\273\267\357\274\232", Q_NULLPTR));
        sbTotal->setPrefix(QApplication::translate("QSpinBoxDemoClass", "$", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QSpinBoxDemoClass: public Ui_QSpinBoxDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSPINBOXDEMO_H
