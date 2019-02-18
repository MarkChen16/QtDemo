/********************************************************************************
** Form generated from reading UI file 'Q3DBarsDemo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Q3DBARSDEMO_H
#define UI_Q3DBARSDEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Q3DBarsDemoClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *cbCameraPreset;
    QLabel *label_2;
    QSlider *hsHorPos;
    QLabel *label_3;
    QSlider *hsVerPos;
    QLabel *label_4;
    QSlider *hsZoom;
    QLabel *label_5;
    QComboBox *cbTheme;
    QLabel *label_6;
    QComboBox *cbMeshType;
    QLabel *label_7;
    QComboBox *cbSelectMode;
    QLabel *label_8;
    QSpinBox *sbFontSize;
    QPushButton *btnItemColor;
    QFormLayout *formLayout_2;
    QCheckBox *cbShowBG;
    QCheckBox *cbShowBGGrad;
    QCheckBox *cbMeshSmooth;
    QCheckBox *cbInvImage;
    QCheckBox *cbAxisReverse;
    QCheckBox *cbShowLabel;
    QCheckBox *cbAxisShowTitle;
    QSpacerItem *horizontalSpacer;
    QCheckBox *cbAxisBGShowLabel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QMainWindow *Q3DBarsDemoClass)
    {
        if (Q3DBarsDemoClass->objectName().isEmpty())
            Q3DBarsDemoClass->setObjectName(QStringLiteral("Q3DBarsDemoClass"));
        Q3DBarsDemoClass->resize(652, 430);
        centralWidget = new QWidget(Q3DBarsDemoClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 251, 411));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cbCameraPreset = new QComboBox(groupBox);
        cbCameraPreset->setObjectName(QStringLiteral("cbCameraPreset"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cbCameraPreset);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        hsHorPos = new QSlider(groupBox);
        hsHorPos->setObjectName(QStringLiteral("hsHorPos"));
        hsHorPos->setMinimum(-180);
        hsHorPos->setMaximum(180);
        hsHorPos->setOrientation(Qt::Horizontal);

        formLayout->setWidget(1, QFormLayout::FieldRole, hsHorPos);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        hsVerPos = new QSlider(groupBox);
        hsVerPos->setObjectName(QStringLiteral("hsVerPos"));
        hsVerPos->setMinimum(-90);
        hsVerPos->setMaximum(90);
        hsVerPos->setOrientation(Qt::Horizontal);

        formLayout->setWidget(2, QFormLayout::FieldRole, hsVerPos);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        hsZoom = new QSlider(groupBox);
        hsZoom->setObjectName(QStringLiteral("hsZoom"));
        hsZoom->setMinimum(10);
        hsZoom->setMaximum(500);
        hsZoom->setValue(100);
        hsZoom->setOrientation(Qt::Horizontal);

        formLayout->setWidget(3, QFormLayout::FieldRole, hsZoom);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        cbTheme = new QComboBox(groupBox);
        cbTheme->setObjectName(QStringLiteral("cbTheme"));

        formLayout->setWidget(4, QFormLayout::FieldRole, cbTheme);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        cbMeshType = new QComboBox(groupBox);
        cbMeshType->setObjectName(QStringLiteral("cbMeshType"));

        formLayout->setWidget(5, QFormLayout::FieldRole, cbMeshType);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        cbSelectMode = new QComboBox(groupBox);
        cbSelectMode->setObjectName(QStringLiteral("cbSelectMode"));

        formLayout->setWidget(6, QFormLayout::FieldRole, cbSelectMode);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);

        sbFontSize = new QSpinBox(groupBox);
        sbFontSize->setObjectName(QStringLiteral("sbFontSize"));
        sbFontSize->setValue(40);

        formLayout->setWidget(7, QFormLayout::FieldRole, sbFontSize);


        verticalLayout->addLayout(formLayout);

        btnItemColor = new QPushButton(groupBox);
        btnItemColor->setObjectName(QStringLiteral("btnItemColor"));

        verticalLayout->addWidget(btnItemColor);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        cbShowBG = new QCheckBox(groupBox);
        cbShowBG->setObjectName(QStringLiteral("cbShowBG"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, cbShowBG);

        cbShowBGGrad = new QCheckBox(groupBox);
        cbShowBGGrad->setObjectName(QStringLiteral("cbShowBGGrad"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, cbShowBGGrad);

        cbMeshSmooth = new QCheckBox(groupBox);
        cbMeshSmooth->setObjectName(QStringLiteral("cbMeshSmooth"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, cbMeshSmooth);

        cbInvImage = new QCheckBox(groupBox);
        cbInvImage->setObjectName(QStringLiteral("cbInvImage"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, cbInvImage);

        cbAxisReverse = new QCheckBox(groupBox);
        cbAxisReverse->setObjectName(QStringLiteral("cbAxisReverse"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, cbAxisReverse);

        cbShowLabel = new QCheckBox(groupBox);
        cbShowLabel->setObjectName(QStringLiteral("cbShowLabel"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, cbShowLabel);

        cbAxisShowTitle = new QCheckBox(groupBox);
        cbAxisShowTitle->setObjectName(QStringLiteral("cbAxisShowTitle"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, cbAxisShowTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(3, QFormLayout::FieldRole, horizontalSpacer);

        cbAxisBGShowLabel = new QCheckBox(groupBox);
        cbAxisBGShowLabel->setObjectName(QStringLiteral("cbAxisBGShowLabel"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, cbAxisBGShowLabel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        formLayout_2->setItem(4, QFormLayout::FieldRole, horizontalSpacer_2);


        verticalLayout->addLayout(formLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        Q3DBarsDemoClass->setCentralWidget(centralWidget);

        retranslateUi(Q3DBarsDemoClass);

        QMetaObject::connectSlotsByName(Q3DBarsDemoClass);
    } // setupUi

    void retranslateUi(QMainWindow *Q3DBarsDemoClass)
    {
        Q3DBarsDemoClass->setWindowTitle(QApplication::translate("Q3DBarsDemoClass", "Q3DBarsDemo", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("Q3DBarsDemoClass", "\351\242\204\350\256\276\350\247\206\350\247\222", Q_NULLPTR));
        cbCameraPreset->clear();
        cbCameraPreset->insertItems(0, QStringList()
         << QApplication::translate("Q3DBarsDemoClass", "FrontLow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "Front", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "FrontHigh", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "LeftLow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "Left", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "LeftHigh", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "RightLow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "Right", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "RightHigh", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "BehindLow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "Behind", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "BehindHigh", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("Q3DBarsDemoClass", "\346\260\264\345\271\263\346\227\213\350\275\254", Q_NULLPTR));
        label_3->setText(QApplication::translate("Q3DBarsDemoClass", "\345\236\202\347\233\264\346\227\213\350\275\254", Q_NULLPTR));
        label_4->setText(QApplication::translate("Q3DBarsDemoClass", "\347\274\251  \346\224\276", Q_NULLPTR));
        label_5->setText(QApplication::translate("Q3DBarsDemoClass", "\344\270\273  \351\242\230", Q_NULLPTR));
        cbTheme->clear();
        cbTheme->insertItems(0, QStringList()
         << QApplication::translate("Q3DBarsDemoClass", "ThemeQt", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemePrimaryColors", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeDigia", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeStoneMoss", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeArmyBlue", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeRetro", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeEbony", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeIsabelle", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "ThemeUserDefined", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("Q3DBarsDemoClass", "\346\243\222\345\233\276\346\240\267\345\274\217", Q_NULLPTR));
        cbMeshType->clear();
        cbMeshType->insertItems(0, QStringList()
         << QApplication::translate("Q3DBarsDemoClass", "MeshBar", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshCube", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshPyramid", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshCone", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshCylinder", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshBevelBar", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshBevelCube", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshSphere", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshMinimal", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshArrow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "MeshPoint", Q_NULLPTR)
        );
        label_7->setText(QApplication::translate("Q3DBarsDemoClass", "\351\200\211\346\213\251\346\250\241\345\274\217", Q_NULLPTR));
        cbSelectMode->clear();
        cbSelectMode->insertItems(0, QStringList()
         << QApplication::translate("Q3DBarsDemoClass", "SelectionNone", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionItem", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionRow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionItemAndRow", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionColumn", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionItemAndColumn", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionRowAndColumn", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionItemRowAndColumn", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionSlice", Q_NULLPTR)
         << QApplication::translate("Q3DBarsDemoClass", "SelectionMultiSeries", Q_NULLPTR)
        );
        label_8->setText(QApplication::translate("Q3DBarsDemoClass", "\345\255\227\344\275\223\345\244\247\345\260\217", Q_NULLPTR));
        btnItemColor->setText(QApplication::translate("Q3DBarsDemoClass", "\351\241\271\347\232\204\351\242\234\350\211\262", Q_NULLPTR));
        cbShowBG->setText(QApplication::translate("Q3DBarsDemoClass", "\346\230\276\347\244\272\350\203\214\346\231\257", Q_NULLPTR));
        cbShowBGGrad->setText(QApplication::translate("Q3DBarsDemoClass", "\346\230\276\347\244\272\350\203\214\346\231\257\347\275\221\346\240\274", Q_NULLPTR));
        cbMeshSmooth->setText(QApplication::translate("Q3DBarsDemoClass", "\345\205\211\346\273\221\346\225\210\346\236\234", Q_NULLPTR));
        cbInvImage->setText(QApplication::translate("Q3DBarsDemoClass", "\346\230\276\347\244\272\345\200\222\345\275\261", Q_NULLPTR));
        cbAxisReverse->setText(QApplication::translate("Q3DBarsDemoClass", "\346\225\260\345\200\274\345\235\220\346\240\207\350\275\264\345\217\215\345\220\221", Q_NULLPTR));
        cbShowLabel->setText(QApplication::translate("Q3DBarsDemoClass", "\351\241\271\347\232\204\346\240\207\347\255\276\345\217\257\350\247\201", Q_NULLPTR));
        cbAxisShowTitle->setText(QApplication::translate("Q3DBarsDemoClass", "\345\235\220\346\240\207\350\275\264\346\240\207\351\242\230\345\217\257\350\247\201", Q_NULLPTR));
        cbAxisBGShowLabel->setText(QApplication::translate("Q3DBarsDemoClass", "\345\235\220\346\240\207\350\275\264\346\240\207\347\255\276\350\203\214\346\231\257\345\217\257\350\247\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Q3DBarsDemoClass: public Ui_Q3DBarsDemoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Q3DBARSDEMO_H
