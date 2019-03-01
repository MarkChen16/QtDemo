/********************************************************************************
** Form generated from reading UI file 'DownloadUrlFileDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADURLFILEDEMO_H
#define UI_DOWNLOADURLFILEDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadUrlFileDemoClass
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *txtUrl;
    QPushButton *btnDownload;
    QLabel *label_2;
    QProgressBar *pbDownload;

    void setupUi(QMainWindow *DownloadUrlFileDemoClass)
    {
        if (DownloadUrlFileDemoClass->objectName().isEmpty())
            DownloadUrlFileDemoClass->setObjectName(QStringLiteral("DownloadUrlFileDemoClass"));
        DownloadUrlFileDemoClass->resize(464, 91);
        centralWidget = new QWidget(DownloadUrlFileDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 20, 31, 21));
        txtUrl = new QLineEdit(centralWidget);
        txtUrl->setObjectName(QStringLiteral("txtUrl"));
        txtUrl->setGeometry(QRect(40, 20, 331, 20));
        btnDownload = new QPushButton(centralWidget);
        btnDownload->setObjectName(QStringLiteral("btnDownload"));
        btnDownload->setGeometry(QRect(380, 20, 75, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 50, 61, 21));
        pbDownload = new QProgressBar(centralWidget);
        pbDownload->setObjectName(QStringLiteral("pbDownload"));
        pbDownload->setGeometry(QRect(70, 50, 301, 23));
        pbDownload->setValue(0);
        pbDownload->setAlignment(Qt::AlignCenter);
        DownloadUrlFileDemoClass->setCentralWidget(centralWidget);

        retranslateUi(DownloadUrlFileDemoClass);

        QMetaObject::connectSlotsByName(DownloadUrlFileDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *DownloadUrlFileDemoClass)
    {
        DownloadUrlFileDemoClass->setWindowTitle(QApplication::translate("DownloadUrlFileDemoClass", "DownloadUrlFileDemo", Q_NULLPTR));
        label->setText(QApplication::translate("DownloadUrlFileDemoClass", "URL\357\274\232", Q_NULLPTR));
        txtUrl->setText(QApplication::translate("DownloadUrlFileDemoClass", "http://qunying.jb51.net:81/201011/books/gof23_pdf.rar", Q_NULLPTR));
        btnDownload->setText(QApplication::translate("DownloadUrlFileDemoClass", "\344\270\213\350\275\275\345\271\266\346\211\223\345\274\200", Q_NULLPTR));
        label_2->setText(QApplication::translate("DownloadUrlFileDemoClass", "\344\270\213\350\275\275\350\277\233\345\272\246\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DownloadUrlFileDemoClass: public Ui_DownloadUrlFileDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADURLFILEDEMO_H
