/********************************************************************************
** Form generated from reading UI file 'CustomUnmodalDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMUNMODALDIALOG_H
#define UI_CUSTOMUNMODALDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomUnmodalDialogClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *vboxLayout;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem;
    QSlider *hsBlue;
    QSlider *hsRed;
    QSlider *hsGreen;
    QSlider *hsAlpha;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_3;

    void setupUi(QDialog *CustomUnmodalDialogClass)
    {
        if (CustomUnmodalDialogClass->objectName().isEmpty())
            CustomUnmodalDialogClass->setObjectName(QStringLiteral("CustomUnmodalDialogClass"));
        CustomUnmodalDialogClass->resize(326, 199);
        layoutWidget = new QWidget(CustomUnmodalDialogClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(230, 30, 77, 106));
        vboxLayout = new QVBoxLayout(layoutWidget);
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QStringLiteral("vboxLayout"));
        vboxLayout->setContentsMargins(0, 0, 0, 0);
        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        vboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));

        vboxLayout->addWidget(cancelButton);

        spacerItem = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout->addItem(spacerItem);

        hsBlue = new QSlider(CustomUnmodalDialogClass);
        hsBlue->setObjectName(QStringLiteral("hsBlue"));
        hsBlue->setGeometry(QRect(50, 120, 160, 19));
        hsBlue->setMaximum(255);
        hsBlue->setValue(34);
        hsBlue->setOrientation(Qt::Horizontal);
        hsBlue->setTickPosition(QSlider::TicksBelow);
        hsRed = new QSlider(CustomUnmodalDialogClass);
        hsRed->setObjectName(QStringLiteral("hsRed"));
        hsRed->setGeometry(QRect(50, 30, 160, 19));
        hsRed->setMaximum(255);
        hsRed->setValue(75);
        hsRed->setOrientation(Qt::Horizontal);
        hsRed->setTickPosition(QSlider::TicksBelow);
        hsGreen = new QSlider(CustomUnmodalDialogClass);
        hsGreen->setObjectName(QStringLiteral("hsGreen"));
        hsGreen->setGeometry(QRect(50, 70, 160, 19));
        hsGreen->setMaximum(255);
        hsGreen->setValue(67);
        hsGreen->setOrientation(Qt::Horizontal);
        hsGreen->setTickPosition(QSlider::TicksBelow);
        hsAlpha = new QSlider(CustomUnmodalDialogClass);
        hsAlpha->setObjectName(QStringLiteral("hsAlpha"));
        hsAlpha->setGeometry(QRect(50, 160, 160, 19));
        hsAlpha->setMaximum(255);
        hsAlpha->setValue(255);
        hsAlpha->setOrientation(Qt::Horizontal);
        hsAlpha->setTickPosition(QSlider::TicksBelow);
        label = new QLabel(CustomUnmodalDialogClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 31, 21));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_2 = new QLabel(CustomUnmodalDialogClass);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 31, 21));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4 = new QLabel(CustomUnmodalDialogClass);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 160, 31, 16));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_3 = new QLabel(CustomUnmodalDialogClass);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 110, 31, 21));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(CustomUnmodalDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), CustomUnmodalDialogClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), CustomUnmodalDialogClass, SLOT(reject()));
        QObject::connect(CustomUnmodalDialogClass, SIGNAL(accepted()), CustomUnmodalDialogClass, SLOT(close()));
        QObject::connect(CustomUnmodalDialogClass, SIGNAL(rejected()), CustomUnmodalDialogClass, SLOT(close()));

        QMetaObject::connectSlotsByName(CustomUnmodalDialogClass);
    } // setupUi

    void retranslateUi(QDialog *CustomUnmodalDialogClass)
    {
        CustomUnmodalDialogClass->setWindowTitle(QApplication::translate("CustomUnmodalDialogClass", "Dialog", Q_NULLPTR));
        okButton->setText(QApplication::translate("CustomUnmodalDialogClass", "\347\241\256\345\256\232", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("CustomUnmodalDialogClass", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("CustomUnmodalDialogClass", "Red", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomUnmodalDialogClass", "Green", Q_NULLPTR));
        label_4->setText(QApplication::translate("CustomUnmodalDialogClass", "Alpha", Q_NULLPTR));
        label_3->setText(QApplication::translate("CustomUnmodalDialogClass", "Blue", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomUnmodalDialogClass: public Ui_CustomUnmodalDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMUNMODALDIALOG_H
