/********************************************************************************
** Form generated from reading UI file 'QDateTimeDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDATETIMEDEMO_H
#define UI_QDATETIMEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_QDateTimeDemoClass
{
public:
    QDateEdit *dEdit;
    QTimeEdit *tEdit;
    QDateTimeEdit *dtEdit;
    QCalendarWidget *cwNow;

    void setupUi(QDialog *QDateTimeDemoClass)
    {
        if (QDateTimeDemoClass->objectName().isEmpty())
            QDateTimeDemoClass->setObjectName(QStringLiteral("QDateTimeDemoClass"));
        QDateTimeDemoClass->resize(444, 405);
        dEdit = new QDateEdit(QDateTimeDemoClass);
        dEdit->setObjectName(QStringLiteral("dEdit"));
        dEdit->setGeometry(QRect(100, 90, 91, 22));
        tEdit = new QTimeEdit(QDateTimeDemoClass);
        tEdit->setObjectName(QStringLiteral("tEdit"));
        tEdit->setGeometry(QRect(200, 90, 91, 22));
        dtEdit = new QDateTimeEdit(QDateTimeDemoClass);
        dtEdit->setObjectName(QStringLiteral("dtEdit"));
        dtEdit->setGeometry(QRect(100, 50, 191, 22));
        dtEdit->setCalendarPopup(true);
        cwNow = new QCalendarWidget(QDateTimeDemoClass);
        cwNow->setObjectName(QStringLiteral("cwNow"));
        cwNow->setGeometry(QRect(100, 140, 251, 211));

        retranslateUi(QDateTimeDemoClass);

        QMetaObject::connectSlotsByName(QDateTimeDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QDateTimeDemoClass)
    {
        QDateTimeDemoClass->setWindowTitle(QApplication::translate("QDateTimeDemoClass", "QDateTimeDemo", Q_NULLPTR));
        dEdit->setDisplayFormat(QApplication::translate("QDateTimeDemoClass", "yyyy\345\271\264MM\346\234\210dd", Q_NULLPTR));
        tEdit->setDisplayFormat(QApplication::translate("QDateTimeDemoClass", "hh:mm:ss zzz", Q_NULLPTR));
        dtEdit->setDisplayFormat(QApplication::translate("QDateTimeDemoClass", "yyyy-M-d H:mm:ss z", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDateTimeDemoClass: public Ui_QDateTimeDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDATETIMEDEMO_H
