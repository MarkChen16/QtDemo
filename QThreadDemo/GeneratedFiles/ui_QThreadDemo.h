/********************************************************************************
** Form generated from reading UI file 'QThreadDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHREADDEMO_H
#define UI_QTHREADDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QThreadDemoClass
{
public:
    QAction *actStart;
    QAction *actPauseResume;
    QAction *actAskForStop;
    QAction *actStop;
    QAction *actQuit;
    QAction *actShowCopy;
    QAction *actShowBuff;
    QAction *actShowHistory;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *lstDice;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *lstDicePush;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QThreadDemoClass)
    {
        if (QThreadDemoClass->objectName().isEmpty())
            QThreadDemoClass->setObjectName(QStringLiteral("QThreadDemoClass"));
        QThreadDemoClass->resize(805, 350);
        actStart = new QAction(QThreadDemoClass);
        actStart->setObjectName(QStringLiteral("actStart"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QThreadDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon);
        actPauseResume = new QAction(QThreadDemoClass);
        actPauseResume->setObjectName(QStringLiteral("actPauseResume"));
        actPauseResume->setCheckable(true);
        actPauseResume->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QThreadDemo/Resources/NOTEL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actPauseResume->setIcon(icon1);
        actAskForStop = new QAction(QThreadDemoClass);
        actAskForStop->setObjectName(QStringLiteral("actAskForStop"));
        actAskForStop->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QThreadDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAskForStop->setIcon(icon2);
        actStop = new QAction(QThreadDemoClass);
        actStop->setObjectName(QStringLiteral("actStop"));
        actStop->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QThreadDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon3);
        actQuit = new QAction(QThreadDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QThreadDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        actShowCopy = new QAction(QThreadDemoClass);
        actShowCopy->setObjectName(QStringLiteral("actShowCopy"));
        actShowCopy->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QThreadDemo/Resources/MSN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actShowCopy->setIcon(icon5);
        actShowBuff = new QAction(QThreadDemoClass);
        actShowBuff->setObjectName(QStringLiteral("actShowBuff"));
        actShowBuff->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QThreadDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actShowBuff->setIcon(icon6);
        actShowHistory = new QAction(QThreadDemoClass);
        actShowHistory->setObjectName(QStringLiteral("actShowHistory"));
        actShowHistory->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/QThreadDemo/Resources/ACTIVITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actShowHistory->setIcon(icon7);
        centralWidget = new QWidget(QThreadDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lstDice = new QListWidget(groupBox);
        lstDice->setObjectName(QStringLiteral("lstDice"));

        verticalLayout->addWidget(lstDice);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        lstDicePush = new QListWidget(groupBox_2);
        lstDicePush->setObjectName(QStringLiteral("lstDicePush"));

        verticalLayout_2->addWidget(lstDicePush);

        splitter->addWidget(groupBox_2);

        horizontalLayout->addWidget(splitter);

        QThreadDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QThreadDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QThreadDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actPauseResume);
        mainToolBar->addAction(actAskForStop);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actShowCopy);
        mainToolBar->addAction(actShowBuff);
        mainToolBar->addAction(actShowHistory);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QThreadDemoClass);

        QMetaObject::connectSlotsByName(QThreadDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QThreadDemoClass)
    {
        QThreadDemoClass->setWindowTitle(QApplication::translate("QThreadDemoClass", "QThreadDemo", Q_NULLPTR));
        actStart->setText(QApplication::translate("QThreadDemoClass", "\345\220\257\345\212\250\347\272\277\347\250\213", Q_NULLPTR));
        actPauseResume->setText(QApplication::translate("QThreadDemoClass", "\346\232\202\345\201\234\347\272\277\347\250\213", Q_NULLPTR));
        actAskForStop->setText(QApplication::translate("QThreadDemoClass", "\350\257\267\346\261\202\345\201\234\346\255\242", Q_NULLPTR));
        actStop->setText(QApplication::translate("QThreadDemoClass", "\345\201\234\346\255\242\347\272\277\347\250\213", Q_NULLPTR));
        actQuit->setText(QApplication::translate("QThreadDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
        actShowCopy->setText(QApplication::translate("QThreadDemoClass", "\346\230\276\347\244\272\345\211\257\346\234\254", Q_NULLPTR));
        actShowBuff->setText(QApplication::translate("QThreadDemoClass", "\346\230\276\347\244\272\347\274\223\345\255\230", Q_NULLPTR));
        actShowHistory->setText(QApplication::translate("QThreadDemoClass", "\346\230\276\347\244\272\345\216\206\345\217\262", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("QThreadDemoClass", "\351\252\260\345\255\220\347\273\223\346\236\234", Q_NULLPTR));
        label->setText(QApplication::translate("QThreadDemoClass", "\346\216\250\351\200\201\346\226\271\345\274\217\357\274\232\345\272\224\347\224\250\344\277\241\345\217\267\346\247\275", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QThreadDemoClass", "\351\252\260\345\255\220\347\273\223\346\236\234", Q_NULLPTR));
        label_2->setText(QApplication::translate("QThreadDemoClass", "\346\213\211\345\217\226\346\226\271\345\274\217\357\274\232\345\272\224\347\224\250qmutex\344\272\222\346\226\245\351\224\201\345\220\214\346\255\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QThreadDemoClass: public Ui_QThreadDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHREADDEMO_H
