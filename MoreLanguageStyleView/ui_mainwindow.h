/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionClose;
    QAction *actionSysInfo;
    QAction *actionAbout;
    QWidget *centralWidget;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labLanguage;
    QPushButton *btnCN;
    QPushButton *btnEN;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labStypeSheet;
    QPushButton *btnCSS1;
    QPushButton *btnCSS2;
    QPushButton *btnClearCSS;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labSysCSS;
    QComboBox *cbSysCSS;
    QPushButton *btnSysCSS;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_A;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(547, 296);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Icon/SysIcon/MSN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Icon/SysIcon/DISTLSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Icon/SysIcon/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Icon/SysIcon/IPML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Icon/SysIcon/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon4);
        actionSysInfo = new QAction(MainWindow);
        actionSysInfo->setObjectName(QStringLiteral("actionSysInfo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Icon/SysIcon/POSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionSysInfo->setIcon(icon5);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Icon/SysIcon/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon6);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(30, 30, 481, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labLanguage = new QLabel(horizontalLayoutWidget);
        labLanguage->setObjectName(QStringLiteral("labLanguage"));
        labLanguage->setLayoutDirection(Qt::LeftToRight);
        labLanguage->setWordWrap(false);

        horizontalLayout->addWidget(labLanguage);

        btnCN = new QPushButton(horizontalLayoutWidget);
        btnCN->setObjectName(QStringLiteral("btnCN"));

        horizontalLayout->addWidget(btnCN);

        btnEN = new QPushButton(horizontalLayoutWidget);
        btnEN->setObjectName(QStringLiteral("btnEN"));

        horizontalLayout->addWidget(btnEN);

        horizontalLayoutWidget_2 = new QWidget(centralWidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(30, 80, 481, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labStypeSheet = new QLabel(horizontalLayoutWidget_2);
        labStypeSheet->setObjectName(QStringLiteral("labStypeSheet"));

        horizontalLayout_2->addWidget(labStypeSheet);

        btnCSS1 = new QPushButton(horizontalLayoutWidget_2);
        btnCSS1->setObjectName(QStringLiteral("btnCSS1"));

        horizontalLayout_2->addWidget(btnCSS1);

        btnCSS2 = new QPushButton(horizontalLayoutWidget_2);
        btnCSS2->setObjectName(QStringLiteral("btnCSS2"));

        horizontalLayout_2->addWidget(btnCSS2);

        btnClearCSS = new QPushButton(horizontalLayoutWidget_2);
        btnClearCSS->setObjectName(QStringLiteral("btnClearCSS"));

        horizontalLayout_2->addWidget(btnClearCSS);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(30, 130, 481, 31));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labSysCSS = new QLabel(horizontalLayoutWidget_3);
        labSysCSS->setObjectName(QStringLiteral("labSysCSS"));

        horizontalLayout_3->addWidget(labSysCSS);

        cbSysCSS = new QComboBox(horizontalLayoutWidget_3);
        cbSysCSS->setObjectName(QStringLiteral("cbSysCSS"));

        horizontalLayout_3->addWidget(cbSysCSS);

        btnSysCSS = new QPushButton(horizontalLayoutWidget_3);
        btnSysCSS->setObjectName(QStringLiteral("btnSysCSS"));

        horizontalLayout_3->addWidget(btnSysCSS);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 547, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_A = new QMenu(menuBar);
        menu_A->setObjectName(QStringLiteral("menu_A"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_A->menuAction());
        menu_F->addAction(actionNew);
        menu_F->addAction(actionOpen);
        menu_F->addAction(actionSave);
        menu_F->addSeparator();
        menu_F->addAction(actionClose);
        menu_A->addAction(actionSysInfo);
        menu_A->addSeparator();
        menu_A->addAction(actionAbout);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSysInfo);
        mainToolBar->addAction(actionAbout);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClose);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\345\244\232\350\257\255\350\250\200\346\240\267\345\274\217\347\225\214\351\235\242", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSave->setToolTip(QApplication::translate("MainWindow", "\344\277\235\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&Q)", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("MainWindow", "\345\205\263\351\227\255\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionSysInfo->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257(&I)...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSysInfo->setToolTip(QApplication::translate("MainWindow", "\347\263\273\347\273\237\344\277\241\346\201\257", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSysInfo->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionAbout->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\347\263\273\347\273\237(&A)...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("MainWindow", "\345\205\263\344\272\216\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        labLanguage->setText(QApplication::translate("MainWindow", "\347\263\273\347\273\237\350\257\255\350\250\200\357\274\232", Q_NULLPTR));
        btnCN->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242\344\270\272\344\270\255\346\226\207", Q_NULLPTR));
        btnEN->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242\344\270\272\350\213\261\346\226\207", Q_NULLPTR));
        labStypeSheet->setText(QApplication::translate("MainWindow", "\346\240\267\345\274\217\350\241\250\357\274\232", Q_NULLPTR));
        btnCSS1->setText(QApplication::translate("MainWindow", "\346\240\267\345\274\217\350\241\2501", Q_NULLPTR));
        btnCSS2->setText(QApplication::translate("MainWindow", "\346\240\267\345\274\217\350\241\2502", Q_NULLPTR));
        btnClearCSS->setText(QApplication::translate("MainWindow", "\346\270\205\351\231\244\346\240\267\345\274\217\350\241\250", Q_NULLPTR));
        labSysCSS->setText(QApplication::translate("MainWindow", "\345\206\205\347\275\256\346\240\267\345\274\217\350\241\250\357\274\232", Q_NULLPTR));
        btnSysCSS->setText(QApplication::translate("MainWindow", "\345\272\224\347\224\250\346\240\267\345\274\217\350\241\250", Q_NULLPTR));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_A->setTitle(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
