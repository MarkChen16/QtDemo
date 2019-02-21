/********************************************************************************
** Form generated from reading UI file 'GetPenDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETPENDIALOG_H
#define UI_GETPENDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <qwlabel.hpp>

QT_BEGIN_NAMESPACE

class Ui_GetPenDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QSpacerItem *spacerItem;
    QGroupBox *groupBox;
    QLabel *label;
    QComboBox *cbStyle;
    QLabel *label_2;
    QLabel *label_3;
    QSpinBox *sbWidth;
    QPushButton *btnColor;
    QWLabel *labColor;

    void setupUi(QDialog *GetPenDialog)
    {
        if (GetPenDialog->objectName().isEmpty())
            GetPenDialog->setObjectName(QStringLiteral("GetPenDialog"));
        GetPenDialog->resize(391, 152);
        layoutWidget = new QWidget(GetPenDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(300, 20, 77, 106));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setContentsMargins(11, 11, 11, 11);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        btnOk = new QPushButton(layoutWidget);
        btnOk->setObjectName(QStringLiteral("btnOk"));

        vboxLayout->addWidget(btnOk);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        vboxLayout->addWidget(btnCancel);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        groupBox = new QGroupBox(GetPenDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 271, 131));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 54, 21));
        cbStyle = new QComboBox(groupBox);
        cbStyle->setObjectName(QStringLiteral("cbStyle"));
        cbStyle->setGeometry(QRect(80, 30, 161, 22));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 54, 21));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 54, 21));
        sbWidth = new QSpinBox(groupBox);
        sbWidth->setObjectName(QStringLiteral("sbWidth"));
        sbWidth->setGeometry(QRect(80, 60, 161, 22));
        sbWidth->setValue(1);
        btnColor = new QPushButton(groupBox);
        btnColor->setObjectName(QStringLiteral("btnColor"));
        btnColor->setGeometry(QRect(210, 90, 31, 23));
        labColor = new QWLabel(groupBox);
        labColor->setObjectName(QStringLiteral("labColor"));
        labColor->setGeometry(QRect(80, 90, 121, 21));

        retranslateUi(GetPenDialog);
        QObject::connect(btnOk, SIGNAL(clicked()), GetPenDialog, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), GetPenDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(GetPenDialog);
    } // setupUi

    void retranslateUi(QDialog *GetPenDialog)
    {
        GetPenDialog->setWindowTitle(QApplication::translate("GetPenDialog", "GetPenDialog", Q_NULLPTR));
        btnOk->setText(QApplication::translate("GetPenDialog", "\347\241\256\345\256\232(&O)", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("GetPenDialog", "\345\217\226\346\266\210(&C)", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("GetPenDialog", "Pen\350\256\276\347\275\256", Q_NULLPTR));
        label->setText(QApplication::translate("GetPenDialog", "\347\272\277  \345\236\213", Q_NULLPTR));
        cbStyle->clear();
        cbStyle->insertItems(0, QStringList()
         << QApplication::translate("GetPenDialog", "NoPen", Q_NULLPTR)
         << QApplication::translate("GetPenDialog", "SolidLine", Q_NULLPTR)
         << QApplication::translate("GetPenDialog", "DashLine", Q_NULLPTR)
         << QApplication::translate("GetPenDialog", "DotLine", Q_NULLPTR)
         << QApplication::translate("GetPenDialog", "DashDotLine", Q_NULLPTR)
         << QApplication::translate("GetPenDialog", "DashDotDotLine", Q_NULLPTR)
         << QApplication::translate("GetPenDialog", "CustomDashLine", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("GetPenDialog", "\347\272\277  \345\256\275", Q_NULLPTR));
        label_3->setText(QApplication::translate("GetPenDialog", "\351\242\234  \350\211\262", Q_NULLPTR));
        btnColor->setText(QApplication::translate("GetPenDialog", "...", Q_NULLPTR));
        labColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class GetPenDialog: public Ui_GetPenDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETPENDIALOG_H
