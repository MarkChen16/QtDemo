/********************************************************************************
** Form generated from reading UI file 'QSqlTableModelDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QSQLTABLEMODELDEMO_H
#define UI_QSQLTABLEMODELDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QSqlTableModelDemoClass
{
public:
    QAction *actOpen;
    QAction *actAdd;
    QAction *actInsert;
    QAction *actDelete;
    QAction *actSetImage;
    QAction *actClearImage;
    QAction *actAddSalary;
    QAction *actSave;
    QAction *actCancel;
    QAction *actQuit;
    QAction *actCutSalary;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QGroupBox *groupBox_5;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox_Sort;
    QLabel *label;
    QComboBox *cbSort;
    QRadioButton *rbAsc;
    QRadioButton *rbDesc;
    QGroupBox *groupBox_Filter;
    QRadioButton *rbBoy;
    QRadioButton *rbGril;
    QRadioButton *rbBoyAndGril;
    QTableView *tv;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QSpinBox *sbEmpNo;
    QLineEdit *txtName;
    QLabel *label_3;
    QComboBox *cbSex;
    QLabel *label_4;
    QLabel *label_5;
    QDateEdit *dtBirthday;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *txtMobile;
    QComboBox *cbProv;
    QLabel *label_8;
    QLineEdit *txtCity;
    QLabel *label_9;
    QComboBox *cbPartment;
    QLabel *label_10;
    QComboBox *cbEducation;
    QLabel *label_11;
    QSpinBox *sbSalary;
    QLabel *label_12;
    QLabel *label_13;
    QPlainTextEdit *ptMemo;
    QLabel *labPhoto;
    QDoubleSpinBox *sbHeight;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *QSqlTableModelDemoClass)
    {
        if (QSqlTableModelDemoClass->objectName().isEmpty())
            QSqlTableModelDemoClass->setObjectName(QStringLiteral("QSqlTableModelDemoClass"));
        QSqlTableModelDemoClass->resize(856, 595);
        actOpen = new QAction(QSqlTableModelDemoClass);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/MYSL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actAdd = new QAction(QSqlTableModelDemoClass);
        actAdd->setObjectName(QStringLiteral("actAdd"));
        actAdd->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/POSTITL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAdd->setIcon(icon1);
        actInsert = new QAction(QSqlTableModelDemoClass);
        actInsert->setObjectName(QStringLiteral("actInsert"));
        actInsert->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/NOTEL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actInsert->setIcon(icon2);
        actDelete = new QAction(QSqlTableModelDemoClass);
        actDelete->setObjectName(QStringLiteral("actDelete"));
        actDelete->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/CNFNOT.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actDelete->setIcon(icon3);
        actSetImage = new QAction(QSqlTableModelDemoClass);
        actSetImage->setObjectName(QStringLiteral("actSetImage"));
        actSetImage->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/MSN.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actSetImage->setIcon(icon4);
        actClearImage = new QAction(QSqlTableModelDemoClass);
        actClearImage->setObjectName(QStringLiteral("actClearImage"));
        actClearImage->setEnabled(false);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/DISTLSTL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actClearImage->setIcon(icon5);
        actAddSalary = new QAction(QSqlTableModelDemoClass);
        actAddSalary->setObjectName(QStringLiteral("actAddSalary"));
        actAddSalary->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/SIGNL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actAddSalary->setIcon(icon6);
        actSave = new QAction(QSqlTableModelDemoClass);
        actSave->setObjectName(QStringLiteral("actSave"));
        actSave->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/FOLDER.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon7);
        actCancel = new QAction(QSqlTableModelDemoClass);
        actCancel->setObjectName(QStringLiteral("actCancel"));
        actCancel->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/EXITEML.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actCancel->setIcon(icon8);
        actQuit = new QAction(QSqlTableModelDemoClass);
        actQuit->setObjectName(QStringLiteral("actQuit"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/OOFL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon9);
        actCutSalary = new QAction(QSqlTableModelDemoClass);
        actCutSalary->setObjectName(QStringLiteral("actCutSalary"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/QSqlTabelModelDemo/Resources/TASKDECL.ICO"), QSize(), QIcon::Normal, QIcon::Off);
        actCutSalary->setIcon(icon10);
        centralWidget = new QWidget(QSqlTableModelDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter_2 = new QSplitter(centralWidget);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        groupBox_5 = new QGroupBox(splitter);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setMinimumSize(QSize(0, 100));
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        groupBox_5->setBaseSize(QSize(0, 0));
        horizontalLayout_2 = new QHBoxLayout(groupBox_5);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        groupBox_Sort = new QGroupBox(groupBox_5);
        groupBox_Sort->setObjectName(QStringLiteral("groupBox_Sort"));
        groupBox_Sort->setEnabled(false);
        label = new QLabel(groupBox_Sort);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 22, 61, 20));
        cbSort = new QComboBox(groupBox_Sort);
        cbSort->setObjectName(QStringLiteral("cbSort"));
        cbSort->setGeometry(QRect(70, 20, 121, 22));
        cbSort->setEditable(true);
        rbAsc = new QRadioButton(groupBox_Sort);
        rbAsc->setObjectName(QStringLiteral("rbAsc"));
        rbAsc->setGeometry(QRect(70, 50, 41, 21));
        rbAsc->setChecked(true);
        rbDesc = new QRadioButton(groupBox_Sort);
        rbDesc->setObjectName(QStringLiteral("rbDesc"));
        rbDesc->setGeometry(QRect(160, 50, 41, 21));

        horizontalLayout_2->addWidget(groupBox_Sort);

        groupBox_Filter = new QGroupBox(groupBox_5);
        groupBox_Filter->setObjectName(QStringLiteral("groupBox_Filter"));
        groupBox_Filter->setEnabled(false);
        rbBoy = new QRadioButton(groupBox_Filter);
        rbBoy->setObjectName(QStringLiteral("rbBoy"));
        rbBoy->setGeometry(QRect(30, 20, 41, 16));
        rbGril = new QRadioButton(groupBox_Filter);
        rbGril->setObjectName(QStringLiteral("rbGril"));
        rbGril->setGeometry(QRect(130, 20, 41, 16));
        rbBoyAndGril = new QRadioButton(groupBox_Filter);
        rbBoyAndGril->setObjectName(QStringLiteral("rbBoyAndGril"));
        rbBoyAndGril->setGeometry(QRect(30, 50, 91, 16));
        rbBoyAndGril->setChecked(true);

        horizontalLayout_2->addWidget(groupBox_Filter);

        splitter->addWidget(groupBox_5);
        tv = new QTableView(splitter);
        tv->setObjectName(QStringLiteral("tv"));
        splitter->addWidget(tv);

        verticalLayout->addWidget(splitter);

        splitter_2->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 20, 41, 21));
        sbEmpNo = new QSpinBox(groupBox_2);
        sbEmpNo->setObjectName(QStringLiteral("sbEmpNo"));
        sbEmpNo->setGeometry(QRect(70, 20, 81, 22));
        txtName = new QLineEdit(groupBox_2);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(70, 50, 81, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 50, 41, 21));
        cbSex = new QComboBox(groupBox_2);
        cbSex->setObjectName(QStringLiteral("cbSex"));
        cbSex->setGeometry(QRect(70, 80, 81, 22));
        cbSex->setEditable(true);
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 80, 41, 21));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 110, 41, 21));
        dtBirthday = new QDateEdit(groupBox_2);
        dtBirthday->setObjectName(QStringLiteral("dtBirthday"));
        dtBirthday->setGeometry(QRect(70, 140, 81, 22));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 140, 51, 21));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 170, 41, 21));
        txtMobile = new QLineEdit(groupBox_2);
        txtMobile->setObjectName(QStringLiteral("txtMobile"));
        txtMobile->setGeometry(QRect(70, 170, 81, 20));
        cbProv = new QComboBox(groupBox_2);
        cbProv->setObjectName(QStringLiteral("cbProv"));
        cbProv->setGeometry(QRect(70, 200, 81, 22));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 200, 51, 21));
        txtCity = new QLineEdit(groupBox_2);
        txtCity->setObjectName(QStringLiteral("txtCity"));
        txtCity->setGeometry(QRect(70, 230, 81, 20));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(20, 230, 41, 21));
        cbPartment = new QComboBox(groupBox_2);
        cbPartment->setObjectName(QStringLiteral("cbPartment"));
        cbPartment->setGeometry(QRect(70, 260, 81, 22));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 260, 41, 21));
        cbEducation = new QComboBox(groupBox_2);
        cbEducation->setObjectName(QStringLiteral("cbEducation"));
        cbEducation->setGeometry(QRect(70, 290, 81, 22));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(20, 290, 41, 21));
        sbSalary = new QSpinBox(groupBox_2);
        sbSalary->setObjectName(QStringLiteral("sbSalary"));
        sbSalary->setGeometry(QRect(70, 320, 81, 22));
        sbSalary->setMaximum(10000000);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(20, 320, 41, 21));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 410, 41, 21));
        ptMemo = new QPlainTextEdit(groupBox_2);
        ptMemo->setObjectName(QStringLiteral("ptMemo"));
        ptMemo->setGeometry(QRect(70, 350, 211, 141));
        labPhoto = new QLabel(groupBox_2);
        labPhoto->setObjectName(QStringLiteral("labPhoto"));
        labPhoto->setGeometry(QRect(180, 20, 111, 121));
        labPhoto->setFrameShape(QFrame::Box);
        sbHeight = new QDoubleSpinBox(groupBox_2);
        sbHeight->setObjectName(QStringLiteral("sbHeight"));
        sbHeight->setGeometry(QRect(70, 110, 81, 22));
        splitter_2->addWidget(groupBox_2);

        horizontalLayout->addWidget(splitter_2);

        QSqlTableModelDemoClass->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(QSqlTableModelDemoClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        QSqlTableModelDemoClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAdd);
        mainToolBar->addAction(actInsert);
        mainToolBar->addAction(actDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actSetImage);
        mainToolBar->addAction(actClearImage);
        mainToolBar->addAction(actAddSalary);
        mainToolBar->addAction(actCutSalary);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actSave);
        mainToolBar->addAction(actCancel);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(QSqlTableModelDemoClass);
        QObject::connect(actQuit, SIGNAL(triggered()), QSqlTableModelDemoClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QSqlTableModelDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *QSqlTableModelDemoClass)
    {
        QSqlTableModelDemoClass->setWindowTitle(QApplication::translate("QSqlTableModelDemoClass", "QSqlTabelModelDemo", Q_NULLPTR));
        actOpen->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\211\223\345\274\200", Q_NULLPTR));
        actAdd->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\267\273\345\212\240", Q_NULLPTR));
        actInsert->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\217\222\345\205\245", Q_NULLPTR));
        actDelete->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\210\240\351\231\244", Q_NULLPTR));
        actSetImage->setText(QApplication::translate("QSqlTableModelDemoClass", "\350\256\276\347\275\256\347\205\247\347\211\207", Q_NULLPTR));
        actClearImage->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\270\205\351\231\244\347\205\247\347\211\207", Q_NULLPTR));
        actAddSalary->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\266\250\345\267\245\350\265\204", Q_NULLPTR));
        actSave->setText(QApplication::translate("QSqlTableModelDemoClass", "\344\277\235\345\255\230", Q_NULLPTR));
        actCancel->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\217\226\346\266\210", Q_NULLPTR));
        actQuit->setText(QApplication::translate("QSqlTableModelDemoClass", "\351\200\200\345\207\272", Q_NULLPTR));
        actCutSalary->setText(QApplication::translate("QSqlTableModelDemoClass", "\351\231\215\345\267\245\350\265\204", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_5->setTitle(QString());
        groupBox_Sort->setTitle(QApplication::translate("QSqlTableModelDemoClass", "\346\216\222\345\272\217", Q_NULLPTR));
        label->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\216\222\345\272\217\345\255\227\346\256\265\357\274\232", Q_NULLPTR));
        rbAsc->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\215\207\345\272\217", Q_NULLPTR));
        rbDesc->setText(QApplication::translate("QSqlTableModelDemoClass", "\351\231\215\345\272\217", Q_NULLPTR));
        groupBox_Filter->setTitle(QApplication::translate("QSqlTableModelDemoClass", "\350\277\207\346\273\244", Q_NULLPTR));
        rbBoy->setText(QApplication::translate("QSqlTableModelDemoClass", "\347\224\267", Q_NULLPTR));
        rbGril->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\245\263", Q_NULLPTR));
        rbBoyAndGril->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\205\250\351\203\250\346\230\276\347\244\272", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_2->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\267\245  \345\217\267", Q_NULLPTR));
        label_3->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\247\223  \345\220\215", Q_NULLPTR));
        cbSex->clear();
        cbSex->insertItems(0, QStringList()
         << QApplication::translate("QSqlTableModelDemoClass", "\347\224\267", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\245\263", Q_NULLPTR)
        );
        label_4->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\200\247  \345\210\253", Q_NULLPTR));
        label_5->setText(QApplication::translate("QSqlTableModelDemoClass", "\350\272\253  \351\253\230", Q_NULLPTR));
        label_6->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\207\272\347\224\237\346\227\245\346\234\237", Q_NULLPTR));
        label_7->setText(QApplication::translate("QSqlTableModelDemoClass", "\346\211\213\346\234\272\345\217\267", Q_NULLPTR));
        cbProv->clear();
        cbProv->insertItems(0, QStringList()
         << QApplication::translate("QSqlTableModelDemoClass", "\345\271\277\344\270\234", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\271\277\350\245\277", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\261\261\344\270\234", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\261\261\350\245\277", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\262\263\345\215\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\262\263\345\214\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\271\226\345\215\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\271\226\345\214\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\265\267\345\215\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\350\245\277\350\227\217", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\344\272\221\345\215\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\233\233\345\267\235", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\350\264\265\345\267\236", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\256\211\345\276\275", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\261\237\350\213\217", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\265\231\346\261\237", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\256\201\345\244\217", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\226\260\347\226\206", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\206\205\350\222\231", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\351\273\221\351\276\231\346\261\237", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\350\276\275\345\256\201", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\220\211\346\236\227", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\261\237\350\245\277", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\261\261\350\245\277", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\347\246\217\345\273\272", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\351\231\225\350\245\277", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\347\224\230\350\202\203", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\351\235\222\346\265\267", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\217\260\346\271\276", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\207\272\347\224\237\347\234\201\344\273\275", Q_NULLPTR));
        label_9->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\237\216  \345\270\202", Q_NULLPTR));
        cbPartment->clear();
        cbPartment->insertItems(0, QStringList()
         << QApplication::translate("QSqlTableModelDemoClass", "\351\224\200\345\224\256\351\203\250", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\346\212\200\346\234\257\351\203\250", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\220\216\345\213\244\351\203\250", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\350\264\246\345\212\241\351\203\250", Q_NULLPTR)
        );
        label_10->setText(QApplication::translate("QSqlTableModelDemoClass", "\351\203\250  \351\227\250", Q_NULLPTR));
        cbEducation->clear();
        cbEducation->insertItems(0, QStringList()
         << QApplication::translate("QSqlTableModelDemoClass", "\345\244\247\345\255\246\346\234\254\347\247\221", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\345\244\247\345\255\246\344\270\223\347\247\221", Q_NULLPTR)
         << QApplication::translate("QSqlTableModelDemoClass", "\347\240\224\347\251\266\347\224\237", Q_NULLPTR)
        );
        label_11->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\255\246  \345\216\206", Q_NULLPTR));
        label_12->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\267\245  \350\265\204", Q_NULLPTR));
        label_13->setText(QApplication::translate("QSqlTableModelDemoClass", "\345\244\207  \346\263\250", Q_NULLPTR));
        labPhoto->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QSqlTableModelDemoClass: public Ui_QSqlTableModelDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QSQLTABLEMODELDEMO_H
