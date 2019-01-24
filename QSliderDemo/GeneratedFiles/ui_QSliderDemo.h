/********************************************************************************
** Form generated from reading UI file 'QSliderDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSLIDERDEMO_H
#define UI_QSLIDERDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_QSliderDemoClass
{
public:
    QSlider *hsRed;
    QSlider *hsGreen;
    QSlider *hsBlue;
    QSlider *hsAlpha;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDial *diContorl;
    QLCDNumber *lcdNum;
    QTextEdit *textEdit;

    void setupUi(QDialog *QSliderDemoClass)
    {
        if (QSliderDemoClass->objectName().isEmpty())
            QSliderDemoClass->setObjectName(QStringLiteral("QSliderDemoClass"));
        QSliderDemoClass->resize(442, 378);
        hsRed = new QSlider(QSliderDemoClass);
        hsRed->setObjectName(QStringLiteral("hsRed"));
        hsRed->setGeometry(QRect(60, 30, 160, 19));
        hsRed->setMaximum(255);
        hsRed->setValue(75);
        hsRed->setOrientation(Qt::Horizontal);
        hsRed->setTickPosition(QSlider::TicksBelow);
        hsGreen = new QSlider(QSliderDemoClass);
        hsGreen->setObjectName(QStringLiteral("hsGreen"));
        hsGreen->setGeometry(QRect(60, 70, 160, 19));
        hsGreen->setMaximum(255);
        hsGreen->setValue(67);
        hsGreen->setOrientation(Qt::Horizontal);
        hsGreen->setTickPosition(QSlider::TicksBelow);
        hsBlue = new QSlider(QSliderDemoClass);
        hsBlue->setObjectName(QStringLiteral("hsBlue"));
        hsBlue->setGeometry(QRect(60, 110, 160, 19));
        hsBlue->setMaximum(255);
        hsBlue->setValue(34);
        hsBlue->setOrientation(Qt::Horizontal);
        hsBlue->setTickPosition(QSlider::TicksBelow);
        hsAlpha = new QSlider(QSliderDemoClass);
        hsAlpha->setObjectName(QStringLiteral("hsAlpha"));
        hsAlpha->setGeometry(QRect(60, 150, 160, 19));
        hsAlpha->setMaximum(255);
        hsAlpha->setValue(255);
        hsAlpha->setOrientation(Qt::Horizontal);
        hsAlpha->setTickPosition(QSlider::TicksBelow);
        label = new QLabel(QSliderDemoClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 31, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(QSliderDemoClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 31, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(QSliderDemoClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 110, 31, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(QSliderDemoClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 31, 21));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        diContorl = new QDial(QSliderDemoClass);
        diContorl->setObjectName(QStringLiteral("diContorl"));
        diContorl->setGeometry(QRect(40, 200, 181, 131));
        diContorl->setMaximum(999);
        diContorl->setSingleStep(10);
        diContorl->setPageStep(100);
        diContorl->setValue(456);
        diContorl->setInvertedAppearance(false);
        diContorl->setInvertedControls(false);
        diContorl->setWrapping(false);
        diContorl->setNotchesVisible(true);
        lcdNum = new QLCDNumber(QSliderDemoClass);
        lcdNum->setObjectName(QStringLiteral("lcdNum"));
        lcdNum->setGeometry(QRect(250, 190, 161, 161));
        textEdit = new QTextEdit(QSliderDemoClass);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(250, 30, 161, 131));

        retranslateUi(QSliderDemoClass);
        QObject::connect(hsAlpha, SIGNAL(valueChanged(int)), QSliderDemoClass, SLOT(on_color_select()));
        QObject::connect(hsBlue, SIGNAL(valueChanged(int)), QSliderDemoClass, SLOT(on_color_select()));
        QObject::connect(hsGreen, SIGNAL(valueChanged(int)), QSliderDemoClass, SLOT(on_color_select()));
        QObject::connect(hsRed, SIGNAL(valueChanged(int)), QSliderDemoClass, SLOT(on_color_select()));
        QObject::connect(diContorl, SIGNAL(valueChanged(int)), QSliderDemoClass, SLOT(on_contorl_select()));

        QMetaObject::connectSlotsByName(QSliderDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QSliderDemoClass)
    {
        QSliderDemoClass->setWindowTitle(QApplication::translate("QSliderDemoClass", "QSliderDemo", Q_NULLPTR));
        label->setText(QApplication::translate("QSliderDemoClass", "Red", Q_NULLPTR));
        label_2->setText(QApplication::translate("QSliderDemoClass", "Green", Q_NULLPTR));
        label_3->setText(QApplication::translate("QSliderDemoClass", "Blue", Q_NULLPTR));
        label_4->setText(QApplication::translate("QSliderDemoClass", "Alpha", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QSliderDemoClass: public Ui_QSliderDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSLIDERDEMO_H
