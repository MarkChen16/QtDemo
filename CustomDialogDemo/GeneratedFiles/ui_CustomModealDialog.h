/********************************************************************************
** Form generated from reading UI file 'CustomModealDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMMODEALDIALOG_H
#define UI_CUSTOMMODEALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomModealDialogClass
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacer;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *editName;
    QComboBox *cbNation;
    QSpinBox *sbScore;
    QRadioButton *rbBoy;
    QRadioButton *rbGril;

    void setupUi(QDialog *CustomModealDialogClass)
    {
        if (CustomModealDialogClass->objectName().isEmpty())
            CustomModealDialogClass->setObjectName(QStringLiteral("CustomModealDialogClass"));
        CustomModealDialogClass->resize(324, 200);
        layoutWidget = new QWidget(CustomModealDialogClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 150, 211, 33));
        hboxLayout = new QHBoxLayout(layoutWidget);
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        spacer = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacer);

        label = new QLabel(CustomModealDialogClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 41, 16));
        label_2 = new QLabel(CustomModealDialogClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 50, 41, 16));
        label_3 = new QLabel(CustomModealDialogClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 90, 41, 16));
        label_4 = new QLabel(CustomModealDialogClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 120, 41, 16));
        editName = new QLineEdit(CustomModealDialogClass);
        editName->setObjectName(QStringLiteral("editName"));
        editName->setGeometry(QRect(60, 20, 181, 20));
        cbNation = new QComboBox(CustomModealDialogClass);
        cbNation->setObjectName(QStringLiteral("cbNation"));
        cbNation->setGeometry(QRect(60, 86, 71, 20));
        cbNation->setEditable(true);
        sbScore = new QSpinBox(CustomModealDialogClass);
        sbScore->setObjectName(QStringLiteral("sbScore"));
        sbScore->setGeometry(QRect(60, 117, 71, 20));
        sbScore->setMaximum(100);
        sbScore->setSingleStep(5);
        rbBoy = new QRadioButton(CustomModealDialogClass);
        rbBoy->setObjectName(QStringLiteral("rbBoy"));
        rbBoy->setGeometry(QRect(60, 50, 41, 16));
        rbBoy->setChecked(true);
        rbGril = new QRadioButton(CustomModealDialogClass);
        rbGril->setObjectName(QStringLiteral("rbGril"));
        rbGril->setGeometry(QRect(120, 50, 41, 16));

        retranslateUi(CustomModealDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), CustomModealDialogClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), CustomModealDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(CustomModealDialogClass);
    } // setupUi

    void retranslateUi(QDialog *CustomModealDialogClass)
    {
        CustomModealDialogClass->setWindowTitle(QApplication::translate("CustomModealDialogClass", "Dialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("CustomModealDialogClass", "\344\277\235\345\255\230", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("CustomModealDialogClass", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("CustomModealDialogClass", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomModealDialogClass", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("CustomModealDialogClass", "\346\260\221\346\227\217\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("CustomModealDialogClass", "\345\210\206\346\225\260\357\274\232", Q_NULLPTR));
        cbNation->clear();
        cbNation->insertItems(0, QStringList()
         << QApplication::translate("CustomModealDialogClass", "\346\261\211\346\227\217", Q_NULLPTR)
         << QApplication::translate("CustomModealDialogClass", "\350\213\227\346\227\217", Q_NULLPTR)
         << QApplication::translate("CustomModealDialogClass", "\345\243\256\346\227\217", Q_NULLPTR)
         << QApplication::translate("CustomModealDialogClass", "\346\234\235\351\262\234\346\227\217", Q_NULLPTR)
        );
        cbNation->setCurrentText(QApplication::translate("CustomModealDialogClass", "\346\261\211\346\227\217", Q_NULLPTR));
        rbBoy->setText(QApplication::translate("CustomModealDialogClass", "\347\224\267", Q_NULLPTR));
        rbGril->setText(QApplication::translate("CustomModealDialogClass", "\345\245\263", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomModealDialogClass: public Ui_CustomModealDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMMODEALDIALOG_H
