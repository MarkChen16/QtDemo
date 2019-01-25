/********************************************************************************
** Form generated from reading UI file 'QTimeDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTIMEDEMO_H
#define UI_QTIMEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTimeDemoClass
{
public:
    QPushButton *btnStart;
    QPushButton *btnStop;
    QProgressBar *pbTimer;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLCDNumber *lcdHour;
    QLabel *label_3;
    QLCDNumber *lcdMin;
    QLabel *label_4;
    QLCDNumber *lcdSec;
    QLCDNumber *lcdMs;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *QTimeDemoClass)
    {
        if (QTimeDemoClass->objectName().isEmpty())
            QTimeDemoClass->setObjectName(QStringLiteral("QTimeDemoClass"));
        QTimeDemoClass->resize(457, 274);
        btnStart = new QPushButton(QTimeDemoClass);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(120, 200, 81, 31));
        btnStop = new QPushButton(QTimeDemoClass);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(270, 200, 81, 31));
        pbTimer = new QProgressBar(QTimeDemoClass);
        pbTimer->setObjectName(QStringLiteral("pbTimer"));
        pbTimer->setGeometry(QRect(70, 140, 331, 23));
        pbTimer->setValue(24);
        horizontalLayoutWidget_2 = new QWidget(QTimeDemoClass);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(70, 70, 331, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lcdHour = new QLCDNumber(horizontalLayoutWidget_2);
        lcdHour->setObjectName(QStringLiteral("lcdHour"));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        lcdHour->setFont(font);
        lcdHour->setFrameShape(QFrame::NoFrame);
        lcdHour->setProperty("intValue", QVariant(12));

        horizontalLayout_3->addWidget(lcdHour);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        horizontalLayout_3->addWidget(label_3);

        lcdMin = new QLCDNumber(horizontalLayoutWidget_2);
        lcdMin->setObjectName(QStringLiteral("lcdMin"));
        lcdMin->setFrameShape(QFrame::NoFrame);
        lcdMin->setProperty("intValue", QVariant(43));

        horizontalLayout_3->addWidget(lcdMin);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_3->addWidget(label_4);

        lcdSec = new QLCDNumber(horizontalLayoutWidget_2);
        lcdSec->setObjectName(QStringLiteral("lcdSec"));
        lcdSec->setFrameShape(QFrame::NoFrame);
        lcdSec->setSegmentStyle(QLCDNumber::Filled);
        lcdSec->setProperty("intValue", QVariant(28));

        horizontalLayout_3->addWidget(lcdSec);

        lcdMs = new QLCDNumber(horizontalLayoutWidget_2);
        lcdMs->setObjectName(QStringLiteral("lcdMs"));
        lcdMs->setMaximumSize(QSize(16777215, 16777215));
        lcdMs->setFrameShape(QFrame::NoFrame);

        horizontalLayout_3->addWidget(lcdMs);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        retranslateUi(QTimeDemoClass);

        QMetaObject::connectSlotsByName(QTimeDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QTimeDemoClass)
    {
        QTimeDemoClass->setWindowTitle(QApplication::translate("QTimeDemoClass", "QTimeDemo", Q_NULLPTR));
        btnStart->setText(QApplication::translate("QTimeDemoClass", "Start", Q_NULLPTR));
        btnStop->setText(QApplication::translate("QTimeDemoClass", "Stop", Q_NULLPTR));
        label_3->setText(QApplication::translate("QTimeDemoClass", ":", Q_NULLPTR));
        label_4->setText(QApplication::translate("QTimeDemoClass", ":", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTimeDemoClass: public Ui_QTimeDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTIMEDEMO_H
