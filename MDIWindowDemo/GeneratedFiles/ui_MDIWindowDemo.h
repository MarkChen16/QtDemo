/********************************************************************************
** Form generated from reading UI file 'MDIWindowDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDIWINDOWDEMO_H
#define UI_MDIWINDOWDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MDIWindowDemoClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClear;
    QAction *actionMDIMode;
    QAction *actionCascading;
    QAction *actionTile;
    QAction *actionCloseAll;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MDIWindowDemoClass)
    {
        if (MDIWindowDemoClass->objectName().isEmpty())
            MDIWindowDemoClass->setObjectName(QStringLiteral("MDIWindowDemoClass"));
        MDIWindowDemoClass->resize(678, 427);
        actionNew = new QAction(MDIWindowDemoClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MDIWindowDemo/Resources/CONTACTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MDIWindowDemoClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MDIWindowDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionClose = new QAction(MDIWindowDemoClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MDIWindowDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon2);
        actionCut = new QAction(MDIWindowDemoClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        actionCut->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/MDIWindowDemo/Resources/POSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(MDIWindowDemoClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        actionCopy->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/MDIWindowDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MDIWindowDemoClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/MDIWindowDemo/Resources/RSSITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        actionClear = new QAction(MDIWindowDemoClass);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/MDIWindowDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon6);
        actionMDIMode = new QAction(MDIWindowDemoClass);
        actionMDIMode->setObjectName(QStringLiteral("actionMDIMode"));
        actionMDIMode->setCheckable(true);
        actionMDIMode->setChecked(true);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/MDIWindowDemo/Resources/TASKREQL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionMDIMode->setIcon(icon7);
        actionCascading = new QAction(MDIWindowDemoClass);
        actionCascading->setObjectName(QStringLiteral("actionCascading"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/MDIWindowDemo/Resources/RESENDL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionCascading->setIcon(icon8);
        actionTile = new QAction(MDIWindowDemoClass);
        actionTile->setObjectName(QStringLiteral("actionTile"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/MDIWindowDemo/Resources/ACTIVITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionTile->setIcon(icon9);
        actionCloseAll = new QAction(MDIWindowDemoClass);
        actionCloseAll->setObjectName(QStringLiteral("actionCloseAll"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/MDIWindowDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionCloseAll->setIcon(icon10);
        centralWidget = new QWidget(MDIWindowDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        horizontalLayout->addWidget(mdiArea);

        MDIWindowDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MDIWindowDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 678, 23));
        MDIWindowDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MDIWindowDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MDIWindowDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MDIWindowDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MDIWindowDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionCloseAll);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionClear);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionMDIMode);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCascading);
        mainToolBar->addAction(actionTile);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClose);

        retranslateUi(MDIWindowDemoClass);
        QObject::connect(actionClose, SIGNAL(triggered()), MDIWindowDemoClass, SLOT(close()));
        QObject::connect(actionCloseAll, SIGNAL(triggered()), mdiArea, SLOT(closeAllSubWindows()));

        QMetaObject::connectSlotsByName(MDIWindowDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *MDIWindowDemoClass)
    {
        MDIWindowDemoClass->setWindowTitle(QApplication::translate("MDIWindowDemoClass", "MDIWindowDemo", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MDIWindowDemoClass", "\346\226\260\345\273\272...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("MDIWindowDemoClass", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("MDIWindowDemoClass", "\346\211\223\345\274\200...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("MDIWindowDemoClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("MDIWindowDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("MDIWindowDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("MDIWindowDemoClass", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("MDIWindowDemoClass", "\345\211\252\345\210\207\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MDIWindowDemoClass", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("MDIWindowDemoClass", "\345\244\215\345\210\266\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MDIWindowDemoClass", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("MDIWindowDemoClass", "\347\262\230\350\264\264\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("MDIWindowDemoClass", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("MDIWindowDemoClass", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("MDIWindowDemoClass", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionMDIMode->setText(QApplication::translate("MDIWindowDemoClass", "MDI\346\250\241\345\274\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionMDIMode->setToolTip(QApplication::translate("MDIWindowDemoClass", "MDI\346\250\241\345\274\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCascading->setText(QApplication::translate("MDIWindowDemoClass", "\347\272\247\350\201\224\345\261\225\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCascading->setToolTip(QApplication::translate("MDIWindowDemoClass", "\347\272\247\350\201\224\345\261\225\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionTile->setText(QApplication::translate("MDIWindowDemoClass", "\345\271\263\351\223\272\345\261\225\345\274\200", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionTile->setToolTip(QApplication::translate("MDIWindowDemoClass", "\345\271\263\351\223\272\345\261\225\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionCloseAll->setText(QApplication::translate("MDIWindowDemoClass", "\345\205\250\351\203\250\345\205\263\351\227\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCloseAll->setToolTip(QApplication::translate("MDIWindowDemoClass", "\345\205\250\351\203\250\345\205\263\351\227\255", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class MDIWindowDemoClass: public Ui_MDIWindowDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDIWINDOWDEMO_H
