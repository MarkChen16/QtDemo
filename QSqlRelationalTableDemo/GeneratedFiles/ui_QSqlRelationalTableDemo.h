/********************************************************************************
** Form generated from reading UI file 'QSqlRelationalTableDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSQLRELATIONALTABLEDEMO_H
#define UI_QSQLRELATIONALTABLEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSqlRelationalTableDemoClass
{
public:
    QAction *actOpen;
    QAction *actClose;
    QAction *actInsert;
    QAction *actDelete;
    QAction *actSave;
    QAction *actCancel;
    QAction *actQuit;
    QWidget *centralWidget;
    QTableView *tv;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QSqlRelationalTableDemoClass)
    {
        if (QSqlRelationalTableDemoClass->objectName().isEmpty())
            QSqlRelationalTableDemoClass->setObjectName(QStringLiteral("QSqlRelationalTableDemoClass"));
        QSqlRelationalTableDemoClass->resize(600, 316);
        actOpen = new QAction(QSqlRelationalTableDemoClass);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actClose = new QAction(QSqlRelationalTableDemoClass);
        actClose->setObjectName(QStringLiteral("actClose"));
        actClose->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/NOTEL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon1);
        actInsert = new QAction(QSqlRelationalTableDemoClass);
        actInsert->setObjectName(QStringLiteral("actInsert"));
        actInsert->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actInsert->setIcon(icon2);
        actDelete = new QAction(QSqlRelationalTableDemoClass);
        actDelete->setObjectName(QStringLiteral("actDelete"));
        actDelete->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDelete->setIcon(icon3);
        actSave = new QAction(QSqlRelationalTableDemoClass);
        actSave->setObjectName(QStringLiteral("actSave"));
        actSave->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/POSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon4);
        actCancel = new QAction(QSqlRelationalTableDemoClass);
        actCancel->setObjectName(QStringLiteral("actCancel"));
        actCancel->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/RESENDL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actCancel->setIcon(icon5);
        actQuit = new QAction(QSqlRelationalTableDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QSqlRelationalTableDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon6);
        centralWidget = new QWidget(QSqlRelationalTableDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tv = new QTableView(centralWidget);
        tv->setObjectName(QStringLiteral("tv"));
        tv->setGeometry(QRect(40, 10, 511, 231));
        QSqlRelationalTableDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QSqlRelationalTableDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QSqlRelationalTableDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actClose);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actInsert);
        mainToolBar->addAction(actDelete);
        mainToolBar->addAction(actSave);
        mainToolBar->addAction(actCancel);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QSqlRelationalTableDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), QSqlRelationalTableDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QSqlRelationalTableDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QSqlRelationalTableDemoClass)
    {
        QSqlRelationalTableDemoClass->setWindowTitle(QApplication::translate("QSqlRelationalTableDemoClass", "QSqlRelationalTableDemo", Q_NULLPTR));
        actOpen->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\346\211\223\345\274\200\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        actClose->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\345\205\263\351\227\255\346\225\260\346\215\256\345\272\223", Q_NULLPTR));
        actInsert->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\346\217\222\345\205\245\350\256\260\345\275\225", Q_NULLPTR));
        actDelete->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\345\210\240\351\231\244\350\256\260\345\275\225", Q_NULLPTR));
        actSave->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\344\277\235\345\255\230\350\256\260\345\275\225", Q_NULLPTR));
        actCancel->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\345\217\226\346\266\210\344\277\256\346\224\271", Q_NULLPTR));
        actQuit->setText(QApplication::translate("QSqlRelationalTableDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QSqlRelationalTableDemoClass: public Ui_QSqlRelationalTableDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSQLRELATIONALTABLEDEMO_H
