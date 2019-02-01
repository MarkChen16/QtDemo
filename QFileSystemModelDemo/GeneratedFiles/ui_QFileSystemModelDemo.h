/********************************************************************************
** Form generated from reading UI file 'QFileSystemModelDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QFILESYSTEMMODELDEMO_H
#define UI_QFILESYSTEMMODELDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QFileSystemModelDemoClass
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout;
    QSplitter *splitter;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_8;
    QTreeView *tvDir;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_7;
    QSplitter *splitter_4;
    QListView *lvDir;
    QTableView *tvDirItem;
    QGroupBox *groupBox;
    QLabel *labInfo;
    QLabel *labPos;
    QCheckBox *cbIsDir;

    void setupUi(QWidget *QFileSystemModelDemoClass)
    {
        if (QFileSystemModelDemoClass->objectName().isEmpty())
            QFileSystemModelDemoClass->setObjectName(QStringLiteral("QFileSystemModelDemoClass"));
        QFileSystemModelDemoClass->resize(752, 573);
        verticalLayout = new QVBoxLayout(QFileSystemModelDemoClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_2 = new QGroupBox(QFileSystemModelDemoClass);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        horizontalLayout = new QHBoxLayout(groupBox_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(groupBox_2);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        frame_5 = new QFrame(splitter);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMaximumSize(QSize(250, 16777215));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_5);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        tvDir = new QTreeView(frame_5);
        tvDir->setObjectName(QStringLiteral("tvDir"));

        verticalLayout_8->addWidget(tvDir);

        splitter->addWidget(frame_5);
        frame_3 = new QFrame(splitter);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        splitter_4 = new QSplitter(frame_3);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        lvDir = new QListView(splitter_4);
        lvDir->setObjectName(QStringLiteral("lvDir"));
        splitter_4->addWidget(lvDir);
        tvDirItem = new QTableView(splitter_4);
        tvDirItem->setObjectName(QStringLiteral("tvDirItem"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tvDirItem->sizePolicy().hasHeightForWidth());
        tvDirItem->setSizePolicy(sizePolicy);
        tvDirItem->setMaximumSize(QSize(16777215, 180));
        splitter_4->addWidget(tvDirItem);

        verticalLayout_7->addWidget(splitter_4);

        splitter->addWidget(frame_3);

        horizontalLayout->addWidget(splitter);


        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(QFileSystemModelDemoClass);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
        groupBox->setMaximumSize(QSize(16777215, 120));
        labInfo = new QLabel(groupBox);
        labInfo->setObjectName(QStringLiteral("labInfo"));
        labInfo->setGeometry(QRect(20, 20, 591, 41));
        labInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labPos = new QLabel(groupBox);
        labPos->setObjectName(QStringLiteral("labPos"));
        labPos->setGeometry(QRect(20, 70, 591, 41));
        labPos->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        cbIsDir = new QCheckBox(groupBox);
        cbIsDir->setObjectName(QStringLiteral("cbIsDir"));
        cbIsDir->setGeometry(QRect(630, 30, 81, 16));
        cbIsDir->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(groupBox);


        retranslateUi(QFileSystemModelDemoClass);

        QMetaObject::connectSlotsByName(QFileSystemModelDemoClass);
    } // setupUi

    void retranslateUi(QWidget *QFileSystemModelDemoClass)
    {
        QFileSystemModelDemoClass->setWindowTitle(QApplication::translate("QFileSystemModelDemoClass", "QFileSystemModelDemo", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        groupBox->setTitle(QString());
        labInfo->setText(QApplication::translate("QFileSystemModelDemoClass", "\347\233\256\346\240\207\344\277\241\346\201\257\357\274\232", Q_NULLPTR));
        labPos->setText(QApplication::translate("QFileSystemModelDemoClass", "\347\233\256\346\240\207\344\275\215\347\275\256\357\274\232", Q_NULLPTR));
        cbIsDir->setText(QApplication::translate("QFileSystemModelDemoClass", "\350\212\202\347\202\271\346\230\257\347\233\256\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QFileSystemModelDemoClass: public Ui_QFileSystemModelDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QFILESYSTEMMODELDEMO_H
