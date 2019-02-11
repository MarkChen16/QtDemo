/********************************************************************************
** Form generated from reading UI file 'BinaryFileDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BINARYFILEDEMO_H
#define UI_BINARYFILEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BinaryFileDemoClass
{
public:
    QAction *actionOpenSTM;
    QAction *actionSaveSTM;
    QAction *actionOpenDAT;
    QAction *actionSaveDAT;
    QAction *actionAddRow;
    QAction *actionInsertRow;
    QAction *actionDelRow;
    QAction *actionQuit;
    QWidget *centralWidget;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *BinaryFileDemoClass)
    {
        if (BinaryFileDemoClass->objectName().isEmpty())
            BinaryFileDemoClass->setObjectName(QStringLiteral("BinaryFileDemoClass"));
        BinaryFileDemoClass->resize(820, 425);
        actionOpenSTM = new QAction(BinaryFileDemoClass);
        actionOpenSTM->setObjectName(QStringLiteral("actionOpenSTM"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/BinaryFileDemo/Resources/ACTIVITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenSTM->setIcon(icon);
        actionSaveSTM = new QAction(BinaryFileDemoClass);
        actionSaveSTM->setObjectName(QStringLiteral("actionSaveSTM"));
        actionSaveSTM->setEnabled(true);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/BinaryFileDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveSTM->setIcon(icon1);
        actionOpenDAT = new QAction(BinaryFileDemoClass);
        actionOpenDAT->setObjectName(QStringLiteral("actionOpenDAT"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/BinaryFileDemo/Resources/CONTACTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpenDAT->setIcon(icon2);
        actionSaveDAT = new QAction(BinaryFileDemoClass);
        actionSaveDAT->setObjectName(QStringLiteral("actionSaveDAT"));
        actionSaveDAT->setEnabled(true);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/BinaryFileDemo/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionSaveDAT->setIcon(icon3);
        actionAddRow = new QAction(BinaryFileDemoClass);
        actionAddRow->setObjectName(QStringLiteral("actionAddRow"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/BinaryFileDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionAddRow->setIcon(icon4);
        actionInsertRow = new QAction(BinaryFileDemoClass);
        actionInsertRow->setObjectName(QStringLiteral("actionInsertRow"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/BinaryFileDemo/Resources/RSSITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionInsertRow->setIcon(icon5);
        actionDelRow = new QAction(BinaryFileDemoClass);
        actionDelRow->setObjectName(QStringLiteral("actionDelRow"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/BinaryFileDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionDelRow->setIcon(icon6);
        actionQuit = new QAction(BinaryFileDemoClass);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/BinaryFileDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon7);
        centralWidget = new QWidget(BinaryFileDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 10, 781, 301));
        BinaryFileDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(BinaryFileDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 23));
        BinaryFileDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(BinaryFileDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        BinaryFileDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(BinaryFileDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        BinaryFileDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionOpenSTM);
        mainToolBar->addAction(actionSaveSTM);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpenDAT);
        mainToolBar->addAction(actionSaveDAT);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionAddRow);
        mainToolBar->addAction(actionInsertRow);
        mainToolBar->addAction(actionDelRow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionQuit);

        retranslateUi(BinaryFileDemoClass);
        QObject::connect(actionQuit, SIGNAL(triggered()), BinaryFileDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(BinaryFileDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *BinaryFileDemoClass)
    {
        BinaryFileDemoClass->setWindowTitle(QApplication::translate("BinaryFileDemoClass", "BinaryFileDemo", Q_NULLPTR));
        actionOpenSTM->setText(QApplication::translate("BinaryFileDemoClass", "\346\211\223\345\274\200STM\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenSTM->setToolTip(QApplication::translate("BinaryFileDemoClass", "\346\211\223\345\274\200STM\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveSTM->setText(QApplication::translate("BinaryFileDemoClass", "\344\277\235\345\255\230STM\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveSTM->setToolTip(QApplication::translate("BinaryFileDemoClass", "\344\277\235\345\255\230STM\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionOpenDAT->setText(QApplication::translate("BinaryFileDemoClass", "\346\211\223\345\274\200DAT\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionOpenDAT->setToolTip(QApplication::translate("BinaryFileDemoClass", "\346\211\223\345\274\200DAT\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionSaveDAT->setText(QApplication::translate("BinaryFileDemoClass", "\344\277\235\345\255\230DAT\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionSaveDAT->setToolTip(QApplication::translate("BinaryFileDemoClass", "\344\277\235\345\255\230DAT\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionAddRow->setText(QApplication::translate("BinaryFileDemoClass", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionAddRow->setToolTip(QApplication::translate("BinaryFileDemoClass", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionInsertRow->setText(QApplication::translate("BinaryFileDemoClass", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionInsertRow->setToolTip(QApplication::translate("BinaryFileDemoClass", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionDelRow->setText(QApplication::translate("BinaryFileDemoClass", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionDelRow->setToolTip(QApplication::translate("BinaryFileDemoClass", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actionQuit->setText(QApplication::translate("BinaryFileDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actionQuit->setToolTip(QApplication::translate("BinaryFileDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
    } // retranslateUi

};

namespace Ui {
    class BinaryFileDemoClass: public Ui_BinaryFileDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BINARYFILEDEMO_H
