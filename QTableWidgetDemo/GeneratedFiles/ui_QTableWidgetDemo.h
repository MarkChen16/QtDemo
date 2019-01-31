/********************************************************************************
** Form generated from reading UI file 'QTableWidgetDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTABLEWIDGETDEMO_H
#define UI_QTABLEWIDGETDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTableWidgetDemoClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QFrame *frame;
    QPushButton *btnInitHead;
    QPushButton *btnSetRow;
    QPushButton *btnInitData;
    QPushButton *btnInsertRow;
    QPushButton *btnAddRow;
    QPushButton *btnDelRow;
    QPushButton *btnAutoColW;
    QPushButton *btnAutoRowH;
    QPushButton *btnReadToText;
    QCheckBox *cbEditable;
    QCheckBox *cbSpacingColor;
    QCheckBox *cbShowRowHead;
    QCheckBox *cbShowColHead;
    QRadioButton *rbSelRow;
    QRadioButton *rbSelCell;
    QSpinBox *sbRowCount;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QSplitter *splitter_2;
    QTableWidget *tableWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTableWidgetDemoClass)
    {
        if (QTableWidgetDemoClass->objectName().isEmpty())
            QTableWidgetDemoClass->setObjectName(QStringLiteral("QTableWidgetDemoClass"));
        QTableWidgetDemoClass->resize(754, 423);
        centralWidget = new QWidget(QTableWidgetDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame = new QFrame(splitter);
        frame->setObjectName(QStringLiteral("frame"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(190, 16777215));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);
        btnInitHead = new QPushButton(frame);
        btnInitHead->setObjectName(QStringLiteral("btnInitHead"));
        btnInitHead->setGeometry(QRect(10, 10, 171, 23));
        btnSetRow = new QPushButton(frame);
        btnSetRow->setObjectName(QStringLiteral("btnSetRow"));
        btnSetRow->setGeometry(QRect(10, 40, 81, 23));
        btnInitData = new QPushButton(frame);
        btnInitData->setObjectName(QStringLiteral("btnInitData"));
        btnInitData->setGeometry(QRect(10, 70, 171, 23));
        btnInsertRow = new QPushButton(frame);
        btnInsertRow->setObjectName(QStringLiteral("btnInsertRow"));
        btnInsertRow->setGeometry(QRect(10, 100, 81, 23));
        btnAddRow = new QPushButton(frame);
        btnAddRow->setObjectName(QStringLiteral("btnAddRow"));
        btnAddRow->setGeometry(QRect(100, 100, 81, 23));
        btnDelRow = new QPushButton(frame);
        btnDelRow->setObjectName(QStringLiteral("btnDelRow"));
        btnDelRow->setGeometry(QRect(10, 130, 171, 23));
        btnAutoColW = new QPushButton(frame);
        btnAutoColW->setObjectName(QStringLiteral("btnAutoColW"));
        btnAutoColW->setGeometry(QRect(100, 160, 81, 23));
        btnAutoRowH = new QPushButton(frame);
        btnAutoRowH->setObjectName(QStringLiteral("btnAutoRowH"));
        btnAutoRowH->setGeometry(QRect(10, 160, 81, 23));
        btnReadToText = new QPushButton(frame);
        btnReadToText->setObjectName(QStringLiteral("btnReadToText"));
        btnReadToText->setGeometry(QRect(10, 190, 171, 23));
        cbEditable = new QCheckBox(frame);
        cbEditable->setObjectName(QStringLiteral("cbEditable"));
        cbEditable->setGeometry(QRect(10, 220, 91, 20));
        cbEditable->setChecked(true);
        cbSpacingColor = new QCheckBox(frame);
        cbSpacingColor->setObjectName(QStringLiteral("cbSpacingColor"));
        cbSpacingColor->setGeometry(QRect(100, 220, 91, 20));
        cbSpacingColor->setChecked(true);
        cbShowRowHead = new QCheckBox(frame);
        cbShowRowHead->setObjectName(QStringLiteral("cbShowRowHead"));
        cbShowRowHead->setGeometry(QRect(10, 250, 91, 20));
        cbShowRowHead->setChecked(true);
        cbShowColHead = new QCheckBox(frame);
        cbShowColHead->setObjectName(QStringLiteral("cbShowColHead"));
        cbShowColHead->setGeometry(QRect(100, 250, 91, 20));
        cbShowColHead->setChecked(true);
        rbSelRow = new QRadioButton(frame);
        rbSelRow->setObjectName(QStringLiteral("rbSelRow"));
        rbSelRow->setGeometry(QRect(10, 280, 71, 20));
        rbSelRow->setChecked(true);
        rbSelCell = new QRadioButton(frame);
        rbSelCell->setObjectName(QStringLiteral("rbSelCell"));
        rbSelCell->setGeometry(QRect(100, 280, 81, 20));
        sbRowCount = new QSpinBox(frame);
        sbRowCount->setObjectName(QStringLiteral("sbRowCount"));
        sbRowCount->setGeometry(QRect(100, 40, 81, 22));
        sbRowCount->setMaximum(9999);
        sbRowCount->setValue(10);
        splitter->addWidget(frame);
        frame_2 = new QFrame(splitter);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        splitter_2 = new QSplitter(frame_2);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        tableWidget = new QTableWidget(splitter_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 6)
            tableWidget->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem10);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        splitter_2->addWidget(tableWidget);
        plainTextEdit = new QPlainTextEdit(splitter_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(plainTextEdit->sizePolicy().hasHeightForWidth());
        plainTextEdit->setSizePolicy(sizePolicy1);
        plainTextEdit->setMaximumSize(QSize(16777215, 100));
        splitter_2->addWidget(plainTextEdit);

        horizontalLayout_2->addWidget(splitter_2);

        splitter->addWidget(frame_2);

        horizontalLayout->addWidget(splitter);

        QTableWidgetDemoClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QTableWidgetDemoClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 23));
        QTableWidgetDemoClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTableWidgetDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTableWidgetDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTableWidgetDemoClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTableWidgetDemoClass->setStatusBar(statusBar);

        retranslateUi(QTableWidgetDemoClass);

        QMetaObject::connectSlotsByName(QTableWidgetDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTableWidgetDemoClass)
    {
        QTableWidgetDemoClass->setWindowTitle(QApplication::translate("QTableWidgetDemoClass", "QTableWidgetDemo", Q_NULLPTR));
        btnInitHead->setText(QApplication::translate("QTableWidgetDemoClass", "\350\256\276\347\275\256\350\241\250\345\244\264", Q_NULLPTR));
        btnSetRow->setText(QApplication::translate("QTableWidgetDemoClass", "\350\256\276\347\275\256\350\241\214\346\225\260", Q_NULLPTR));
        btnInitData->setText(QApplication::translate("QTableWidgetDemoClass", "\345\210\235\345\247\213\345\214\226\350\241\250\346\240\274\346\225\260\346\215\256", Q_NULLPTR));
        btnInsertRow->setText(QApplication::translate("QTableWidgetDemoClass", "\346\217\222\345\205\245\350\241\214", Q_NULLPTR));
        btnAddRow->setText(QApplication::translate("QTableWidgetDemoClass", "\346\267\273\345\212\240\350\241\214", Q_NULLPTR));
        btnDelRow->setText(QApplication::translate("QTableWidgetDemoClass", "\345\210\240\351\231\244\350\241\214", Q_NULLPTR));
        btnAutoColW->setText(QApplication::translate("QTableWidgetDemoClass", "\350\207\252\345\212\250\350\260\203\350\212\202\345\210\227\345\256\275", Q_NULLPTR));
        btnAutoRowH->setText(QApplication::translate("QTableWidgetDemoClass", "\350\207\252\345\212\250\350\260\203\350\212\202\350\241\214\351\253\230", Q_NULLPTR));
        btnReadToText->setText(QApplication::translate("QTableWidgetDemoClass", "\350\257\273\345\217\226\350\241\250\346\240\274\345\206\205\345\256\271\345\210\260\346\226\207\346\234\254", Q_NULLPTR));
        cbEditable->setText(QApplication::translate("QTableWidgetDemoClass", "\350\241\250\346\240\274\345\217\257\347\274\226\350\276\221", Q_NULLPTR));
        cbSpacingColor->setText(QApplication::translate("QTableWidgetDemoClass", "\351\227\264\351\232\224\350\241\214\345\272\225\350\211\262", Q_NULLPTR));
        cbShowRowHead->setText(QApplication::translate("QTableWidgetDemoClass", "\346\230\276\347\244\272\350\241\214\350\241\250\345\244\264", Q_NULLPTR));
        cbShowColHead->setText(QApplication::translate("QTableWidgetDemoClass", "\346\230\276\347\244\272\345\210\227\350\241\250\345\244\264", Q_NULLPTR));
        rbSelRow->setText(QApplication::translate("QTableWidgetDemoClass", "\350\241\214\351\200\211\346\213\251", Q_NULLPTR));
        rbSelCell->setText(QApplication::translate("QTableWidgetDemoClass", "\345\215\225\345\205\203\346\240\274\351\200\211\346\213\251", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("QTableWidgetDemoClass", "A", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("QTableWidgetDemoClass", "B", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("QTableWidgetDemoClass", "C", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("QTableWidgetDemoClass", "D", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("QTableWidgetDemoClass", "E", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("QTableWidgetDemoClass", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("QTableWidgetDemoClass", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("QTableWidgetDemoClass", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("QTableWidgetDemoClass", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("QTableWidgetDemoClass", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("QTableWidgetDemoClass", "6", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QTableWidgetDemoClass: public Ui_QTableWidgetDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTABLEWIDGETDEMO_H
