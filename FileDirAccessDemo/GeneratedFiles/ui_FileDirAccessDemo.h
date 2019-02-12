/********************************************************************************
** Form generated from reading UI file 'FileDirAccessDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEDIRACCESSDEMO_H
#define UI_FILEDIRACCESSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileDirAccessDemoClass
{
public:
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QToolBox *toolBox;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QPushButton *btnGetDirInfo;
    QPushButton *btnSetOrg;
    QPushButton *btnExit;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnFileOp;
    QPushButton *btnSetPermission;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *btnGetFileInfo;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_4;
    QPushButton *btnGetDirInformation;
    QPushButton *btnDirOp;
    QPushButton *btnLoopUpDir;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_5;
    QPushButton *btnTempDir;
    QPushButton *btnTempFile;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btnStartListen;
    QPushButton *btnStopListen;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QPushButton *btnOpenFile;
    QPushButton *btnOpenDir;
    QPushButton *btnClearText;
    QLabel *label;
    QLineEdit *txtFile;
    QLineEdit *txtDir;
    QLabel *label_2;
    QPlainTextEdit *ptInfo;
    QLabel *label_3;

    void setupUi(QDialog *FileDirAccessDemoClass)
    {
        if (FileDirAccessDemoClass->objectName().isEmpty())
            FileDirAccessDemoClass->setObjectName(QStringLiteral("FileDirAccessDemoClass"));
        FileDirAccessDemoClass->resize(712, 358);
        horizontalLayout = new QHBoxLayout(FileDirAccessDemoClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        splitter = new QSplitter(FileDirAccessDemoClass);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        toolBox = new QToolBox(splitter);
        toolBox->setObjectName(QStringLiteral("toolBox"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBox->sizePolicy().hasHeightForWidth());
        toolBox->setSizePolicy(sizePolicy);
        toolBox->setMaximumSize(QSize(175, 16777215));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        page->setGeometry(QRect(0, 0, 175, 184));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnGetDirInfo = new QPushButton(page);
        btnGetDirInfo->setObjectName(QStringLiteral("btnGetDirInfo"));

        verticalLayout->addWidget(btnGetDirInfo);

        btnSetOrg = new QPushButton(page);
        btnSetOrg->setObjectName(QStringLiteral("btnSetOrg"));

        verticalLayout->addWidget(btnSetOrg);

        btnExit = new QPushButton(page);
        btnExit->setObjectName(QStringLiteral("btnExit"));

        verticalLayout->addWidget(btnExit);

        toolBox->addItem(page, QString::fromUtf8("QCoreApplication\347\261\273"));
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        btnFileOp = new QPushButton(page_3);
        btnFileOp->setObjectName(QStringLiteral("btnFileOp"));

        verticalLayout_2->addWidget(btnFileOp);

        btnSetPermission = new QPushButton(page_3);
        btnSetPermission->setObjectName(QStringLiteral("btnSetPermission"));

        verticalLayout_2->addWidget(btnSetPermission);

        toolBox->addItem(page_3, QString::fromUtf8("QFile\347\261\273"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        verticalLayout_3 = new QVBoxLayout(page_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        btnGetFileInfo = new QPushButton(page_4);
        btnGetFileInfo->setObjectName(QStringLiteral("btnGetFileInfo"));

        verticalLayout_3->addWidget(btnGetFileInfo);

        toolBox->addItem(page_4, QString::fromUtf8("QFileInfo\347\261\273"));
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        verticalLayout_4 = new QVBoxLayout(page_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        btnGetDirInformation = new QPushButton(page_5);
        btnGetDirInformation->setObjectName(QStringLiteral("btnGetDirInformation"));

        verticalLayout_4->addWidget(btnGetDirInformation);

        btnDirOp = new QPushButton(page_5);
        btnDirOp->setObjectName(QStringLiteral("btnDirOp"));

        verticalLayout_4->addWidget(btnDirOp);

        btnLoopUpDir = new QPushButton(page_5);
        btnLoopUpDir->setObjectName(QStringLiteral("btnLoopUpDir"));

        verticalLayout_4->addWidget(btnLoopUpDir);

        toolBox->addItem(page_5, QString::fromUtf8("QDir\347\261\273"));
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        verticalLayout_5 = new QVBoxLayout(page_6);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        btnTempDir = new QPushButton(page_6);
        btnTempDir->setObjectName(QStringLiteral("btnTempDir"));

        verticalLayout_5->addWidget(btnTempDir);

        btnTempFile = new QPushButton(page_6);
        btnTempFile->setObjectName(QStringLiteral("btnTempFile"));

        verticalLayout_5->addWidget(btnTempFile);

        toolBox->addItem(page_6, QString::fromUtf8("QTemporaryDir\345\222\214QTemporaryFile"));
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        page_2->setGeometry(QRect(0, 0, 175, 184));
        verticalLayout_6 = new QVBoxLayout(page_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        btnStartListen = new QPushButton(page_2);
        btnStartListen->setObjectName(QStringLiteral("btnStartListen"));

        verticalLayout_6->addWidget(btnStartListen);

        btnStopListen = new QPushButton(page_2);
        btnStopListen->setObjectName(QStringLiteral("btnStopListen"));

        verticalLayout_6->addWidget(btnStopListen);

        toolBox->addItem(page_2, QString::fromUtf8("QFileSystemWatcher\347\261\273"));
        splitter->addWidget(toolBox);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 491, 71));
        btnOpenFile = new QPushButton(groupBox_2);
        btnOpenFile->setObjectName(QStringLiteral("btnOpenFile"));
        btnOpenFile->setGeometry(QRect(20, 20, 111, 31));
        btnOpenDir = new QPushButton(groupBox_2);
        btnOpenDir->setObjectName(QStringLiteral("btnOpenDir"));
        btnOpenDir->setGeometry(QRect(190, 20, 111, 31));
        btnClearText = new QPushButton(groupBox_2);
        btnClearText->setObjectName(QStringLiteral("btnClearText"));
        btnClearText->setGeometry(QRect(360, 20, 111, 31));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 100, 31, 21));
        txtFile = new QLineEdit(groupBox);
        txtFile->setObjectName(QStringLiteral("txtFile"));
        txtFile->setGeometry(QRect(60, 100, 431, 20));
        txtDir = new QLineEdit(groupBox);
        txtDir->setObjectName(QStringLiteral("txtDir"));
        txtDir->setGeometry(QRect(60, 130, 431, 20));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 31, 21));
        ptInfo = new QPlainTextEdit(groupBox);
        ptInfo->setObjectName(QStringLiteral("ptInfo"));
        ptInfo->setGeometry(QRect(60, 160, 431, 161));
        ptInfo->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        ptInfo->setLineWrapMode(QPlainTextEdit::NoWrap);
        ptInfo->setOverwriteMode(false);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 220, 31, 21));
        splitter->addWidget(groupBox);

        horizontalLayout->addWidget(splitter);


        retranslateUi(FileDirAccessDemoClass);

        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(FileDirAccessDemoClass);
    } // setupUi

    void retranslateUi(QDialog *FileDirAccessDemoClass)
    {
        FileDirAccessDemoClass->setWindowTitle(QApplication::translate("FileDirAccessDemoClass", "FileDirAccessDemo", Q_NULLPTR));
        btnGetDirInfo->setText(QApplication::translate("FileDirAccessDemoClass", "\350\216\267\345\217\226\347\250\213\345\272\217\344\277\241\346\201\257", Q_NULLPTR));
        btnSetOrg->setText(QApplication::translate("FileDirAccessDemoClass", "\350\256\276\347\275\256\346\234\272\346\236\204\345\220\215", Q_NULLPTR));
        btnExit->setText(QApplication::translate("FileDirAccessDemoClass", "\351\200\200\345\207\272\347\250\213\345\272\217", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("FileDirAccessDemoClass", "QCoreApplication\347\261\273", Q_NULLPTR));
        btnFileOp->setText(QApplication::translate("FileDirAccessDemoClass", "\345\244\215\345\210\266\343\200\201\351\207\215\345\221\275\345\220\215\343\200\201\345\210\240\351\231\244\346\226\207\344\273\266", Q_NULLPTR));
        btnSetPermission->setText(QApplication::translate("FileDirAccessDemoClass", "\350\256\276\347\275\256\346\226\207\344\273\266\347\232\204\346\235\203\351\231\220", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("FileDirAccessDemoClass", "QFile\347\261\273", Q_NULLPTR));
        btnGetFileInfo->setText(QApplication::translate("FileDirAccessDemoClass", "\350\216\267\345\217\226\346\226\207\344\273\266\344\277\241\346\201\257", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("FileDirAccessDemoClass", "QFileInfo\347\261\273", Q_NULLPTR));
        btnGetDirInformation->setText(QApplication::translate("FileDirAccessDemoClass", "\350\216\267\345\217\226\347\233\256\345\275\225\344\277\241\346\201\257", Q_NULLPTR));
        btnDirOp->setText(QApplication::translate("FileDirAccessDemoClass", "\346\226\207\344\273\266\347\233\256\345\275\225\346\223\215\344\275\234", Q_NULLPTR));
        btnLoopUpDir->setText(QApplication::translate("FileDirAccessDemoClass", "\351\201\215\345\216\206\346\226\207\344\273\266\347\233\256\345\275\225", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_5), QApplication::translate("FileDirAccessDemoClass", "QDir\347\261\273", Q_NULLPTR));
        btnTempDir->setText(QApplication::translate("FileDirAccessDemoClass", "\344\270\264\346\227\266\347\233\256\345\275\225\346\223\215\344\275\234", Q_NULLPTR));
        btnTempFile->setText(QApplication::translate("FileDirAccessDemoClass", "\344\270\264\346\227\266\346\226\207\344\273\266\346\223\215\344\275\234", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_6), QApplication::translate("FileDirAccessDemoClass", "QTemporaryDir\345\222\214QTemporaryFile", Q_NULLPTR));
        btnStartListen->setText(QApplication::translate("FileDirAccessDemoClass", "\345\274\200\345\220\257\347\233\221\345\220\254\346\226\207\344\273\266\347\233\256\345\275\225", Q_NULLPTR));
        btnStopListen->setText(QApplication::translate("FileDirAccessDemoClass", "\345\201\234\346\255\242\347\233\221\345\220\254\346\226\207\344\273\266\347\233\256\345\275\225", Q_NULLPTR));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("FileDirAccessDemoClass", "QFileSystemWatcher\347\261\273", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_2->setTitle(QString());
        btnOpenFile->setText(QApplication::translate("FileDirAccessDemoClass", "\346\211\223\345\274\200\346\226\207\344\273\266", Q_NULLPTR));
        btnOpenDir->setText(QApplication::translate("FileDirAccessDemoClass", "\346\211\223\345\274\200\347\233\256\345\275\225", Q_NULLPTR));
        btnClearText->setText(QApplication::translate("FileDirAccessDemoClass", "\346\270\205\351\231\244\346\226\207\346\234\254\346\241\206", Q_NULLPTR));
        label->setText(QApplication::translate("FileDirAccessDemoClass", "\346\226\207\344\273\266", Q_NULLPTR));
        label_2->setText(QApplication::translate("FileDirAccessDemoClass", "\347\233\256\345\275\225", Q_NULLPTR));
        label_3->setText(QApplication::translate("FileDirAccessDemoClass", "\344\277\241\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileDirAccessDemoClass: public Ui_FileDirAccessDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEDIRACCESSDEMO_H
