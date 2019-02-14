/********************************************************************************
** Form generated from reading UI file 'MoreChartViewDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORECHARTVIEWDEMO_H
#define UI_MORECHARTVIEWDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoreChartViewDemoClass
{
public:
    QAction *actInit;
    QAction *actDataCount;
    QAction *actQuit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QTreeView *treeView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QGraphicsView *graphicsView_2;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MoreChartViewDemoClass)
    {
        if (MoreChartViewDemoClass->objectName().isEmpty())
            MoreChartViewDemoClass->setObjectName(QStringLiteral("MoreChartViewDemoClass"));
        MoreChartViewDemoClass->resize(832, 404);
        actInit = new QAction(MoreChartViewDemoClass);
        actInit->setObjectName(QStringLiteral("actInit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/MoreChartViewDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actInit->setIcon(icon);
        actDataCount = new QAction(MoreChartViewDemoClass);
        actDataCount->setObjectName(QStringLiteral("actDataCount"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/MoreChartViewDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDataCount->setIcon(icon1);
        actQuit = new QAction(MoreChartViewDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/MoreChartViewDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        centralWidget = new QWidget(MoreChartViewDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        treeView = new QTreeView(groupBox);
        treeView->setObjectName(QStringLiteral("treeView"));

        verticalLayout->addWidget(treeView);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        groupBox_3->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_3);

        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout_4->addWidget(graphicsView);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        verticalLayout_5 = new QVBoxLayout(tab_3);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        groupBox_4->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_2 = new QHBoxLayout(groupBox_4);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButton_2 = new QPushButton(groupBox_4);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(groupBox_4);

        graphicsView_2 = new QGraphicsView(tab_3);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));

        verticalLayout_5->addWidget(graphicsView_2);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_2->addWidget(tabWidget);

        splitter->addWidget(groupBox_2);

        verticalLayout_3->addWidget(splitter);

        MoreChartViewDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MoreChartViewDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MoreChartViewDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actInit);
        mainToolBar->addAction(actDataCount);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MoreChartViewDemoClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MoreChartViewDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *MoreChartViewDemoClass)
    {
        MoreChartViewDemoClass->setWindowTitle(QApplication::translate("MoreChartViewDemoClass", "MoreChartViewDemo", Q_NULLPTR));
        actInit->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\235\345\247\213\345\214\226\346\225\260\346\215\256", Q_NULLPTR));
        actDataCount->setText(QApplication::translate("MoreChartViewDemoClass", "\346\225\260\346\215\256\347\273\237\350\256\241", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDataCount->setToolTip(QApplication::translate("MoreChartViewDemoClass", "\346\225\260\346\215\256\347\273\237\350\256\241", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("MoreChartViewDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("MoreChartViewDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MoreChartViewDemoClass", "\345\207\206\345\244\207\346\225\260\346\215\256", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MoreChartViewDemoClass", "\346\230\276\347\244\272\345\233\276\350\241\250", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        pushButton->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MoreChartViewDemoClass", "BarChart", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        pushButton_2->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MoreChartViewDemoClass", "PieChart", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MoreChartViewDemoClass: public Ui_MoreChartViewDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORECHARTVIEWDEMO_H
