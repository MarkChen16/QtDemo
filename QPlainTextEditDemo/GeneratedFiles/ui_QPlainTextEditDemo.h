/********************************************************************************
** Form generated from reading UI file 'QPlainTextEditDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QPLAINTEXTEDITDEMO_H
#define UI_QPLAINTEXTEDITDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_QPlainTextEditDemoClass
{
public:
    QPlainTextEdit *ptEdit;
    QPushButton *btnAppend;
    QPushButton *btnReadLine;
    QPushButton *btnReadAll;
    QComboBox *cbLine;

    void setupUi(QDialog *QPlainTextEditDemoClass)
    {
        if (QPlainTextEditDemoClass->objectName().isEmpty())
            QPlainTextEditDemoClass->setObjectName(QStringLiteral("QPlainTextEditDemoClass"));
        QPlainTextEditDemoClass->resize(600, 400);
        ptEdit = new QPlainTextEdit(QPlainTextEditDemoClass);
        ptEdit->setObjectName(QStringLiteral("ptEdit"));
        ptEdit->setGeometry(QRect(10, 10, 581, 321));
        ptEdit->setBackgroundVisible(false);
        ptEdit->setCenterOnScroll(false);
        btnAppend = new QPushButton(QPlainTextEditDemoClass);
        btnAppend->setObjectName(QStringLiteral("btnAppend"));
        btnAppend->setGeometry(QRect(10, 350, 101, 41));
        btnReadLine = new QPushButton(QPlainTextEditDemoClass);
        btnReadLine->setObjectName(QStringLiteral("btnReadLine"));
        btnReadLine->setGeometry(QRect(120, 350, 101, 41));
        btnReadAll = new QPushButton(QPlainTextEditDemoClass);
        btnReadAll->setObjectName(QStringLiteral("btnReadAll"));
        btnReadAll->setGeometry(QRect(490, 350, 101, 41));
        cbLine = new QComboBox(QPlainTextEditDemoClass);
        cbLine->setObjectName(QStringLiteral("cbLine"));
        cbLine->setGeometry(QRect(240, 360, 231, 22));

        retranslateUi(QPlainTextEditDemoClass);

        QMetaObject::connectSlotsByName(QPlainTextEditDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QPlainTextEditDemoClass)
    {
        QPlainTextEditDemoClass->setWindowTitle(QApplication::translate("QPlainTextEditDemoClass", "QPlainTextEditDemo", Q_NULLPTR));
        ptEdit->setDocumentTitle(QString());
        ptEdit->setPlainText(QString());
        btnAppend->setText(QApplication::translate("QPlainTextEditDemoClass", "\345\242\236\345\212\240\344\270\200\350\241\214", Q_NULLPTR));
        btnReadLine->setText(QApplication::translate("QPlainTextEditDemoClass", "\351\200\220\350\241\214\350\257\273\345\217\226", Q_NULLPTR));
        btnReadAll->setText(QApplication::translate("QPlainTextEditDemoClass", "\345\205\250\351\203\250\350\257\273\345\217\226", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QPlainTextEditDemoClass: public Ui_QPlainTextEditDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QPLAINTEXTEDITDEMO_H
