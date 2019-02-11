/********************************************************************************
** Form generated from reading UI file 'DocForm.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCFORM_H
#define UI_DOCFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DocFormClass
{
public:
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *DocFormClass)
    {
        if (DocFormClass->objectName().isEmpty())
            DocFormClass->setObjectName(QStringLiteral("DocFormClass"));
        DocFormClass->resize(501, 312);
        horizontalLayout = new QHBoxLayout(DocFormClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(DocFormClass);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        horizontalLayout->addWidget(plainTextEdit);


        retranslateUi(DocFormClass);

        QMetaObject::connectSlotsByName(DocFormClass);
    } // setupUi

    void retranslateUi(QWidget *DocFormClass)
    {
        DocFormClass->setWindowTitle(QApplication::translate("DocFormClass", "DocForm", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DocFormClass: public Ui_DocFormClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCFORM_H
