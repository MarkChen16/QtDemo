/********************************************************************************
** Form generated from reading UI file 'ComplexUIWind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPLEXUIWIND_H
#define UI_COMPLEXUIWIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ComplexUIWindClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionClear;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnder;
    QAction *actionShowTool;
    QWidget *centralWidget;
    QTextEdit *txtEdit;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;
    QToolBar *tbCreate;

    void setupUi(QMainWindow *ComplexUIWindClass)
    {
        if (ComplexUIWindClass->objectName().isEmpty())
            ComplexUIWindClass->setObjectName(QStringLiteral("ComplexUIWindClass"));
        ComplexUIWindClass->resize(538, 319);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ComplexUIWind/Resources/MSN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        ComplexUIWindClass->setWindowIcon(icon);
        actionNew = new QAction(ComplexUIWindClass);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ComplexUIWind/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(ComplexUIWindClass);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ComplexUIWind/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionClose = new QAction(ComplexUIWindClass);
        actionClose->setObjectName(QStringLiteral("actionClose"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ComplexUIWind/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon3);
        actionCut = new QAction(ComplexUIWindClass);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ComplexUIWind/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon4);
        actionCopy = new QAction(ComplexUIWindClass);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ComplexUIWind/Resources/DISTLSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(ComplexUIWindClass);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ComplexUIWind/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionClear = new QAction(ComplexUIWindClass);
        actionClear->setObjectName(QStringLiteral("actionClear"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/ComplexUIWind/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear->setIcon(icon7);
        actionBold = new QAction(ComplexUIWindClass);
        actionBold->setObjectName(QStringLiteral("actionBold"));
        actionBold->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/ComplexUIWind/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionBold->setIcon(icon8);
        actionItalic = new QAction(ComplexUIWindClass);
        actionItalic->setObjectName(QStringLiteral("actionItalic"));
        actionItalic->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/ComplexUIWind/Resources/CONTACTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionItalic->setIcon(icon9);
        actionUnder = new QAction(ComplexUIWindClass);
        actionUnder->setObjectName(QStringLiteral("actionUnder"));
        actionUnder->setCheckable(true);
        actionUnder->setIcon(icon6);
        actionShowTool = new QAction(ComplexUIWindClass);
        actionShowTool->setObjectName(QStringLiteral("actionShowTool"));
        actionShowTool->setIcon(icon);
        centralWidget = new QWidget(ComplexUIWindClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        txtEdit = new QTextEdit(centralWidget);
        txtEdit->setObjectName(QStringLiteral("txtEdit"));
        txtEdit->setGeometry(QRect(100, 30, 256, 192));
        ComplexUIWindClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ComplexUIWindClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 538, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        ComplexUIWindClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ComplexUIWindClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ComplexUIWindClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ComplexUIWindClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ComplexUIWindClass->setStatusBar(statusBar);
        toolBar = new QToolBar(ComplexUIWindClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        ComplexUIWindClass->addToolBar(Qt::TopToolBarArea, toolBar);
        tbCreate = new QToolBar(ComplexUIWindClass);
        tbCreate->setObjectName(QStringLiteral("tbCreate"));
        ComplexUIWindClass->addToolBar(Qt::TopToolBarArea, tbCreate);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(actionNew);
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionClose);
        menu_2->addAction(actionCut);
        menu_2->addAction(actionCopy);
        menu_2->addAction(actionPaste);
        menu_2->addSeparator();
        menu_2->addAction(actionClear);
        menu_3->addAction(actionBold);
        menu_3->addAction(actionItalic);
        menu_3->addAction(actionUnder);
        menu_3->addSeparator();
        menu_3->addAction(actionShowTool);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionCut);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClear);
        toolBar->addAction(actionBold);
        toolBar->addAction(actionItalic);
        toolBar->addAction(actionUnder);
        toolBar->addSeparator();

        retranslateUi(ComplexUIWindClass);
        QObject::connect(actionCut, SIGNAL(triggered()), txtEdit, SLOT(cut()));
        QObject::connect(actionCopy, SIGNAL(triggered()), txtEdit, SLOT(copy()));
        QObject::connect(actionPaste, SIGNAL(triggered()), txtEdit, SLOT(paste()));
        QObject::connect(actionClose, SIGNAL(triggered()), ComplexUIWindClass, SLOT(close()));
        QObject::connect(actionClear, SIGNAL(triggered()), txtEdit, SLOT(clear()));
        QObject::connect(txtEdit, SIGNAL(copyAvailable(bool)), ComplexUIWindClass, SLOT(on_txtEdit_copyAvailable(bool)));
        QObject::connect(txtEdit, SIGNAL(selectionChanged()), ComplexUIWindClass, SLOT(on_txtEdit_selectionChanged()));

        QMetaObject::connectSlotsByName(ComplexUIWindClass);
    } // setupUi

    void retranslateUi(QMainWindow *ComplexUIWindClass)
    {
        ComplexUIWindClass->setWindowTitle(QApplication::translate("ComplexUIWindClass", "ComplexUIWind", Q_NULLPTR));
        actionNew->setText(QApplication::translate("ComplexUIWindClass", "\346\226\260\345\273\272...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionNew->setToolTip(QApplication::translate("ComplexUIWindClass", "\346\226\260\345\273\272\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("ComplexUIWindClass", "\346\211\223\345\274\200...", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("ComplexUIWindClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClose->setText(QApplication::translate("ComplexUIWindClass", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClose->setToolTip(QApplication::translate("ComplexUIWindClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+Q", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("ComplexUIWindClass", "\345\211\252\345\210\207", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCut->setToolTip(QApplication::translate("ComplexUIWindClass", "\345\211\252\345\210\207\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("ComplexUIWindClass", "\345\244\215\345\210\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionCopy->setToolTip(QApplication::translate("ComplexUIWindClass", "\345\244\215\345\210\266\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+C", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("ComplexUIWindClass", "\347\262\230\350\264\264", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionPaste->setToolTip(QApplication::translate("ComplexUIWindClass", "\347\262\230\350\264\264\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+V", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionClear->setText(QApplication::translate("ComplexUIWindClass", "\346\270\205\347\251\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionClear->setToolTip(QApplication::translate("ComplexUIWindClass", "\346\270\205\347\251\272\346\226\207\346\234\254", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionClear->setShortcut(QApplication::translate("ComplexUIWindClass", "Ctrl+L", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        actionBold->setText(QApplication::translate("ComplexUIWindClass", "\347\262\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionBold->setToolTip(QApplication::translate("ComplexUIWindClass", "\347\262\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionItalic->setText(QApplication::translate("ComplexUIWindClass", "\346\226\234\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionItalic->setToolTip(QApplication::translate("ComplexUIWindClass", "\346\226\234\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionUnder->setText(QApplication::translate("ComplexUIWindClass", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionUnder->setToolTip(QApplication::translate("ComplexUIWindClass", "\344\270\213\345\210\222\347\272\277", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionShowTool->setText(QApplication::translate("ComplexUIWindClass", "\346\230\276\347\244\272\345\267\245\345\205\267\346\240\217\346\226\207\345\255\227\346\240\207\347\255\276", Q_NULLPTR));
        menu->setTitle(QApplication::translate("ComplexUIWindClass", "\346\226\207\344\273\266", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("ComplexUIWindClass", "\347\274\226\350\276\221", Q_NULLPTR));
        menu_3->setTitle(QApplication::translate("ComplexUIWindClass", "\346\240\274\345\274\217", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("ComplexUIWindClass", "toolBar", Q_NULLPTR));
        tbCreate->setWindowTitle(QApplication::translate("ComplexUIWindClass", "toolBar_2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ComplexUIWindClass: public Ui_ComplexUIWindClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPLEXUIWIND_H
