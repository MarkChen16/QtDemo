/********************************************************************************
** Form generated from reading UI file 'GraphicsViewDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSVIEWDEMO_H
#define UI_GRAPHICSVIEWDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <qwgraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_GraphicsViewDemoClass
{
public:
    QAction *actEnlarge;
    QAction *actLessen;
    QAction *actGoBack;
    QAction *actLeftTrans;
    QAction *actRightTrans;
    QAction *actGoFront;
    QAction *actGoBottom;
    QAction *actGroup;
    QAction *actNoGroup;
    QAction *actDel;
    QAction *actQuit;
    QAction *actRect;
    QAction *actEllipse1;
    QAction *actEllipse2;
    QAction *actPolygon1;
    QAction *actPolygon2;
    QAction *actLine;
    QAction *actText;
    QWidget *centralWidget;
    QWGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *GraphicsViewDemoClass)
    {
        if (GraphicsViewDemoClass->objectName().isEmpty())
            GraphicsViewDemoClass->setObjectName(QStringLiteral("GraphicsViewDemoClass"));
        GraphicsViewDemoClass->resize(787, 514);
        actEnlarge = new QAction(GraphicsViewDemoClass);
        actEnlarge->setObjectName(QStringLiteral("actEnlarge"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/ACTIVITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actEnlarge->setIcon(icon);
        actLessen = new QAction(GraphicsViewDemoClass);
        actLessen->setObjectName(QStringLiteral("actLessen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actLessen->setIcon(icon1);
        actGoBack = new QAction(GraphicsViewDemoClass);
        actGoBack->setObjectName(QStringLiteral("actGoBack"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/CONTACTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actGoBack->setIcon(icon2);
        actLeftTrans = new QAction(GraphicsViewDemoClass);
        actLeftTrans->setObjectName(QStringLiteral("actLeftTrans"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/REFBAR.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actLeftTrans->setIcon(icon3);
        actRightTrans = new QAction(GraphicsViewDemoClass);
        actRightTrans->setObjectName(QStringLiteral("actRightTrans"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actRightTrans->setIcon(icon4);
        actGoFront = new QAction(GraphicsViewDemoClass);
        actGoFront->setObjectName(QStringLiteral("actGoFront"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/NOTEL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actGoFront->setIcon(icon5);
        actGoBottom = new QAction(GraphicsViewDemoClass);
        actGoBottom->setObjectName(QStringLiteral("actGoBottom"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/SCDREQL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actGoBottom->setIcon(icon6);
        actGroup = new QAction(GraphicsViewDemoClass);
        actGroup->setObjectName(QStringLiteral("actGroup"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actGroup->setIcon(icon7);
        actNoGroup = new QAction(GraphicsViewDemoClass);
        actNoGroup->setObjectName(QStringLiteral("actNoGroup"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actNoGroup->setIcon(icon8);
        actDel = new QAction(GraphicsViewDemoClass);
        actDel->setObjectName(QStringLiteral("actDel"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDel->setIcon(icon9);
        actQuit = new QAction(GraphicsViewDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon10);
        actRect = new QAction(GraphicsViewDemoClass);
        actRect->setObjectName(QStringLiteral("actRect"));
        actRect->setCheckable(true);
        actRect->setChecked(false);
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/GraphicsViewDemo/Resources/TASKL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actRect->setIcon(icon11);
        actEllipse1 = new QAction(GraphicsViewDemoClass);
        actEllipse1->setObjectName(QStringLiteral("actEllipse1"));
        actEllipse1->setCheckable(true);
        actEllipse1->setIcon(icon11);
        actEllipse2 = new QAction(GraphicsViewDemoClass);
        actEllipse2->setObjectName(QStringLiteral("actEllipse2"));
        actEllipse2->setCheckable(true);
        actEllipse2->setIcon(icon11);
        actPolygon1 = new QAction(GraphicsViewDemoClass);
        actPolygon1->setObjectName(QStringLiteral("actPolygon1"));
        actPolygon1->setCheckable(true);
        actPolygon1->setIcon(icon11);
        actPolygon2 = new QAction(GraphicsViewDemoClass);
        actPolygon2->setObjectName(QStringLiteral("actPolygon2"));
        actPolygon2->setCheckable(true);
        actPolygon2->setIcon(icon11);
        actLine = new QAction(GraphicsViewDemoClass);
        actLine->setObjectName(QStringLiteral("actLine"));
        actLine->setCheckable(true);
        actLine->setIcon(icon11);
        actText = new QAction(GraphicsViewDemoClass);
        actText->setObjectName(QStringLiteral("actText"));
        actText->setCheckable(true);
        actText->setIcon(icon11);
        centralWidget = new QWidget(GraphicsViewDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        graphicsView = new QWGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(170, 20, 441, 291));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        GraphicsViewDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GraphicsViewDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 787, 23));
        GraphicsViewDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(GraphicsViewDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GraphicsViewDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(GraphicsViewDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        GraphicsViewDemoClass->setStatusBar(statusBar);
        toolBar = new QToolBar(GraphicsViewDemoClass);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setAcceptDrops(false);
        toolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        GraphicsViewDemoClass->addToolBar(Qt::LeftToolBarArea, toolBar);

        mainToolBar->addAction(actEnlarge);
        mainToolBar->addAction(actLessen);
        mainToolBar->addAction(actGoBack);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actLeftTrans);
        mainToolBar->addAction(actRightTrans);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actGoFront);
        mainToolBar->addAction(actGoBottom);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actGroup);
        mainToolBar->addAction(actNoGroup);
        mainToolBar->addAction(actDel);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);
        toolBar->addAction(actRect);
        toolBar->addAction(actEllipse1);
        toolBar->addAction(actEllipse2);
        toolBar->addAction(actPolygon1);
        toolBar->addAction(actPolygon2);
        toolBar->addAction(actLine);
        toolBar->addAction(actText);

        retranslateUi(GraphicsViewDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), GraphicsViewDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(GraphicsViewDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *GraphicsViewDemoClass)
    {
        GraphicsViewDemoClass->setWindowTitle(QApplication::translate("GraphicsViewDemoClass", "GraphicsViewDemo", Q_NULLPTR));
        actEnlarge->setText(QApplication::translate("GraphicsViewDemoClass", "\346\224\276\345\244\247", Q_NULLPTR));
        actLessen->setText(QApplication::translate("GraphicsViewDemoClass", "\347\274\251\345\260\217", Q_NULLPTR));
        actGoBack->setText(QApplication::translate("GraphicsViewDemoClass", "\346\201\242\345\244\215", Q_NULLPTR));
        actLeftTrans->setText(QApplication::translate("GraphicsViewDemoClass", "\345\267\246\346\227\213\350\275\254", Q_NULLPTR));
        actRightTrans->setText(QApplication::translate("GraphicsViewDemoClass", "\345\217\263\346\227\213\350\275\254", Q_NULLPTR));
        actGoFront->setText(QApplication::translate("GraphicsViewDemoClass", "\345\211\215\347\275\256", Q_NULLPTR));
        actGoBottom->setText(QApplication::translate("GraphicsViewDemoClass", "\345\220\216\347\275\256", Q_NULLPTR));
        actGroup->setText(QApplication::translate("GraphicsViewDemoClass", "\347\273\204\345\220\210", Q_NULLPTR));
        actNoGroup->setText(QApplication::translate("GraphicsViewDemoClass", "\346\211\223\346\225\243", Q_NULLPTR));
        actDel->setText(QApplication::translate("GraphicsViewDemoClass", "\345\210\240\351\231\244", Q_NULLPTR));
        actQuit->setText(QApplication::translate("GraphicsViewDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
        actRect->setText(QApplication::translate("GraphicsViewDemoClass", "\347\237\251\345\275\242", Q_NULLPTR));
        actEllipse1->setText(QApplication::translate("GraphicsViewDemoClass", "\346\244\255\345\234\206", Q_NULLPTR));
        actEllipse2->setText(QApplication::translate("GraphicsViewDemoClass", "\345\234\206\345\275\242", Q_NULLPTR));
        actPolygon1->setText(QApplication::translate("GraphicsViewDemoClass", "\344\270\211\350\247\222", Q_NULLPTR));
        actPolygon2->setText(QApplication::translate("GraphicsViewDemoClass", "\346\242\257\345\275\242", Q_NULLPTR));
        actLine->setText(QApplication::translate("GraphicsViewDemoClass", "\347\233\264\347\272\277", Q_NULLPTR));
        actText->setText(QApplication::translate("GraphicsViewDemoClass", "\346\226\207\345\255\227", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("GraphicsViewDemoClass", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GraphicsViewDemoClass: public Ui_GraphicsViewDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSVIEWDEMO_H
