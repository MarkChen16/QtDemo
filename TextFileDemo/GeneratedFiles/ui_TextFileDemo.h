/********************************************************************************
** Form generated from reading UI file 'TextFileDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFILEDEMO_H
#define UI_TEXTFILEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextFileDemoClass
{
public:
    QAction *actionOpenTextFile;
    QAction *actionSaveTextFile;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *TextFileDemoClass)
    {
        if (TextFileDemoClass->objectName().isEmpty())
            TextFileDemoClass->setObjectName(QStringLiteral("TextFileDemoClass"));
        TextFileDemoClass->resize(612, 365);
        actionOpenTextFile = new QAction(TextFileDemoClass);
        actionOpenTextFile->setObjectName(QStringLiteral("actionOpenTextFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/TextFileDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenTextFile->setIcon(icon);
        actionSaveTextFile = new QAction(TextFileDemoClass);
        actionSaveTextFile->setObjectName(QStringLiteral("actionSaveTextFile"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/TextFileDemo/Resources/NOTEL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveTextFile->setIcon(icon1);
        actionQuit = new QAction(TextFileDemoClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/TextFileDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon2);
        actionAbout = new QAction(TextFileDemoClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/TextFileDemo/Resources/MSN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout->setIcon(icon3);
        centralWidget = new QWidget(TextFileDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(40, 30, 521, 211));
        TextFileDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TextFileDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        TextFileDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(TextFileDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        TextFileDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(TextFileDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        TextFileDemoClass->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(actionOpenTextFile);
        menu_F->addAction(actionSaveTextFile);
        menu_F->addSeparator();
        menu_F->addAction(actionQuit);
        menu_H->addAction(actionAbout);
        mainToolBar->addAction(actionOpenTextFile);
        mainToolBar->addAction(actionSaveTextFile);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionQuit);

        retranslateUi(TextFileDemoClass);
        QObject::connect(actionQuit, SIGNAL(triggered()), TextFileDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(TextFileDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *TextFileDemoClass)
    {
        TextFileDemoClass->setWindowTitle(QApplication::translate("TextFileDemoClass", "TextFileDemo", Q_NULLPTR));
        actionOpenTextFile->setText(QApplication::translate("TextFileDemoClass", "\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenTextFile->setToolTip(QApplication::translate("TextFileDemoClass", "\346\211\223\345\274\200\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveTextFile->setText(QApplication::translate("TextFileDemoClass", "\344\277\235\345\255\230\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveTextFile->setToolTip(QApplication::translate("TextFileDemoClass", "\344\277\235\345\255\230\346\226\207\346\234\254\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("TextFileDemoClass", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("TextFileDemoClass", "\351\200\200\345\207\272\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAbout->setText(QApplication::translate("TextFileDemoClass", "\345\205\263\344\272\216\347\263\273\347\273\237", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAbout->setToolTip(QApplication::translate("TextFileDemoClass", "\345\205\263\344\272\216\347\263\273\347\273\237", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        menu_F->setTitle(QApplication::translate("TextFileDemoClass", "\346\226\207\344\273\266(&F)", Q_NULLPTR));
        menu_H->setTitle(QApplication::translate("TextFileDemoClass", "\345\270\256\345\212\251(&H)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TextFileDemoClass: public Ui_TextFileDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFILEDEMO_H
