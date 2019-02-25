/********************************************************************************
** Form generated from reading UI file 'NetworkInfoDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NETWORKINFODEMO_H
#define UI_NETWORKINFODEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NetworkInfoDemoClass
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPushButton *btnGetHostInfo1;
    QPushButton *btnGetHostInfo2;
    QPushButton *btnGetHostInfo3;
    QCheckBox *cbOnlyIPv4;
    QListWidget *lstAddress;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnGetNetworkInterface;
    QListWidget *lstInterface;

    void setupUi(QDialog *NetworkInfoDemoClass)
    {
        if (NetworkInfoDemoClass->objectName().isEmpty())
            NetworkInfoDemoClass->setObjectName(QStringLiteral("NetworkInfoDemoClass"));
        NetworkInfoDemoClass->resize(957, 521);
        horizontalLayout = new QHBoxLayout(NetworkInfoDemoClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(NetworkInfoDemoClass);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnGetHostInfo1 = new QPushButton(groupBox);
        btnGetHostInfo1->setObjectName(QStringLiteral("btnGetHostInfo1"));

        verticalLayout->addWidget(btnGetHostInfo1);

        btnGetHostInfo2 = new QPushButton(groupBox);
        btnGetHostInfo2->setObjectName(QStringLiteral("btnGetHostInfo2"));

        verticalLayout->addWidget(btnGetHostInfo2);

        btnGetHostInfo3 = new QPushButton(groupBox);
        btnGetHostInfo3->setObjectName(QStringLiteral("btnGetHostInfo3"));

        verticalLayout->addWidget(btnGetHostInfo3);

        cbOnlyIPv4 = new QCheckBox(groupBox);
        cbOnlyIPv4->setObjectName(QStringLiteral("cbOnlyIPv4"));

        verticalLayout->addWidget(cbOnlyIPv4);

        lstAddress = new QListWidget(groupBox);
        lstAddress->setObjectName(QStringLiteral("lstAddress"));

        verticalLayout->addWidget(lstAddress);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btnGetNetworkInterface = new QPushButton(groupBox_2);
        btnGetNetworkInterface->setObjectName(QStringLiteral("btnGetNetworkInterface"));

        verticalLayout_2->addWidget(btnGetNetworkInterface);

        lstInterface = new QListWidget(groupBox_2);
        lstInterface->setObjectName(QStringLiteral("lstInterface"));

        verticalLayout_2->addWidget(lstInterface);

        splitter->addWidget(groupBox_2);

        horizontalLayout->addWidget(splitter);


        retranslateUi(NetworkInfoDemoClass);

        QMetaObject::connectSlotsByName(NetworkInfoDemoClass);
    } // setupUi

    void retranslateUi(QDialog *NetworkInfoDemoClass)
    {
        NetworkInfoDemoClass->setWindowTitle(QApplication::translate("NetworkInfoDemoClass", "NetworkInfoDemo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("NetworkInfoDemoClass", "GroupBox", Q_NULLPTR));
        btnGetHostInfo1->setText(QApplication::translate("NetworkInfoDemoClass", "\350\216\267\345\217\226\346\234\254\346\234\272\345\220\215\347\247\260\347\232\204IP\345\234\260\345\235\200", Q_NULLPTR));
        btnGetHostInfo2->setText(QApplication::translate("NetworkInfoDemoClass", "\350\216\267\345\217\226\346\234\254\346\234\272\345\220\215\347\247\260\347\232\204IP\345\234\260\345\235\200(\345\274\202\346\255\245)", Q_NULLPTR));
        btnGetHostInfo3->setText(QApplication::translate("NetworkInfoDemoClass", "\350\216\267\345\276\227www.baidu.com\345\237\237\345\220\215\347\232\204IP\345\234\260\345\235\200(\345\274\202\346\255\245)", Q_NULLPTR));
        cbOnlyIPv4->setText(QApplication::translate("NetworkInfoDemoClass", "\345\217\252\346\230\276\347\244\272IPv4", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("NetworkInfoDemoClass", "GroupBox", Q_NULLPTR));
        btnGetNetworkInterface->setText(QApplication::translate("NetworkInfoDemoClass", "\350\216\267\345\276\227\344\270\273\346\234\272\347\232\204\346\211\200\346\234\211\347\275\221\347\273\234\346\216\245\345\217\243(\351\200\202\351\205\215\345\231\250)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NetworkInfoDemoClass: public Ui_NetworkInfoDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NETWORKINFODEMO_H
