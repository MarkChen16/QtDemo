/********************************************************************************
** Form generated from reading UI file 'MuliWindowDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULIWINDOWDEMO_H
#define UI_MULIWINDOWDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MuliWindowDemoClass
{
public:
    QAction *actEmbedWidget;
    QAction *actStandWidget;
    QAction *actEmbedMainWindow;
    QAction *actStandMainWindow;
    QAction *actQuit;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MuliWindowDemoClass)
    {
        if (MuliWindowDemoClass->objectName().isEmpty())
            MuliWindowDemoClass->setObjectName(QStringLiteral("MuliWindowDemoClass"));
        MuliWindowDemoClass->resize(600, 332);
        actEmbedWidget = new QAction(MuliWindowDemoClass);
        actEmbedWidget->setObjectName(QStringLiteral("actEmbedWidget"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MuliWindowDemo/Resources/IPML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actEmbedWidget->setIcon(icon);
        actStandWidget = new QAction(MuliWindowDemoClass);
        actStandWidget->setObjectName(QStringLiteral("actStandWidget"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MuliWindowDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStandWidget->setIcon(icon1);
        actEmbedMainWindow = new QAction(MuliWindowDemoClass);
        actEmbedMainWindow->setObjectName(QStringLiteral("actEmbedMainWindow"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MuliWindowDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actEmbedMainWindow->setIcon(icon2);
        actStandMainWindow = new QAction(MuliWindowDemoClass);
        actStandMainWindow->setObjectName(QStringLiteral("actStandMainWindow"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MuliWindowDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actStandMainWindow->setIcon(icon3);
        actQuit = new QAction(MuliWindowDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MuliWindowDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon4);
        centralWidget = new QWidget(MuliWindowDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 571, 231));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MuliWindowDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MuliWindowDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        MuliWindowDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MuliWindowDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MuliWindowDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MuliWindowDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MuliWindowDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actEmbedWidget);
        mainToolBar->addAction(actStandWidget);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actEmbedMainWindow);
        mainToolBar->addAction(actStandMainWindow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MuliWindowDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), MuliWindowDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(MuliWindowDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *MuliWindowDemoClass)
    {
        MuliWindowDemoClass->setWindowTitle(QApplication::translate("MuliWindowDemoClass", "MuliWindowDemo", Q_NULLPTR));
        actEmbedWidget->setText(QApplication::translate("MuliWindowDemoClass", "\345\265\214\345\205\245\345\274\217Widget", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEmbedWidget->setToolTip(QApplication::translate("MuliWindowDemoClass", "\345\265\214\345\205\245\345\274\217Widget", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStandWidget->setText(QApplication::translate("MuliWindowDemoClass", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStandWidget->setToolTip(QApplication::translate("MuliWindowDemoClass", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actEmbedMainWindow->setText(QApplication::translate("MuliWindowDemoClass", "\345\265\214\345\205\245MainWindow", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actEmbedMainWindow->setToolTip(QApplication::translate("MuliWindowDemoClass", "\345\265\214\345\205\245MainWindow", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actStandMainWindow->setText(QApplication::translate("MuliWindowDemoClass", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actStandMainWindow->setToolTip(QApplication::translate("MuliWindowDemoClass", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MuliWindowDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MuliWindowDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MuliWindowDemoClass", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MuliWindowDemoClass", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MuliWindowDemoClass: public Ui_MuliWindowDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULIWINDOWDEMO_H
