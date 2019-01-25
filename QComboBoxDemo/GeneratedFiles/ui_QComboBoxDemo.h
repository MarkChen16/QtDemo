/********************************************************************************
** Form generated from reading UI file 'QComboBoxDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QCOMBOBOXDEMO_H
#define UI_QCOMBOBOXDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_QComboBoxDemoClass
{
public:
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *cbIcon;

    void setupUi(QDialog *QComboBoxDemoClass)
    {
        if (QComboBoxDemoClass->objectName().isEmpty())
            QComboBoxDemoClass->setObjectName(QStringLiteral("QComboBoxDemoClass"));
        QComboBoxDemoClass->resize(258, 173);
        comboBox = new QComboBox(QComboBoxDemoClass);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(40, 20, 181, 22));
        comboBox_2 = new QComboBox(QComboBoxDemoClass);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(40, 70, 181, 22));
        comboBox_2->setEditable(true);
        cbIcon = new QComboBox(QComboBoxDemoClass);
        cbIcon->setObjectName(QStringLiteral("cbIcon"));
        cbIcon->setGeometry(QRect(40, 120, 181, 22));

        retranslateUi(QComboBoxDemoClass);

        QMetaObject::connectSlotsByName(QComboBoxDemoClass);
    } // setupUi

    void retranslateUi(QDialog *QComboBoxDemoClass)
    {
        QComboBoxDemoClass->setWindowTitle(QApplication::translate("QComboBoxDemoClass", "QComboBoxDemo", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("QComboBoxDemoClass", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("QComboBoxDemoClass", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("QComboBoxDemoClass", "\345\271\277\345\267\236", Q_NULLPTR)
         << QApplication::translate("QComboBoxDemoClass", "\346\267\261\345\234\263", Q_NULLPTR)
        );
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("QComboBoxDemoClass", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("QComboBoxDemoClass", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("QComboBoxDemoClass", "\345\271\277\345\267\236", Q_NULLPTR)
         << QApplication::translate("QComboBoxDemoClass", "\346\267\261\345\234\263", Q_NULLPTR)
        );
    } // retranslateUi

};

namespace Ui {
    class QComboBoxDemoClass: public Ui_QComboBoxDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QCOMBOBOXDEMO_H
