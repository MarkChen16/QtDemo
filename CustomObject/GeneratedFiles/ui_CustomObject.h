/********************************************************************************
** Form generated from reading UI file 'CustomObject.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMOBJECT_H
#define UI_CUSTOMOBJECT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_CustomObjectClass
{
public:
    QLabel *label;
    QLabel *label_2;
    QSpinBox *sbBoyAge;
    QSpinBox *sbGrilAge;
    QPushButton *btnBoyInc;
    QPushButton *btnGrilInc;
    QPushButton *btnMateInfo;
    QPushButton *btnClearText;
    QTextEdit *txtInfo;

    void setupUi(QDialog *CustomObjectClass)
    {
        if (CustomObjectClass->objectName().isEmpty())
            CustomObjectClass->setObjectName(QStringLiteral("CustomObjectClass"));
        CustomObjectClass->resize(411, 400);
        label = new QLabel(CustomObjectClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 81, 16));
        label_2 = new QLabel(CustomObjectClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 81, 16));
        sbBoyAge = new QSpinBox(CustomObjectClass);
        sbBoyAge->setObjectName(QStringLiteral("sbBoyAge"));
        sbBoyAge->setGeometry(QRect(100, 10, 61, 22));
        sbGrilAge = new QSpinBox(CustomObjectClass);
        sbGrilAge->setObjectName(QStringLiteral("sbGrilAge"));
        sbGrilAge->setGeometry(QRect(100, 40, 61, 22));
        btnBoyInc = new QPushButton(CustomObjectClass);
        btnBoyInc->setObjectName(QStringLiteral("btnBoyInc"));
        btnBoyInc->setGeometry(QRect(180, 10, 101, 23));
        btnGrilInc = new QPushButton(CustomObjectClass);
        btnGrilInc->setObjectName(QStringLiteral("btnGrilInc"));
        btnGrilInc->setGeometry(QRect(180, 40, 101, 23));
        btnMateInfo = new QPushButton(CustomObjectClass);
        btnMateInfo->setObjectName(QStringLiteral("btnMateInfo"));
        btnMateInfo->setGeometry(QRect(290, 10, 111, 23));
        btnClearText = new QPushButton(CustomObjectClass);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));
        btnClearText->setGeometry(QRect(290, 40, 111, 23));
        txtInfo = new QTextEdit(CustomObjectClass);
        txtInfo->setObjectName(QStringLiteral("txtInfo"));
        txtInfo->setGeometry(QRect(10, 70, 391, 321));

        retranslateUi(CustomObjectClass);
        QObject::connect(btnClearText, SIGNAL(clicked()), txtInfo, SLOT(clear()));

        QMetaObject::connectSlotsByName(CustomObjectClass);
    } // setupUi

    void retranslateUi(QDialog *CustomObjectClass)
    {
        CustomObjectClass->setWindowTitle(QApplication::translate("CustomObjectClass", "CustomObject", Q_NULLPTR));
        label->setText(QApplication::translate("CustomObjectClass", "\350\256\276\347\275\256\347\224\267\347\224\237\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomObjectClass", "\350\256\276\347\275\256\345\245\263\347\224\237\345\271\264\351\276\204\357\274\232", Q_NULLPTR));
        btnBoyInc->setText(QApplication::translate("CustomObjectClass", "\347\224\267\347\224\237\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnGrilInc->setText(QApplication::translate("CustomObjectClass", "\345\245\263\347\224\237\351\225\277\345\244\247\344\270\200\345\262\201", Q_NULLPTR));
        btnMateInfo->setText(QApplication::translate("CustomObjectClass", "\347\261\273\347\232\204\345\205\203\345\257\271\350\261\241\344\277\241\346\201\257", Q_NULLPTR));
        btnClearText->setText(QApplication::translate("CustomObjectClass", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomObjectClass: public Ui_CustomObjectClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMOBJECT_H
