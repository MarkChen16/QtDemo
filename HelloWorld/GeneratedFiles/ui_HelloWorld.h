/********************************************************************************
** Form generated from reading UI file 'HelloWorld.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOWORLD_H
#define UI_HELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloWorldClass
{
public:
    QWidget *centralWidget;
    QLabel *labHello;
    QPushButton *btnClose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HelloWorldClass)
    {
        if (HelloWorldClass->objectName().isEmpty())
            HelloWorldClass->setObjectName(QStringLiteral("HelloWorldClass"));
        HelloWorldClass->resize(495, 275);
        centralWidget = new QWidget(HelloWorldClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labHello = new QLabel(centralWidget);
        labHello->setObjectName(QStringLiteral("labHello"));
        labHello->setGeometry(QRect(100, 40, 291, 81));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        labHello->setFont(font);
        labHello->setAlignment(Qt::AlignCenter);
        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        btnClose->setGeometry(QRect(190, 140, 91, 41));
        HelloWorldClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HelloWorldClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 495, 17));
        HelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HelloWorldClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        HelloWorldClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HelloWorldClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        HelloWorldClass->setStatusBar(statusBar);

        retranslateUi(HelloWorldClass);
        QObject::connect(btnClose, SIGNAL(clicked()), HelloWorldClass, SLOT(close()));

        QMetaObject::connectSlotsByName(HelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *HelloWorldClass)
    {
        HelloWorldClass->setWindowTitle(QApplication::translate("HelloWorldClass", "HelloWorld", Q_NULLPTR));
        labHello->setText(QApplication::translate("HelloWorldClass", "HelloWorld\357\274\201", Q_NULLPTR));
        btnClose->setText(QApplication::translate("HelloWorldClass", "Close", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelloWorldClass: public Ui_HelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOWORLD_H
