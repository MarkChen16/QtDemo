/********************************************************************************
** Form generated from reading UI file 'QTreeWidgetDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTREEWIDGETDEMO_H
#define UI_QTREEWIDGETDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTreeWidgetDemoClass
{
public:
    QAction *actAddDir;
    QAction *actAddFile;
    QAction *actDelNode;
    QAction *actLookup;
    QAction *actBig;
    QAction *actSmall;
    QAction *actOrgSize;
    QAction *actFixW;
    QAction *actFixH;
    QAction *actFloat;
    QAction *actVisable;
    QAction *actQuit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout_2;
    QTreeWidget *treeWidget;

    void setupUi(QMainWindow *QTreeWidgetDemoClass)
    {
        if (QTreeWidgetDemoClass->objectName().isEmpty())
            QTreeWidgetDemoClass->setObjectName(QStringLiteral("QTreeWidgetDemoClass"));
        QTreeWidgetDemoClass->resize(816, 408);
        actAddDir = new QAction(QTreeWidgetDemoClass);
        actAddDir->setObjectName(QStringLiteral("actAddDir"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAddDir->setIcon(icon);
        actAddFile = new QAction(QTreeWidgetDemoClass);
        actAddFile->setObjectName(QStringLiteral("actAddFile"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAddFile->setIcon(icon1);
        actDelNode = new QAction(QTreeWidgetDemoClass);
        actDelNode->setObjectName(QStringLiteral("actDelNode"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/SECURL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDelNode->setIcon(icon2);
        actLookup = new QAction(QTreeWidgetDemoClass);
        actLookup->setObjectName(QStringLiteral("actLookup"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actLookup->setIcon(icon3);
        actBig = new QAction(QTreeWidgetDemoClass);
        actBig->setObjectName(QStringLiteral("actBig"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/REFBARH.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actBig->setIcon(icon4);
        actSmall = new QAction(QTreeWidgetDemoClass);
        actSmall->setObjectName(QStringLiteral("actSmall"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/SECRECL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actSmall->setIcon(icon5);
        actOrgSize = new QAction(QTreeWidgetDemoClass);
        actOrgSize->setObjectName(QStringLiteral("actOrgSize"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actOrgSize->setIcon(icon6);
        actFixW = new QAction(QTreeWidgetDemoClass);
        actFixW->setObjectName(QStringLiteral("actFixW"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/TASKL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actFixW->setIcon(icon7);
        actFixH = new QAction(QTreeWidgetDemoClass);
        actFixH->setObjectName(QStringLiteral("actFixH"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/SCDRESTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actFixH->setIcon(icon8);
        actFloat = new QAction(QTreeWidgetDemoClass);
        actFloat->setObjectName(QStringLiteral("actFloat"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/POSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actFloat->setIcon(icon9);
        actVisable = new QAction(QTreeWidgetDemoClass);
        actVisable->setObjectName(QStringLiteral("actVisable"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/SIGNL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actVisable->setIcon(icon10);
        actQuit = new QAction(QTreeWidgetDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon11);
        centralWidget = new QWidget(QTreeWidgetDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 518, 293));
        horizontalLayout_3 = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label = new QLabel(scrollAreaWidgetContents);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_3->addWidget(label);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout->addWidget(scrollArea);

        QTreeWidgetDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTreeWidgetDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 816, 23));
        QTreeWidgetDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTreeWidgetDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QTreeWidgetDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTreeWidgetDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTreeWidgetDemoClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(QTreeWidgetDemoClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setFloating(false);
        dockWidget->setFeatures(QDockWidget::AllDockWidgetFeatures);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        horizontalLayout_2 = new QHBoxLayout(dockWidgetContents);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        treeWidget = new QTreeWidget(dockWidgetContents);
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::On);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setIcon(0, icon12);
        treeWidget->setHeaderItem(__qtreewidgetitem);
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::On);
        QIcon icon14;
        icon14.addFile(QStringLiteral(":/QTreeWidgetDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::On);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem1->setIcon(0, icon13);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem2->setIcon(0, icon14);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem3->setIcon(0, icon14);
        QTreeWidgetItem *__qtreewidgetitem4 = new QTreeWidgetItem(__qtreewidgetitem1);
        __qtreewidgetitem4->setIcon(0, icon14);
        QTreeWidgetItem *__qtreewidgetitem5 = new QTreeWidgetItem(treeWidget);
        __qtreewidgetitem5->setIcon(0, icon13);
        QTreeWidgetItem *__qtreewidgetitem6 = new QTreeWidgetItem(__qtreewidgetitem5);
        __qtreewidgetitem6->setIcon(0, icon14);
        QTreeWidgetItem *__qtreewidgetitem7 = new QTreeWidgetItem(__qtreewidgetitem5);
        __qtreewidgetitem7->setIcon(0, icon14);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        horizontalLayout_2->addWidget(treeWidget);

        dockWidget->setWidget(dockWidgetContents);
        QTreeWidgetDemoClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        mainToolBar->addAction(actAddDir);
        mainToolBar->addAction(actAddFile);
        mainToolBar->addAction(actDelNode);
        mainToolBar->addAction(actLookup);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actBig);
        mainToolBar->addAction(actSmall);
        mainToolBar->addAction(actOrgSize);
        mainToolBar->addAction(actFixW);
        mainToolBar->addAction(actFixH);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actFloat);
        mainToolBar->addAction(actVisable);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QTreeWidgetDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), QTreeWidgetDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QTreeWidgetDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTreeWidgetDemoClass)
    {
        QTreeWidgetDemoClass->setWindowTitle(QApplication::translate("QTreeWidgetDemoClass", "QTreeWidgetDemo", Q_NULLPTR));
        actAddDir->setText(QApplication::translate("QTreeWidgetDemoClass", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddDir->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\346\267\273\345\212\240\347\233\256\345\275\225", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddFile->setText(QApplication::translate("QTreeWidgetDemoClass", "\346\267\273\345\212\240\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddFile->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\346\267\273\345\212\240\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDelNode->setText(QApplication::translate("QTreeWidgetDemoClass", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDelNode->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\345\210\240\351\231\244\350\212\202\347\202\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actLookup->setText(QApplication::translate("QTreeWidgetDemoClass", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actLookup->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\351\201\215\345\216\206\350\212\202\347\202\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actBig->setText(QApplication::translate("QTreeWidgetDemoClass", "\346\224\276\345\244\247", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actBig->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\346\224\276\345\244\247", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSmall->setText(QApplication::translate("QTreeWidgetDemoClass", "\347\274\251\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSmall->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\347\274\251\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actOrgSize->setText(QApplication::translate("QTreeWidgetDemoClass", "\345\256\236\351\231\205\345\244\247\345\260\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOrgSize->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\345\256\236\351\231\205\345\244\247\345\260\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFixW->setText(QApplication::translate("QTreeWidgetDemoClass", "\351\200\202\345\220\210\345\256\275\345\272\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFixW->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\351\200\202\345\220\210\345\256\275\345\272\246", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFixH->setText(QApplication::translate("QTreeWidgetDemoClass", "\351\200\202\345\220\210\351\253\230\345\272\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFixH->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\351\200\202\345\220\210\351\253\230\345\272\246", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actFloat->setText(QApplication::translate("QTreeWidgetDemoClass", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actFloat->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\347\252\227\344\275\223\346\265\256\345\212\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actVisable->setText(QApplication::translate("QTreeWidgetDemoClass", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actVisable->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\347\252\227\344\275\223\345\217\257\350\247\201", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QTreeWidgetDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QTreeWidgetDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        label->setText(QString());
        dockWidget->setWindowTitle(QApplication::translate("QTreeWidgetDemoClass", "\345\233\276\347\211\207\347\233\256\345\275\225\346\240\221", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\345\233\276\347\211\207\346\226\207\344\273\266", Q_NULLPTR));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\347\233\256\345\275\2251", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\346\226\207\344\273\2661", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\346\226\207\344\273\2662", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\346\226\207\344\273\2663", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem5 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem5->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\347\233\256\345\275\2252", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem5->child(0);
        ___qtreewidgetitem6->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\346\226\207\344\273\2664", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem7 = ___qtreewidgetitem5->child(1);
        ___qtreewidgetitem7->setText(0, QApplication::translate("QTreeWidgetDemoClass", "\346\226\207\344\273\2665", Q_NULLPTR));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class QTreeWidgetDemoClass: public Ui_QTreeWidgetDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTREEWIDGETDEMO_H
