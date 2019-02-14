/********************************************************************************
** Form generated from reading UI file 'MoreChartViewDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MORECHARTVIEWDEMO_H
#define UI_MORECHARTVIEWDEMO_H

#include <QtCharts>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QTreeWidget>
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
    QTableView *viewData;
    QTreeWidget *treeWidget;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnReloadBarChart;
    QSpacerItem *horizontalSpacer;
    QChartView *viewBar;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnReloadPieChart;
    QSpacerItem *horizontalSpacer_2;
    QChartView *viewPie;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btnReloadStackedBarChart;
    QSpacerItem *horizontalSpacer_3;
    QChartView *viewStackedBar;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_6;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnReloadPercentBarChart;
    QSpacerItem *horizontalSpacer_4;
    QChartView *viewPercentBar;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnReloadScatterChart;
    QSpacerItem *horizontalSpacer_5;
    QChartView *viewScatterChart;
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
        viewData = new QTableView(groupBox);
        viewData->setObjectName(QStringLiteral("viewData"));

        verticalLayout->addWidget(viewData);

        treeWidget = new QTreeWidget(groupBox);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));

        verticalLayout->addWidget(treeWidget);

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
        btnReloadBarChart = new QPushButton(groupBox_3);
        btnReloadBarChart->setObjectName(QStringLiteral("btnReloadBarChart"));

        horizontalLayout->addWidget(btnReloadBarChart);

        horizontalSpacer = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addWidget(groupBox_3);

        viewBar = new QChartView(tab);
        viewBar->setObjectName(QStringLiteral("viewBar"));

        verticalLayout_4->addWidget(viewBar);

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
        btnReloadPieChart = new QPushButton(groupBox_4);
        btnReloadPieChart->setObjectName(QStringLiteral("btnReloadPieChart"));

        horizontalLayout_2->addWidget(btnReloadPieChart);

        horizontalSpacer_2 = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(groupBox_4);

        viewPie = new QChartView(tab_3);
        viewPie->setObjectName(QStringLiteral("viewPie"));

        verticalLayout_5->addWidget(viewPie);

        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_6 = new QVBoxLayout(tab_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_3 = new QHBoxLayout(groupBox_5);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        btnReloadStackedBarChart = new QPushButton(groupBox_5);
        btnReloadStackedBarChart->setObjectName(QStringLiteral("btnReloadStackedBarChart"));

        horizontalLayout_3->addWidget(btnReloadStackedBarChart);

        horizontalSpacer_3 = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_6->addWidget(groupBox_5);

        viewStackedBar = new QChartView(tab_2);
        viewStackedBar->setObjectName(QStringLiteral("viewStackedBar"));

        verticalLayout_6->addWidget(viewStackedBar);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_7 = new QVBoxLayout(tab_4);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        groupBox_6 = new QGroupBox(tab_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        groupBox_6->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_4 = new QHBoxLayout(groupBox_6);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        btnReloadPercentBarChart = new QPushButton(groupBox_6);
        btnReloadPercentBarChart->setObjectName(QStringLiteral("btnReloadPercentBarChart"));

        horizontalLayout_4->addWidget(btnReloadPercentBarChart);

        horizontalSpacer_4 = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_7->addWidget(groupBox_6);

        viewPercentBar = new QChartView(tab_4);
        viewPercentBar->setObjectName(QStringLiteral("viewPercentBar"));

        verticalLayout_7->addWidget(viewPercentBar);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        verticalLayout_8 = new QVBoxLayout(tab_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        groupBox_7 = new QGroupBox(tab_5);
        groupBox_7->setObjectName(QStringLiteral("groupBox_7"));
        sizePolicy.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy);
        groupBox_7->setMaximumSize(QSize(16777215, 16777215));
        horizontalLayout_5 = new QHBoxLayout(groupBox_7);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        btnReloadScatterChart = new QPushButton(groupBox_7);
        btnReloadScatterChart->setObjectName(QStringLiteral("btnReloadScatterChart"));

        horizontalLayout_5->addWidget(btnReloadScatterChart);

        horizontalSpacer_5 = new QSpacerItem(284, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_8->addWidget(groupBox_7);

        viewScatterChart = new QChartView(tab_5);
        viewScatterChart->setObjectName(QStringLiteral("viewScatterChart"));

        verticalLayout_8->addWidget(viewScatterChart);

        tabWidget->addTab(tab_5, QString());

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
        QObject::connect(actQuit, SIGNAL(triggered()), MoreChartViewDemoClass, SLOT(close()));

        tabWidget->setCurrentIndex(0);


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
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("MoreChartViewDemoClass", "\345\271\263\345\235\207\345\210\206", Q_NULLPTR));
        ___qtreewidgetitem->setText(3, QApplication::translate("MoreChartViewDemoClass", "\350\213\261\350\257\255", Q_NULLPTR));
        ___qtreewidgetitem->setText(2, QApplication::translate("MoreChartViewDemoClass", "\346\225\260\345\255\246", Q_NULLPTR));
        ___qtreewidgetitem->setText(1, QApplication::translate("MoreChartViewDemoClass", "\350\257\255\346\226\207", Q_NULLPTR));
        ___qtreewidgetitem->setText(0, QApplication::translate("MoreChartViewDemoClass", "\345\210\206\346\225\260\346\256\265", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MoreChartViewDemoClass", "\346\230\276\347\244\272\345\233\276\350\241\250", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        btnReloadBarChart->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260\345\233\276\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MoreChartViewDemoClass", "BarChart\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        btnReloadPieChart->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260\345\233\276\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MoreChartViewDemoClass", "PieChart\351\245\274\345\233\276", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        btnReloadStackedBarChart->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260\345\233\276\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MoreChartViewDemoClass", "StackedBar\345\240\206\345\217\240\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        groupBox_6->setTitle(QString());
        btnReloadPercentBarChart->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260\345\233\276\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MoreChartViewDemoClass", "PercentBar\347\231\276\345\210\206\346\257\224\346\237\261\347\212\266\345\233\276", Q_NULLPTR));
        groupBox_7->setTitle(QString());
        btnReloadScatterChart->setText(QApplication::translate("MoreChartViewDemoClass", "\345\210\267\346\226\260\345\233\276\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MoreChartViewDemoClass", "ScatterChart\346\225\243\347\202\271\345\233\276", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MoreChartViewDemoClass: public Ui_MoreChartViewDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MORECHARTVIEWDEMO_H
