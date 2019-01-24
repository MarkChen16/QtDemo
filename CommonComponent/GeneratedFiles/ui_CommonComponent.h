/********************************************************************************
** Form generated from reading UI file 'CommonComponent.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONCOMPONENT_H
#define UI_COMMONCOMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommonComponentClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBox;
    QSpacerItem *horizontalSpacer_2;
    QWidget *tab_4;
    QDial *dial;
    QSlider *horizontalSlider;
    QSlider *horizontalSlider_2;
    QSlider *horizontalSlider_3;
    QSlider *verticalSlider;
    QScrollBar *horizontalScrollBar;
    QScrollBar *verticalScrollBar;
    QSlider *horizontalSlider_4;
    QWidget *tab_5;
    QProgressBar *progressBar;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QProgressBar *progressBar_4;
    QWidget *tab_3;
    QLCDNumber *lcdNumber;
    QWidget *tab_2;
    QCalendarWidget *calendarWidget;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QTimeEdit *timeEdit;
    QWidget *tab_6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QLCDNumber *lcdHour;
    QLabel *label_3;
    QLCDNumber *lcdMin;
    QLabel *label_4;
    QLCDNumber *lcdSec;
    QSpacerItem *horizontalSpacer_3;
    QProgressBar *pbTimer;
    QPushButton *btnStart;
    QPushButton *btnStop;
    QWidget *tab_7;
    QComboBox *cbClass;
    QComboBox *cbCity;
    QWidget *tab_9;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *CommonComponentClass)
    {
        if (CommonComponentClass->objectName().isEmpty())
            CommonComponentClass->setObjectName(QStringLiteral("CommonComponentClass"));
        CommonComponentClass->resize(582, 397);
        horizontalLayout_2 = new QHBoxLayout(CommonComponentClass);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        tabWidget = new QTabWidget(CommonComponentClass);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        horizontalLayoutWidget = new QWidget(tab);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(80, 110, 381, 31));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        spinBox = new QSpinBox(horizontalLayoutWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximum(1000);
        spinBox->setSingleStep(5);
        spinBox->setValue(212);

        horizontalLayout->addWidget(spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        doubleSpinBox = new QDoubleSpinBox(horizontalLayoutWidget);
        doubleSpinBox->setObjectName(QStringLiteral("doubleSpinBox"));
        doubleSpinBox->setSingleStep(2);
        doubleSpinBox->setValue(32.88);

        horizontalLayout->addWidget(doubleSpinBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        dial = new QDial(tab_4);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(110, 200, 101, 101));
        dial->setMaximum(100);
        dial->setValue(34);
        dial->setNotchesVisible(true);
        horizontalSlider = new QSlider(tab_4);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(90, 40, 160, 19));
        horizontalSlider->setMaximum(255);
        horizontalSlider->setValue(34);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        horizontalSlider_2 = new QSlider(tab_4);
        horizontalSlider_2->setObjectName(QStringLiteral("horizontalSlider_2"));
        horizontalSlider_2->setGeometry(QRect(90, 70, 160, 19));
        horizontalSlider_2->setMaximum(255);
        horizontalSlider_2->setValue(162);
        horizontalSlider_2->setOrientation(Qt::Horizontal);
        horizontalSlider_3 = new QSlider(tab_4);
        horizontalSlider_3->setObjectName(QStringLiteral("horizontalSlider_3"));
        horizontalSlider_3->setGeometry(QRect(90, 110, 160, 19));
        horizontalSlider_3->setMaximum(255);
        horizontalSlider_3->setValue(49);
        horizontalSlider_3->setOrientation(Qt::Horizontal);
        verticalSlider = new QSlider(tab_4);
        verticalSlider->setObjectName(QStringLiteral("verticalSlider"));
        verticalSlider->setGeometry(QRect(410, 40, 19, 160));
        verticalSlider->setMaximum(255);
        verticalSlider->setValue(167);
        verticalSlider->setOrientation(Qt::Vertical);
        verticalSlider->setInvertedAppearance(false);
        verticalSlider->setInvertedControls(false);
        verticalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalScrollBar = new QScrollBar(tab_4);
        horizontalScrollBar->setObjectName(QStringLiteral("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(60, 320, 401, 16));
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        verticalScrollBar = new QScrollBar(tab_4);
        verticalScrollBar->setObjectName(QStringLiteral("verticalScrollBar"));
        verticalScrollBar->setGeometry(QRect(530, 20, 16, 261));
        verticalScrollBar->setOrientation(Qt::Vertical);
        horizontalSlider_4 = new QSlider(tab_4);
        horizontalSlider_4->setObjectName(QStringLiteral("horizontalSlider_4"));
        horizontalSlider_4->setGeometry(QRect(90, 150, 160, 19));
        horizontalSlider_4->setMaximum(255);
        horizontalSlider_4->setValue(176);
        horizontalSlider_4->setOrientation(Qt::Horizontal);
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        progressBar = new QProgressBar(tab_5);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(100, 50, 341, 23));
        progressBar->setValue(24);
        progressBar_2 = new QProgressBar(tab_5);
        progressBar_2->setObjectName(QStringLiteral("progressBar_2"));
        progressBar_2->setGeometry(QRect(100, 90, 341, 23));
        progressBar_2->setValue(67);
        progressBar_2->setTextDirection(QProgressBar::TopToBottom);
        progressBar_3 = new QProgressBar(tab_5);
        progressBar_3->setObjectName(QStringLiteral("progressBar_3"));
        progressBar_3->setGeometry(QRect(100, 140, 341, 23));
        progressBar_3->setValue(32);
        progressBar_4 = new QProgressBar(tab_5);
        progressBar_4->setObjectName(QStringLiteral("progressBar_4"));
        progressBar_4->setGeometry(QRect(100, 190, 311, 23));
        progressBar_4->setValue(87);
        progressBar_4->setTextVisible(false);
        tabWidget->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        lcdNumber = new QLCDNumber(tab_3);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(120, 60, 311, 111));
        QFont font;
        font.setFamily(QStringLiteral("Aharoni"));
        font.setPointSize(9);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setFrameShape(QFrame::Box);
        lcdNumber->setFrameShadow(QFrame::Raised);
        lcdNumber->setLineWidth(2);
        lcdNumber->setMidLineWidth(1);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setMode(QLCDNumber::Dec);
        lcdNumber->setSegmentStyle(QLCDNumber::Filled);
        lcdNumber->setProperty("value", QVariant(3539.59));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        calendarWidget = new QCalendarWidget(tab_2);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(150, 140, 251, 201));
        calendarWidget->setFirstDayOfWeek(Qt::Monday);
        calendarWidget->setGridVisible(true);
        calendarWidget->setSelectionMode(QCalendarWidget::SingleSelection);
        calendarWidget->setHorizontalHeaderFormat(QCalendarWidget::ShortDayNames);
        calendarWidget->setVerticalHeaderFormat(QCalendarWidget::ISOWeekNumbers);
        calendarWidget->setNavigationBarVisible(true);
        calendarWidget->setDateEditEnabled(true);
        dateEdit = new QDateEdit(tab_2);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(210, 60, 110, 22));
        dateEdit->setCalendarPopup(false);
        dateTimeEdit = new QDateTimeEdit(tab_2);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(170, 20, 194, 22));
        dateTimeEdit->setCalendarPopup(true);
        timeEdit = new QTimeEdit(tab_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(210, 100, 111, 22));
        tabWidget->addTab(tab_2, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        horizontalLayoutWidget_2 = new QWidget(tab_6);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(130, 70, 331, 41));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lcdHour = new QLCDNumber(horizontalLayoutWidget_2);
        lcdHour->setObjectName(QStringLiteral("lcdHour"));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        lcdHour->setFont(font1);
        lcdHour->setFrameShape(QFrame::NoFrame);
        lcdHour->setProperty("intValue", QVariant(12));

        horizontalLayout_3->addWidget(lcdHour);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Aharoni"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        horizontalLayout_3->addWidget(label_3);

        lcdMin = new QLCDNumber(horizontalLayoutWidget_2);
        lcdMin->setObjectName(QStringLiteral("lcdMin"));
        lcdMin->setFrameShape(QFrame::NoFrame);
        lcdMin->setProperty("intValue", QVariant(43));

        horizontalLayout_3->addWidget(lcdMin);

        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

        horizontalLayout_3->addWidget(label_4);

        lcdSec = new QLCDNumber(horizontalLayoutWidget_2);
        lcdSec->setObjectName(QStringLiteral("lcdSec"));
        lcdSec->setFrameShape(QFrame::NoFrame);
        lcdSec->setSegmentStyle(QLCDNumber::Filled);
        lcdSec->setProperty("intValue", QVariant(28));

        horizontalLayout_3->addWidget(lcdSec);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pbTimer = new QProgressBar(tab_6);
        pbTimer->setObjectName(QStringLiteral("pbTimer"));
        pbTimer->setGeometry(QRect(130, 140, 331, 23));
        pbTimer->setValue(24);
        btnStart = new QPushButton(tab_6);
        btnStart->setObjectName(QStringLiteral("btnStart"));
        btnStart->setGeometry(QRect(190, 200, 81, 31));
        btnStop = new QPushButton(tab_6);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(320, 200, 81, 31));
        tabWidget->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        cbClass = new QComboBox(tab_7);
        cbClass->setObjectName(QStringLiteral("cbClass"));
        cbClass->setGeometry(QRect(160, 190, 231, 22));
        cbClass->setEditable(true);
        cbCity = new QComboBox(tab_7);
        cbCity->setObjectName(QStringLiteral("cbCity"));
        cbCity->setGeometry(QRect(160, 100, 231, 22));
        cbCity->setEditable(false);
        tabWidget->addTab(tab_7, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        plainTextEdit = new QPlainTextEdit(tab_9);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(110, 60, 321, 221));
        tabWidget->addTab(tab_9, QString());

        horizontalLayout_2->addWidget(tabWidget);


        retranslateUi(CommonComponentClass);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CommonComponentClass);
    } // setupUi

    void retranslateUi(QDialog *CommonComponentClass)
    {
        CommonComponentClass->setWindowTitle(QApplication::translate("CommonComponentClass", "CommonComponent", Q_NULLPTR));
        label->setText(QApplication::translate("CommonComponentClass", "\346\225\260\351\207\217\357\274\232", Q_NULLPTR));
        spinBox->setSuffix(QApplication::translate("CommonComponentClass", "kg", Q_NULLPTR));
        spinBox->setPrefix(QString());
        label_2->setText(QApplication::translate("CommonComponentClass", "\345\215\225\344\273\267\357\274\232", Q_NULLPTR));
        doubleSpinBox->setPrefix(QApplication::translate("CommonComponentClass", "$", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("CommonComponentClass", "SpinBox\346\225\260\345\200\274\346\230\276\347\244\272", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("CommonComponentClass", "QSlider\346\273\221\345\212\250\345\235\227", Q_NULLPTR));
        progressBar_2->setFormat(QApplication::translate("CommonComponentClass", "%v", Q_NULLPTR));
        progressBar_3->setFormat(QApplication::translate("CommonComponentClass", "%m", Q_NULLPTR));
        progressBar_4->setFormat(QApplication::translate("CommonComponentClass", "%m", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("CommonComponentClass", "QProgressBar\350\277\233\345\272\246\346\235\241", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("CommonComponentClass", "QLCDNumber\346\225\260\345\255\227\346\230\276\347\244\272", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CommonComponentClass", "QDateTimeEdit\346\227\245\346\234\237\346\227\266\351\227\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("CommonComponentClass", ":", Q_NULLPTR));
        label_4->setText(QApplication::translate("CommonComponentClass", ":", Q_NULLPTR));
        btnStart->setText(QApplication::translate("CommonComponentClass", "Start", Q_NULLPTR));
        btnStop->setText(QApplication::translate("CommonComponentClass", "Stop", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("CommonComponentClass", "QTimer\345\256\232\346\227\266\345\231\250", Q_NULLPTR));
        cbClass->clear();
        cbClass->insertItems(0, QStringList()
         << QApplication::translate("CommonComponentClass", "\350\257\255\346\226\207", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\346\225\260\345\255\246", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\350\213\261\350\257\255", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\347\211\251\347\220\206", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\345\214\226\345\255\246", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\345\234\260\347\220\206", Q_NULLPTR)
        );
        cbCity->clear();
        cbCity->insertItems(0, QStringList()
         << QApplication::translate("CommonComponentClass", "\345\214\227\344\272\254", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\344\270\212\346\265\267", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\346\226\260\345\273\272\351\241\271\347\233\256", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\345\271\277\345\267\236", Q_NULLPTR)
         << QApplication::translate("CommonComponentClass", "\346\267\261\345\234\263", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab_7), QApplication::translate("CommonComponentClass", "QComboBox\344\270\213\346\213\211\346\241\206", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("CommonComponentClass", "12132343\n"
"2342356575\n"
"2453645646457675\n"
"\350\212\202\345\234\260\345\237\222\350\202\235\344\270\200 \344\272\224\n"
"", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("CommonComponentClass", "QPlainTextEdit\345\244\232\350\241\214\346\226\207\346\234\254", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CommonComponentClass: public Ui_CommonComponentClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONCOMPONENT_H
