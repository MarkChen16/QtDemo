/********************************************************************************
** Form generated from reading UI file 'QStringListModelDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSTRINGLISTMODELDEMO_H
#define UI_QSTRINGLISTMODELDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QStringListModelDemoClass
{
public:
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnInit;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnInsert;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnDel;
    QPushButton *btnClear;
    QListView *lvCity;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPushButton *btnClearText;
    QPushButton *btnShowData;
    QPlainTextEdit *ptData;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QLabel *labState;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QStringListModelDemoClass)
    {
        if (QStringListModelDemoClass->objectName().isEmpty())
            QStringListModelDemoClass->setObjectName(QStringLiteral("QStringListModelDemoClass"));
        QStringListModelDemoClass->resize(644, 443);
        verticalLayout_2 = new QVBoxLayout(QStringListModelDemoClass);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        splitter = new QSplitter(QStringListModelDemoClass);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout_3 = new QVBoxLayout(groupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btnInit = new QPushButton(groupBox);
        btnInit->setObjectName(QStringLiteral("btnInit"));

        verticalLayout_3->addWidget(btnInit);

        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));

        horizontalLayout->addWidget(btnAdd);

        btnInsert = new QPushButton(frame);
        btnInsert->setObjectName(QStringLiteral("btnInsert"));

        horizontalLayout->addWidget(btnInsert);


        verticalLayout_3->addWidget(frame);

        frame_2 = new QFrame(groupBox);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnDel = new QPushButton(frame_2);
        btnDel->setObjectName(QStringLiteral("btnDel"));

        horizontalLayout_2->addWidget(btnDel);

        btnClear = new QPushButton(frame_2);
        btnClear->setObjectName(QStringLiteral("btnClear"));

        horizontalLayout_2->addWidget(btnClear);


        verticalLayout_3->addWidget(frame_2);

        lvCity = new QListView(groupBox);
        lvCity->setObjectName(QStringLiteral("lvCity"));

        verticalLayout_3->addWidget(lvCity);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnClearText = new QPushButton(groupBox_2);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));

        verticalLayout->addWidget(btnClearText);

        btnShowData = new QPushButton(groupBox_2);
        btnShowData->setObjectName(QStringLiteral("btnShowData"));

        verticalLayout->addWidget(btnShowData);

        ptData = new QPlainTextEdit(groupBox_2);
        ptData->setObjectName(QStringLiteral("ptData"));

        verticalLayout->addWidget(ptData);

        splitter->addWidget(groupBox_2);

        verticalLayout_2->addWidget(splitter);

        groupBox_3 = new QGroupBox(QStringListModelDemoClass);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMaximumSize(QSize(16777215, 50));
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        labState = new QLabel(groupBox_3);
        labState->setObjectName(QStringLiteral("labState"));

        horizontalLayout_3->addWidget(labState);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(groupBox_3);


        retranslateUi(QStringListModelDemoClass);

        QMetaObject::connectSlotsByName(QStringListModelDemoClass);
    } // setupUi

    void retranslateUi(QWidget *QStringListModelDemoClass)
    {
        QStringListModelDemoClass->setWindowTitle(QApplication::translate("QStringListModelDemoClass", "QStringListModelDemo", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QStringListModelDemoClass", "QListView", Q_NULLPTR));
        btnInit->setText(QApplication::translate("QStringListModelDemoClass", "\346\201\242\345\244\215\345\210\227\350\241\250", Q_NULLPTR));
        btnAdd->setText(QApplication::translate("QStringListModelDemoClass", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
        btnInsert->setText(QApplication::translate("QStringListModelDemoClass", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
        btnDel->setText(QApplication::translate("QStringListModelDemoClass", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
        btnClear->setText(QApplication::translate("QStringListModelDemoClass", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QStringListModelDemoClass", "QPlainTextEdit", Q_NULLPTR));
        btnClearText->setText(QApplication::translate("QStringListModelDemoClass", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
        btnShowData->setText(QApplication::translate("QStringListModelDemoClass", "\346\230\276\347\244\272\346\225\260\346\215\256\346\250\241\345\236\213\347\232\204StringList", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        labState->setText(QApplication::translate("QStringListModelDemoClass", "\345\275\223\345\211\215\351\241\271\357\274\232row = 1, col = 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QStringListModelDemoClass: public Ui_QStringListModelDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSTRINGLISTMODELDEMO_H
