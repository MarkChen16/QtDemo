/********************************************************************************
** Form generated from reading UI file 'HelloWorldDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLDDIALOG_H
#define UI_HELLOWORLDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorldDialogClass
{
public:
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QCheckBox *cb3;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *rb1;
    QRadioButton *rb2;
    QRadioButton *rb3;
    QTextBrowser *tbHello;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnCancel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btnQuit;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;

    void setupUi(QDialog *HelloWorldDialogClass)
    {
        if (HelloWorldDialogClass->objectName().isEmpty())
            HelloWorldDialogClass->setObjectName(QStringLiteral("HelloWorldDialogClass"));
        HelloWorldDialogClass->resize(423, 332);
        groupBox = new QGroupBox(HelloWorldDialogClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 401, 51));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        cb1 = new QCheckBox(groupBox);
        cb1->setObjectName(QStringLiteral("cb1"));
        cb1->setChecked(true);

        horizontalLayout->addWidget(cb1);

        cb2 = new QCheckBox(groupBox);
        cb2->setObjectName(QStringLiteral("cb2"));
        cb2->setChecked(true);

        horizontalLayout->addWidget(cb2);

        cb3 = new QCheckBox(groupBox);
        cb3->setObjectName(QStringLiteral("cb3"));

        horizontalLayout->addWidget(cb3);

        groupBox_2 = new QGroupBox(HelloWorldDialogClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 70, 401, 51));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        rb1 = new QRadioButton(groupBox_2);
        rb1->setObjectName(QStringLiteral("rb1"));

        horizontalLayout_2->addWidget(rb1);

        rb2 = new QRadioButton(groupBox_2);
        rb2->setObjectName(QStringLiteral("rb2"));

        horizontalLayout_2->addWidget(rb2);

        rb3 = new QRadioButton(groupBox_2);
        rb3->setObjectName(QStringLiteral("rb3"));
        rb3->setChecked(true);

        horizontalLayout_2->addWidget(rb3);

        tbHello = new QTextBrowser(HelloWorldDialogClass);
        tbHello->setObjectName(QStringLiteral("tbHello"));
        tbHello->setGeometry(QRect(10, 150, 401, 111));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        tbHello->setFont(font);
        tbHello->setReadOnly(false);
        horizontalLayoutWidget = new QWidget(HelloWorldDialogClass);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 270, 401, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(horizontalLayoutWidget);
        btnOK->setObjectName(QStringLiteral("btnOK"));

        horizontalLayout_3->addWidget(btnOK);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnCancel = new QPushButton(horizontalLayoutWidget);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btnQuit = new QPushButton(horizontalLayoutWidget);
        btnQuit->setObjectName(QStringLiteral("btnQuit"));

        horizontalLayout_3->addWidget(btnQuit);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label = new QLabel(HelloWorldDialogClass);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 130, 91, 16));
#ifndef QT_NO_SHORTCUT
        label->setBuddy(tbHello);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(cb1, cb2);
        QWidget::setTabOrder(cb2, cb3);
        QWidget::setTabOrder(cb3, rb1);
        QWidget::setTabOrder(rb1, rb2);
        QWidget::setTabOrder(rb2, rb3);
        QWidget::setTabOrder(rb3, tbHello);
        QWidget::setTabOrder(tbHello, btnOK);
        QWidget::setTabOrder(btnOK, btnCancel);
        QWidget::setTabOrder(btnCancel, btnQuit);

        retranslateUi(HelloWorldDialogClass);
        QObject::connect(btnQuit, SIGNAL(clicked()), HelloWorldDialogClass, SLOT(close()));
        QObject::connect(btnCancel, SIGNAL(clicked()), HelloWorldDialogClass, SLOT(reject()));
        QObject::connect(btnOK, SIGNAL(clicked()), HelloWorldDialogClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(HelloWorldDialogClass);
    } // setupUi

    void retranslateUi(QDialog *HelloWorldDialogClass)
    {
        HelloWorldDialogClass->setWindowTitle(QApplication::translate("HelloWorldDialogClass", "\350\207\252\345\212\250\345\270\203\345\261\200\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("HelloWorldDialogClass", "\346\240\267\345\274\217", Q_NULLPTR));
        cb1->setText(QApplication::translate("HelloWorldDialogClass", "Underline", Q_NULLPTR));
        cb2->setText(QApplication::translate("HelloWorldDialogClass", "Italic", Q_NULLPTR));
        cb3->setText(QApplication::translate("HelloWorldDialogClass", "Bold", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("HelloWorldDialogClass", "\351\242\234\350\211\262", Q_NULLPTR));
        rb1->setText(QApplication::translate("HelloWorldDialogClass", "Black", Q_NULLPTR));
        rb2->setText(QApplication::translate("HelloWorldDialogClass", "Red", Q_NULLPTR));
        rb3->setText(QApplication::translate("HelloWorldDialogClass", "Blue", Q_NULLPTR));
        tbHello->setDocumentTitle(QString());
        tbHello->setPlaceholderText(QApplication::translate("HelloWorldDialogClass", "Hello World\357\274\201", Q_NULLPTR));
        btnOK->setText(QApplication::translate("HelloWorldDialogClass", "\347\241\256\345\256\232", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("HelloWorldDialogClass", "\345\217\226\346\266\210", Q_NULLPTR));
        btnQuit->setText(QApplication::translate("HelloWorldDialogClass", "\351\200\200\345\207\272", Q_NULLPTR));
        label->setText(QApplication::translate("HelloWorldDialogClass", "\346\226\207\346\234\254\346\225\210\346\236\234(&T)\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelloWorldDialogClass: public Ui_HelloWorldDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLDDIALOG_H
