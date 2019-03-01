/********************************************************************************
** Form generated from reading UI file 'UdpDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UDPDEMO_H
#define UI_UDPDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UdpDemoClass
{
public:
    QAction *actBind;
    QAction *actUnbind;
    QAction *actClear;
    QAction *actQuit;
    QAction *actJoinGroup;
    QAction *actLeaveGroup;
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *sbBindPort;
    QLabel *label_2;
    QComboBox *cbHostAddr;
    QLabel *label_3;
    QSpinBox *sbHostPort;
    QLabel *label_5;
    QComboBox *cbMulticastAddr;
    QLabel *label_6;
    QSpinBox *sbMulticastPort;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *txtMsg;
    QPushButton *btnSendMsg;
    QPushButton *btnBroadCast;
    QPushButton *btnMulticast;
    QSpacerItem *horizontalSpacer_2;
    QListWidget *lstMsg;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *UdpDemoClass)
    {
        if (UdpDemoClass->objectName().isEmpty())
            UdpDemoClass->setObjectName(QStringLiteral("UdpDemoClass"));
        UdpDemoClass->resize(840, 357);
        actBind = new QAction(UdpDemoClass);
        actBind->setObjectName(QStringLiteral("actBind"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/UdpDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actBind->setIcon(icon);
        actUnbind = new QAction(UdpDemoClass);
        actUnbind->setObjectName(QStringLiteral("actUnbind"));
        actUnbind->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/UdpDemo/Resources/ACTIVITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actUnbind->setIcon(icon1);
        actClear = new QAction(UdpDemoClass);
        actClear->setObjectName(QStringLiteral("actClear"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/UdpDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon2);
        actQuit = new QAction(UdpDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/UdpDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon3);
        actJoinGroup = new QAction(UdpDemoClass);
        actJoinGroup->setObjectName(QStringLiteral("actJoinGroup"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/UdpDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actJoinGroup->setIcon(icon4);
        actLeaveGroup = new QAction(UdpDemoClass);
        actLeaveGroup->setObjectName(QStringLiteral("actLeaveGroup"));
        actLeaveGroup->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/UdpDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actLeaveGroup->setIcon(icon5);
        centralWidget = new QWidget(UdpDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 811, 307));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        sbBindPort = new QSpinBox(frame);
        sbBindPort->setObjectName(QStringLiteral("sbBindPort"));
        sbBindPort->setMinimumSize(QSize(50, 0));
        sbBindPort->setMaximum(100000);
        sbBindPort->setValue(1200);

        horizontalLayout->addWidget(sbBindPort);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        cbHostAddr = new QComboBox(frame);
        cbHostAddr->setObjectName(QStringLiteral("cbHostAddr"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbHostAddr->sizePolicy().hasHeightForWidth());
        cbHostAddr->setSizePolicy(sizePolicy);
        cbHostAddr->setMinimumSize(QSize(100, 0));
        cbHostAddr->setEditable(true);

        horizontalLayout->addWidget(cbHostAddr);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        sbHostPort = new QSpinBox(frame);
        sbHostPort->setObjectName(QStringLiteral("sbHostPort"));
        sbHostPort->setMinimumSize(QSize(50, 0));
        sbHostPort->setMaximum(100000);
        sbHostPort->setValue(1201);

        horizontalLayout->addWidget(sbHostPort);

        label_5 = new QLabel(frame);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        cbMulticastAddr = new QComboBox(frame);
        cbMulticastAddr->setObjectName(QStringLiteral("cbMulticastAddr"));
        sizePolicy.setHeightForWidth(cbMulticastAddr->sizePolicy().hasHeightForWidth());
        cbMulticastAddr->setSizePolicy(sizePolicy);
        cbMulticastAddr->setMinimumSize(QSize(100, 0));
        cbMulticastAddr->setEditable(true);

        horizontalLayout->addWidget(cbMulticastAddr);

        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout->addWidget(label_6);

        sbMulticastPort = new QSpinBox(frame);
        sbMulticastPort->setObjectName(QStringLiteral("sbMulticastPort"));
        sbMulticastPort->setMinimumSize(QSize(50, 0));
        sbMulticastPort->setMaximum(100000);
        sbMulticastPort->setValue(35566);

        horizontalLayout->addWidget(sbMulticastPort);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Panel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        txtMsg = new QLineEdit(frame_2);
        txtMsg->setObjectName(QStringLiteral("txtMsg"));
        sizePolicy.setHeightForWidth(txtMsg->sizePolicy().hasHeightForWidth());
        txtMsg->setSizePolicy(sizePolicy);
        txtMsg->setMinimumSize(QSize(300, 0));

        horizontalLayout_2->addWidget(txtMsg);

        btnSendMsg = new QPushButton(frame_2);
        btnSendMsg->setObjectName(QStringLiteral("btnSendMsg"));
        btnSendMsg->setEnabled(false);

        horizontalLayout_2->addWidget(btnSendMsg);

        btnBroadCast = new QPushButton(frame_2);
        btnBroadCast->setObjectName(QStringLiteral("btnBroadCast"));
        btnBroadCast->setEnabled(false);

        horizontalLayout_2->addWidget(btnBroadCast);

        btnMulticast = new QPushButton(frame_2);
        btnMulticast->setObjectName(QStringLiteral("btnMulticast"));
        btnMulticast->setEnabled(false);

        horizontalLayout_2->addWidget(btnMulticast);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(frame_2);

        lstMsg = new QListWidget(groupBox);
        lstMsg->setObjectName(QStringLiteral("lstMsg"));

        verticalLayout->addWidget(lstMsg);

        UdpDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(UdpDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        UdpDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(UdpDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        UdpDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actBind);
        mainToolBar->addAction(actUnbind);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actJoinGroup);
        mainToolBar->addAction(actLeaveGroup);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(UdpDemoClass);

        QMetaObject::connectSlotsByName(UdpDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *UdpDemoClass)
    {
        UdpDemoClass->setWindowTitle(QApplication::translate("UdpDemoClass", "UdpDemo", Q_NULLPTR));
        actBind->setText(QApplication::translate("UdpDemoClass", "\347\273\221\345\256\232\347\253\257\345\217\243", Q_NULLPTR));
        actUnbind->setText(QApplication::translate("UdpDemoClass", "\350\247\243\347\273\221\347\253\257\345\217\243", Q_NULLPTR));
        actClear->setText(QApplication::translate("UdpDemoClass", "\346\270\205\347\251\272\346\212\245\346\226\207", Q_NULLPTR));
        actQuit->setText(QApplication::translate("UdpDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
        actJoinGroup->setText(QApplication::translate("UdpDemoClass", "\345\212\240\345\205\245\347\273\204\346\222\255", Q_NULLPTR));
        actLeaveGroup->setText(QApplication::translate("UdpDemoClass", "\351\200\200\345\207\272\347\273\204\346\222\255", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("UdpDemoClass", "\347\273\221\345\256\232\347\253\257\345\217\243", Q_NULLPTR));
        label_2->setText(QApplication::translate("UdpDemoClass", "\347\233\256\346\240\207\345\234\260\345\235\200", Q_NULLPTR));
        cbHostAddr->clear();
        cbHostAddr->insertItems(0, QStringList()
         << QApplication::translate("UdpDemoClass", "127.0.0.1", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("UdpDemoClass", "\347\233\256\346\240\207\347\253\257\345\217\243", Q_NULLPTR));
        label_5->setText(QApplication::translate("UdpDemoClass", "\347\273\204\346\222\255\345\234\260\345\235\200", Q_NULLPTR));
        cbMulticastAddr->clear();
        cbMulticastAddr->insertItems(0, QStringList()
         << QApplication::translate("UdpDemoClass", "127.0.0.1", Q_NULLPTR)
        );
        cbMulticastAddr->setCurrentText(QApplication::translate("UdpDemoClass", "239.0.0.100", Q_NULLPTR));
        label_6->setText(QApplication::translate("UdpDemoClass", "\347\273\204\346\222\255\347\253\257\345\217\243", Q_NULLPTR));
        label_4->setText(QApplication::translate("UdpDemoClass", "\346\266\210\346\201\257\345\206\205\345\256\271", Q_NULLPTR));
        btnSendMsg->setText(QApplication::translate("UdpDemoClass", "\345\217\221\351\200\201\346\266\210\346\201\257", Q_NULLPTR));
        btnBroadCast->setText(QApplication::translate("UdpDemoClass", "\345\271\277\346\222\255\346\266\210\346\201\257", Q_NULLPTR));
        btnMulticast->setText(QApplication::translate("UdpDemoClass", "\347\273\204\346\222\255\346\266\210\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class UdpDemoClass: public Ui_UdpDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UDPDEMO_H
