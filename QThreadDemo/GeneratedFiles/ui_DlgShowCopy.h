/********************************************************************************
** Form generated from reading UI file 'DlgShowCopy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGSHOWCOPY_H
#define UI_DLGSHOWCOPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DlgShowCopy
{
public:
    QVBoxLayout *verticalLayout;
    QListWidget *lstDice;

    void setupUi(QWidget *DlgShowCopy)
    {
        if (DlgShowCopy->objectName().isEmpty())
            DlgShowCopy->setObjectName(QStringLiteral("DlgShowCopy"));
        DlgShowCopy->resize(518, 329);
        verticalLayout = new QVBoxLayout(DlgShowCopy);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lstDice = new QListWidget(DlgShowCopy);
        lstDice->setObjectName(QStringLiteral("lstDice"));

        verticalLayout->addWidget(lstDice);


        retranslateUi(DlgShowCopy);

        QMetaObject::connectSlotsByName(DlgShowCopy);
    } // setupUi

    void retranslateUi(QWidget *DlgShowCopy)
    {
        DlgShowCopy->setWindowTitle(QApplication::translate("DlgShowCopy", "DlgShowCopy", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DlgShowCopy: public Ui_DlgShowCopy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGSHOWCOPY_H
