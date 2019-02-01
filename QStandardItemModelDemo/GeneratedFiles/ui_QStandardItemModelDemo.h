/********************************************************************************
** Form generated from reading UI file 'QStandardItemModelDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSTANDARDITEMMODELDEMO_H
#define UI_QSTANDARDITEMMODELDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QStandardItemModelDemoClass
{
public:
    QAction *actOpenFile;
    QAction *actSaveAs;
    QAction *actPreview;
    QAction *actAddRow;
    QAction *actInsertRow;
    QAction *actDelRow;
    QAction *actAlignLeft;
    QAction *actAlignCenter;
    QAction *actAlignRight;
    QAction *actBlod;
    QAction *actQuit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableView *tvShow;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *ptShow;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QStandardItemModelDemoClass)
    {
        if (QStandardItemModelDemoClass->objectName().isEmpty())
            QStandardItemModelDemoClass->setObjectName(QStringLiteral("QStandardItemModelDemoClass"));
        QStandardItemModelDemoClass->resize(736, 424);
        actOpenFile = new QAction(QStandardItemModelDemoClass);
        actOpenFile->setObjectName(QStringLiteral("actOpenFile"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actOpenFile->setIcon(icon);
        actSaveAs = new QAction(QStandardItemModelDemoClass);
        actSaveAs->setObjectName(QStringLiteral("actSaveAs"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/RESENDL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actSaveAs->setIcon(icon1);
        actPreview = new QAction(QStandardItemModelDemoClass);
        actPreview->setObjectName(QStringLiteral("actPreview"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/REFBAR.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actPreview->setIcon(icon2);
        actAddRow = new QAction(QStandardItemModelDemoClass);
        actAddRow->setObjectName(QStringLiteral("actAddRow"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/DOCL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAddRow->setIcon(icon3);
        actInsertRow = new QAction(QStandardItemModelDemoClass);
        actInsertRow->setObjectName(QStringLiteral("actInsertRow"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actInsertRow->setIcon(icon4);
        actDelRow = new QAction(QStandardItemModelDemoClass);
        actDelRow->setObjectName(QStringLiteral("actDelRow"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/TASKDECL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDelRow->setIcon(icon5);
        actAlignLeft = new QAction(QStandardItemModelDemoClass);
        actAlignLeft->setObjectName(QStringLiteral("actAlignLeft"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/RSSITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignLeft->setIcon(icon6);
        actAlignCenter = new QAction(QStandardItemModelDemoClass);
        actAlignCenter->setObjectName(QStringLiteral("actAlignCenter"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignCenter->setIcon(icon7);
        actAlignRight = new QAction(QStandardItemModelDemoClass);
        actAlignRight->setObjectName(QStringLiteral("actAlignRight"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignRight->setIcon(icon8);
        actBlod = new QAction(QStandardItemModelDemoClass);
        actBlod->setObjectName(QStringLiteral("actBlod"));
        actBlod->setCheckable(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/SECURL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actBlod->setIcon(icon9);
        actQuit = new QAction(QStandardItemModelDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/QStandardItemModelDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon10);
        centralWidget = new QWidget(QStandardItemModelDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        tvShow = new QTableView(groupBox);
        tvShow->setObjectName(QStringLiteral("tvShow"));

        horizontalLayout->addWidget(tvShow);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        ptShow = new QPlainTextEdit(groupBox_2);
        ptShow->setObjectName(QStringLiteral("ptShow"));

        verticalLayout->addWidget(ptShow);

        splitter->addWidget(groupBox_2);

        horizontalLayout_2->addWidget(splitter);

        QStandardItemModelDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QStandardItemModelDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 736, 23));
        QStandardItemModelDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QStandardItemModelDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QStandardItemModelDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QStandardItemModelDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QStandardItemModelDemoClass->setStatusBar(statusBar);

        mainToolBar->addAction(actOpenFile);
        mainToolBar->addAction(actSaveAs);
        mainToolBar->addAction(actPreview);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAddRow);
        mainToolBar->addAction(actInsertRow);
        mainToolBar->addAction(actDelRow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAlignLeft);
        mainToolBar->addAction(actAlignCenter);
        mainToolBar->addAction(actAlignRight);
        mainToolBar->addAction(actBlod);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QStandardItemModelDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), QStandardItemModelDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QStandardItemModelDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QStandardItemModelDemoClass)
    {
        QStandardItemModelDemoClass->setWindowTitle(QApplication::translate("QStandardItemModelDemoClass", "QStandardItemModelDemo", Q_NULLPTR));
        actOpenFile->setText(QApplication::translate("QStandardItemModelDemoClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actOpenFile->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actSaveAs->setText(QApplication::translate("QStandardItemModelDemoClass", "\345\217\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actSaveAs->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\345\217\246\345\255\230\346\226\207\344\273\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actPreview->setText(QApplication::translate("QStandardItemModelDemoClass", "\346\250\241\345\236\213\346\225\260\346\215\256\351\242\204\350\247\210", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actPreview->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\346\250\241\345\236\213\346\225\260\346\215\256\351\242\204\350\247\210", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAddRow->setText(QApplication::translate("QStandardItemModelDemoClass", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAddRow->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actInsertRow->setText(QApplication::translate("QStandardItemModelDemoClass", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actInsertRow->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actDelRow->setText(QApplication::translate("QStandardItemModelDemoClass", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actDelRow->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignLeft->setText(QApplication::translate("QStandardItemModelDemoClass", "\345\261\205\345\267\246", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignLeft->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\345\261\205\345\267\246", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignCenter->setText(QApplication::translate("QStandardItemModelDemoClass", "\345\261\205\344\270\255", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignCenter->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\345\261\205\344\270\255", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actAlignRight->setText(QApplication::translate("QStandardItemModelDemoClass", "\345\261\205\345\217\263", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actAlignRight->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\345\261\205\345\217\263", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actBlod->setText(QApplication::translate("QStandardItemModelDemoClass", "\347\262\227\344\275\223", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actBlod->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\347\262\227\344\275\223", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        actQuit->setText(QApplication::translate("QStandardItemModelDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        actQuit->setToolTip(QApplication::translate("QStandardItemModelDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("QStandardItemModelDemoClass", "TableView", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("QStandardItemModelDemoClass", "PlainTextEdit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QStandardItemModelDemoClass: public Ui_QStandardItemModelDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSTANDARDITEMMODELDEMO_H
