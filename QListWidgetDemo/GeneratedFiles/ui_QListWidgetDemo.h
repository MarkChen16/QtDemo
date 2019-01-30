/********************************************************************************
** Form generated from reading UI file 'QListWidgetDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QLISTWIDGETDEMO_H
#define UI_QLISTWIDGETDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QListWidgetDemoClass
{
public:
    QAction *actInit;
    QAction *actClear;
    QAction *actInsert;
    QAction *actAdd;
    QAction *actDel;
    QAction *actSelAll;
    QAction *actSelNone;
    QAction *actSelInvs;
    QAction *actQuit;
    QAction *actSelPopMenu;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QToolButton *tbtnInit;
    QToolButton *tbtnClear;
    QToolButton *tbtnInsert;
    QToolButton *tbtnAdd;
    QToolButton *tbtnDel;
    QWidget *page_3;
    QWidget *page_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QListWidget *listWidget;
    QLabel *label;
    QLineEdit *lineEdit;
    QCheckBox *checkBox;
    QToolButton *tbtnSelectItem;
    QToolButton *tbtnSelAll;
    QToolButton *tbtnSelNone;
    QToolButton *tbtnSelInvs;
    QWidget *tab_3;
    QWidget *tab_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QListWidgetDemoClass)
    {
        if (QListWidgetDemoClass->objectName().isEmpty())
            QListWidgetDemoClass->setObjectName(QStringLiteral("QListWidgetDemoClass"));
        QListWidgetDemoClass->resize(671, 476);
        actInit = new QAction(QListWidgetDemoClass);
        actInit->setObjectName(QStringLiteral("actInit"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QListWidgetDemo/Resources/APPTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actInit->setIcon(icon);
        actClear = new QAction(QListWidgetDemoClass);
        actClear->setObjectName(QStringLiteral("actClear"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QListWidgetDemo/Resources/RESENDL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon1);
        actInsert = new QAction(QListWidgetDemoClass);
        actInsert->setObjectName(QStringLiteral("actInsert"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QListWidgetDemo/Resources/TASKACCL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actInsert->setIcon(icon2);
        actAdd = new QAction(QListWidgetDemoClass);
        actAdd->setObjectName(QStringLiteral("actAdd"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QListWidgetDemo/Resources/TASKL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAdd->setIcon(icon3);
        actDel = new QAction(QListWidgetDemoClass);
        actDel->setObjectName(QStringLiteral("actDel"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QListWidgetDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDel->setIcon(icon4);
        actSelAll = new QAction(QListWidgetDemoClass);
        actSelAll->setObjectName(QStringLiteral("actSelAll"));
        actSelNone = new QAction(QListWidgetDemoClass);
        actSelNone->setObjectName(QStringLiteral("actSelNone"));
        actSelInvs = new QAction(QListWidgetDemoClass);
        actSelInvs->setObjectName(QStringLiteral("actSelInvs"));
        actQuit = new QAction(QListWidgetDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QListWidgetDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon5);
        actSelPopMenu = new QAction(QListWidgetDemoClass);
        actSelPopMenu->setObjectName(QStringLiteral("actSelPopMenu"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QListWidgetDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actSelPopMenu->setIcon(icon6);
        centralWidget = new QWidget(QListWidgetDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        toolBox->setMinimumSize(QSize(150, 0));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 217, 301));
        tbtnInit = new QToolButton(page);
        tbtnInit->setObjectName(QStringLiteral("tbtnInit"));
        tbtnInit->setGeometry(QRect(10, 0, 191, 21));
        tbtnInit->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbtnClear = new QToolButton(page);
        tbtnClear->setObjectName(QStringLiteral("tbtnClear"));
        tbtnClear->setGeometry(QRect(10, 30, 191, 21));
        tbtnClear->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbtnInsert = new QToolButton(page);
        tbtnInsert->setObjectName(QStringLiteral("tbtnInsert"));
        tbtnInsert->setGeometry(QRect(10, 60, 191, 21));
        tbtnInsert->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbtnAdd = new QToolButton(page);
        tbtnAdd->setObjectName(QStringLiteral("tbtnAdd"));
        tbtnAdd->setGeometry(QRect(10, 90, 191, 21));
        tbtnAdd->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbtnDel = new QToolButton(page);
        tbtnDel->setObjectName(QStringLiteral("tbtnDel"));
        tbtnDel->setGeometry(QRect(10, 120, 191, 21));
        tbtnDel->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolBox->addItem(page, QString::fromUtf8("QListWidget\346\223\215\344\275\234"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        page_3->setGeometry(QRect(0, 0, 217, 301));
        toolBox->addItem(page_3, QString::fromUtf8("QTreeWidget\346\223\215\344\275\234"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 217, 301));
        toolBox->addItem(page_2, QString::fromUtf8("QTableWidget\346\223\215\344\275\234"));
        splitter->addWidget(toolBox);
        tabWidget = new QTabWidget(splitter);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        listWidget = new QListWidget(tab);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 70, 401, 271));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget->setSelectionMode(QAbstractItemView::MultiSelection);
        listWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        listWidget->setViewMode(QListView::ListMode);
        listWidget->setWordWrap(true);
        listWidget->setSelectionRectVisible(true);
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 71, 16));
        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(80, 10, 251, 20));
        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(340, 10, 71, 16));
        tbtnSelectItem = new QToolButton(tab);
        tbtnSelectItem->setObjectName(QStringLiteral("tbtnSelectItem"));
        tbtnSelectItem->setGeometry(QRect(10, 40, 81, 21));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/QListWidgetDemo/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnSelectItem->setIcon(icon7);
        tbtnSelectItem->setPopupMode(QToolButton::InstantPopup);
        tbtnSelectItem->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        tbtnSelAll = new QToolButton(tab);
        tbtnSelAll->setObjectName(QStringLiteral("tbtnSelAll"));
        tbtnSelAll->setGeometry(QRect(110, 40, 81, 21));
        tbtnSelAll->setToolButtonStyle(Qt::ToolButtonTextOnly);
        tbtnSelNone = new QToolButton(tab);
        tbtnSelNone->setObjectName(QStringLiteral("tbtnSelNone"));
        tbtnSelNone->setGeometry(QRect(210, 40, 81, 21));
        tbtnSelNone->setToolButtonStyle(Qt::ToolButtonTextOnly);
        tbtnSelInvs = new QToolButton(tab);
        tbtnSelInvs->setObjectName(QStringLiteral("tbtnSelInvs"));
        tbtnSelInvs->setGeometry(QRect(310, 40, 81, 21));
        tbtnSelInvs->setToolButtonStyle(Qt::ToolButtonTextOnly);
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());
        splitter->addWidget(tabWidget);

        horizontalLayout->addWidget(splitter);

        QListWidgetDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QListWidgetDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 671, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        QListWidgetDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QListWidgetDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QListWidgetDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QListWidgetDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QListWidgetDemoClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(actInit);
        menu->addAction(actClear);
        menu->addAction(actInsert);
        menu->addAction(actAdd);
        menu->addAction(actDel);
        menu->addSeparator();
        menu->addAction(actQuit);
        menu_2->addAction(actSelAll);
        menu_2->addAction(actSelNone);
        menu_2->addAction(actSelInvs);
        mainToolBar->addAction(actInit);
        mainToolBar->addAction(actClear);
        mainToolBar->addAction(actInsert);
        mainToolBar->addAction(actAdd);
        mainToolBar->addAction(actDel);
        mainToolBar->addSeparator();

        retranslateUi(QListWidgetDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), QListWidgetDemoClass, SLOT(close()));
        QObject::connect(listWidget, SIGNAL(itemClicked(QListWidgetItem*)), QListWidgetDemoClass, SLOT(onClick(QListWidgetItem*)));

        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QListWidgetDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QListWidgetDemoClass)
    {
        QListWidgetDemoClass->setWindowTitle(QApplication::translate("QListWidgetDemoClass", "QListWidgetDemo", Q_NULLPTR));
        actInit->setText(QApplication::translate("QListWidgetDemoClass", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actInit->setToolTip(QApplication::translate("QListWidgetDemoClass", "\345\210\235\345\247\213\345\214\226\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actClear->setText(QApplication::translate("QListWidgetDemoClass", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actClear->setToolTip(QApplication::translate("QListWidgetDemoClass", "\346\270\205\351\231\244\345\210\227\350\241\250", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actInsert->setText(QApplication::translate("QListWidgetDemoClass", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actInsert->setToolTip(QApplication::translate("QListWidgetDemoClass", "\346\217\222\345\205\245\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAdd->setText(QApplication::translate("QListWidgetDemoClass", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAdd->setToolTip(QApplication::translate("QListWidgetDemoClass", "\346\267\273\345\212\240\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDel->setText(QApplication::translate("QListWidgetDemoClass", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDel->setToolTip(QApplication::translate("QListWidgetDemoClass", "\345\210\240\351\231\244\345\275\223\345\211\215\351\241\271", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelAll->setText(QApplication::translate("QListWidgetDemoClass", "\345\205\250\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelAll->setToolTip(QApplication::translate("QListWidgetDemoClass", "\345\205\250\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelNone->setText(QApplication::translate("QListWidgetDemoClass", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelNone->setToolTip(QApplication::translate("QListWidgetDemoClass", "\345\205\250\344\270\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelInvs->setText(QApplication::translate("QListWidgetDemoClass", "\345\217\215\351\200\211", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelInvs->setToolTip(QApplication::translate("QListWidgetDemoClass", "\345\217\215\351\200\211", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QListWidgetDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QListWidgetDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSelPopMenu->setText(QApplication::translate("QListWidgetDemoClass", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSelPopMenu->setToolTip(QApplication::translate("QListWidgetDemoClass", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        tbtnInit->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tbtnClear->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tbtnInsert->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tbtnAdd->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tbtnDel->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("QListWidgetDemoClass", "QListWidget\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("QListWidgetDemoClass", "QTreeWidget\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("QListWidgetDemoClass", "QTableWidget\346\223\215\344\275\234", Q_NULLPTR));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("QListWidgetDemoClass", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("QListWidgetDemoClass", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("QListWidgetDemoClass", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("QListWidgetDemoClass", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("QListWidgetDemoClass", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("QListWidgetDemoClass", "\345\275\223\345\211\215\351\241\271\345\217\230\345\214\226\357\274\232", Q_NULLPTR));
        checkBox->setText(QApplication::translate("QListWidgetDemoClass", "\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        tbtnSelectItem->setText(QApplication::translate("QListWidgetDemoClass", "\351\241\271\351\200\211\346\213\251", Q_NULLPTR));
        tbtnSelAll->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tbtnSelNone->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tbtnSelInvs->setText(QApplication::translate("QListWidgetDemoClass", "...", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QListWidgetDemoClass", "QListWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("QListWidgetDemoClass", "QTreeWidget", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QListWidgetDemoClass", "QTableWidget", Q_NULLPTR));
        menu->setTitle(QApplication::translate("QListWidgetDemoClass", "\345\210\227\350\241\250\346\223\215\344\275\234", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("QListWidgetDemoClass", "\345\210\227\350\241\250\351\200\211\346\213\251", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QListWidgetDemoClass: public Ui_QListWidgetDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QLISTWIDGETDEMO_H
