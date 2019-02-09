/********************************************************************************
** Form generated from reading UI file 'StandardDialogDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STANDARDDIALOGDEMO_H
#define UI_STANDARDDIALOGDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StandardDialogDemoClass
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *btnOpenFile;
    QPushButton *btnOpenFiles;
    QPushButton *btnSaveFile;
    QPushButton *btnSelDir;
    QPushButton *OpenFileUrl;
    QWidget *tab_2;
    QPushButton *btnPickColor;
    QPlainTextEdit *ptShowColor;
    QWidget *tab_3;
    QPushButton *btnPickFont;
    QPlainTextEdit *ptShowFont;
    QWidget *tab_4;
    QPushButton *btnInputLine;
    QPushButton *btnInputInt;
    QPushButton *btnInputFloat;
    QPushButton *btnGetItem;
    QPushButton *btnInputLines;
    QPlainTextEdit *ptShowInput;
    QWidget *tab_5;
    QPushButton *btnInfoMsg;
    QPushButton *btnQuestMsg;
    QPushButton *btnWarningMsg;
    QPushButton *btnCriticalMsg;
    QPushButton *btnAboutMsg;
    QPushButton *btnAboutQtMsg;

    void setupUi(QWidget *StandardDialogDemoClass)
    {
        if (StandardDialogDemoClass->objectName().isEmpty())
            StandardDialogDemoClass->setObjectName(QStringLiteral("StandardDialogDemoClass"));
        StandardDialogDemoClass->resize(467, 323);
        horizontalLayout = new QHBoxLayout(StandardDialogDemoClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tabWidget = new QTabWidget(StandardDialogDemoClass);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        btnOpenFile = new QPushButton(tab);
        btnOpenFile->setObjectName(QStringLiteral("btnOpenFile"));
        btnOpenFile->setGeometry(QRect(20, 20, 131, 23));
        btnOpenFiles = new QPushButton(tab);
        btnOpenFiles->setObjectName(QStringLiteral("btnOpenFiles"));
        btnOpenFiles->setGeometry(QRect(160, 20, 131, 23));
        btnSaveFile = new QPushButton(tab);
        btnSaveFile->setObjectName(QStringLiteral("btnSaveFile"));
        btnSaveFile->setGeometry(QRect(20, 80, 131, 23));
        btnSelDir = new QPushButton(tab);
        btnSelDir->setObjectName(QStringLiteral("btnSelDir"));
        btnSelDir->setGeometry(QRect(20, 110, 131, 23));
        OpenFileUrl = new QPushButton(tab);
        OpenFileUrl->setObjectName(QStringLiteral("OpenFileUrl"));
        OpenFileUrl->setGeometry(QRect(20, 50, 191, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        btnPickColor = new QPushButton(tab_2);
        btnPickColor->setObjectName(QStringLiteral("btnPickColor"));
        btnPickColor->setGeometry(QRect(20, 20, 131, 23));
        ptShowColor = new QPlainTextEdit(tab_2);
        ptShowColor->setObjectName(QStringLiteral("ptShowColor"));
        ptShowColor->setGeometry(QRect(20, 50, 131, 101));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        ptShowColor->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        btnPickFont = new QPushButton(tab_3);
        btnPickFont->setObjectName(QStringLiteral("btnPickFont"));
        btnPickFont->setGeometry(QRect(20, 20, 131, 23));
        ptShowFont = new QPlainTextEdit(tab_3);
        ptShowFont->setObjectName(QStringLiteral("ptShowFont"));
        ptShowFont->setGeometry(QRect(20, 50, 131, 101));
        ptShowFont->setFont(font);
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        btnInputLine = new QPushButton(tab_4);
        btnInputLine->setObjectName(QStringLiteral("btnInputLine"));
        btnInputLine->setGeometry(QRect(20, 20, 131, 23));
        btnInputInt = new QPushButton(tab_4);
        btnInputInt->setObjectName(QStringLiteral("btnInputInt"));
        btnInputInt->setGeometry(QRect(20, 50, 131, 23));
        btnInputFloat = new QPushButton(tab_4);
        btnInputFloat->setObjectName(QStringLiteral("btnInputFloat"));
        btnInputFloat->setGeometry(QRect(160, 50, 131, 23));
        btnGetItem = new QPushButton(tab_4);
        btnGetItem->setObjectName(QStringLiteral("btnGetItem"));
        btnGetItem->setGeometry(QRect(20, 80, 131, 23));
        btnInputLines = new QPushButton(tab_4);
        btnInputLines->setObjectName(QStringLiteral("btnInputLines"));
        btnInputLines->setGeometry(QRect(160, 20, 131, 23));
        ptShowInput = new QPlainTextEdit(tab_4);
        ptShowInput->setObjectName(QStringLiteral("ptShowInput"));
        ptShowInput->setGeometry(QRect(20, 120, 271, 111));
        ptShowInput->setFont(font);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        btnInfoMsg = new QPushButton(tab_5);
        btnInfoMsg->setObjectName(QStringLiteral("btnInfoMsg"));
        btnInfoMsg->setGeometry(QRect(20, 20, 131, 23));
        btnQuestMsg = new QPushButton(tab_5);
        btnQuestMsg->setObjectName(QStringLiteral("btnQuestMsg"));
        btnQuestMsg->setGeometry(QRect(20, 50, 131, 23));
        btnWarningMsg = new QPushButton(tab_5);
        btnWarningMsg->setObjectName(QStringLiteral("btnWarningMsg"));
        btnWarningMsg->setGeometry(QRect(20, 80, 131, 23));
        btnCriticalMsg = new QPushButton(tab_5);
        btnCriticalMsg->setObjectName(QStringLiteral("btnCriticalMsg"));
        btnCriticalMsg->setGeometry(QRect(20, 110, 131, 23));
        btnAboutMsg = new QPushButton(tab_5);
        btnAboutMsg->setObjectName(QStringLiteral("btnAboutMsg"));
        btnAboutMsg->setGeometry(QRect(20, 140, 131, 23));
        btnAboutQtMsg = new QPushButton(tab_5);
        btnAboutQtMsg->setObjectName(QStringLiteral("btnAboutQtMsg"));
        btnAboutQtMsg->setGeometry(QRect(20, 170, 131, 23));
        tabWidget->addTab(tab_5, QString());

        horizontalLayout->addWidget(tabWidget);


        retranslateUi(StandardDialogDemoClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StandardDialogDemoClass);
    } // setupUi

    void retranslateUi(QWidget *StandardDialogDemoClass)
    {
        StandardDialogDemoClass->setWindowTitle(QApplication::translate("StandardDialogDemoClass", "StandardDialogDemo", Q_NULLPTR));
        btnOpenFile->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\346\211\223\345\274\200\344\270\200\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
        btnOpenFiles->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\346\211\223\345\274\200\345\244\232\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
        btnSaveFile->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\344\277\235\345\255\230\344\270\200\344\270\252\346\226\207\344\273\266", Q_NULLPTR));
        btnSelDir->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\344\270\200\344\270\252\345\267\262\346\234\211\347\232\204\347\233\256\345\275\225", Q_NULLPTR));
        OpenFileUrl->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\346\211\223\345\274\200\344\270\200\344\270\252\350\277\234\347\250\213\347\275\221\347\273\234\347\232\204\346\226\207\344\273\266", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("StandardDialogDemoClass", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnPickColor->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        ptShowColor->setPlainText(QApplication::translate("StandardDialogDemoClass", "123456", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("StandardDialogDemoClass", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnPickFont->setText(QApplication::translate("StandardDialogDemoClass", "\351\200\211\346\213\251\345\255\227\344\275\223", Q_NULLPTR));
        ptShowFont->setPlainText(QApplication::translate("StandardDialogDemoClass", "123456", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("StandardDialogDemoClass", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnInputLine->setText(QApplication::translate("StandardDialogDemoClass", "\350\276\223\345\205\245\345\215\225\350\241\214\346\226\207\346\234\254", Q_NULLPTR));
        btnInputInt->setText(QApplication::translate("StandardDialogDemoClass", "\350\276\223\345\205\245\346\225\264\346\225\260", Q_NULLPTR));
        btnInputFloat->setText(QApplication::translate("StandardDialogDemoClass", "\350\276\223\345\205\245\346\265\256\347\202\271\346\225\260", Q_NULLPTR));
        btnGetItem->setText(QApplication::translate("StandardDialogDemoClass", "\344\270\213\346\213\211\346\241\206\346\226\271\345\274\217\351\200\211\346\213\251\350\276\223\345\205\245", Q_NULLPTR));
        btnInputLines->setText(QApplication::translate("StandardDialogDemoClass", "\350\276\223\345\205\245\345\244\232\350\241\214\346\226\207\346\234\254", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("StandardDialogDemoClass", "\350\276\223\345\205\245\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnInfoMsg->setText(QApplication::translate("StandardDialogDemoClass", "\344\277\241\346\201\257\346\217\220\347\244\272\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnQuestMsg->setText(QApplication::translate("StandardDialogDemoClass", "\350\257\242\351\227\256\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnWarningMsg->setText(QApplication::translate("StandardDialogDemoClass", "\350\255\246\345\221\212\346\217\220\347\244\272\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnCriticalMsg->setText(QApplication::translate("StandardDialogDemoClass", "\351\224\231\350\257\257\346\217\220\347\244\272\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnAboutMsg->setText(QApplication::translate("StandardDialogDemoClass", "\345\205\263\344\272\216\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        btnAboutQtMsg->setText(QApplication::translate("StandardDialogDemoClass", "\345\205\263\344\272\216QT\345\257\271\350\257\235\346\241\206", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("StandardDialogDemoClass", "\346\266\210\346\201\257\346\241\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class StandardDialogDemoClass: public Ui_StandardDialogDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STANDARDDIALOGDEMO_H
