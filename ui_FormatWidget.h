/********************************************************************************
** Form generated from reading UI file 'FormatWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMATWIDGET_H
#define UI_FORMATWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormatWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_Validation;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_Start;
    QToolButton *toolButton_stop;
    QFrame *frame_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_AutoFormat;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_ManualFormat;
    QSpacerItem *horizontalSpacer_5;
    QFrame *frame_ManualFormatSettings;
    QGridLayout *gridLayout_3;
    QLabel *label_manualLabel;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_region;
    QLabel *label_BeginAddress;
    QLabel *label_FormatLength;
    QVBoxLayout *verticalLayout_2;
    QComboBox *comboBox_region;
    QLineEdit *lineEdit_BeginAddress;
    QLineEdit *lineEdit_FormatLength;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QGroupBox *groupBox_auto_fmt;
    QVBoxLayout *verticalLayout_10;
    QRadioButton *radioButton_fmt_all;
    QRadioButton *radioButton_fmt_others;
    QGroupBox *gb_ForamtEraseFlag;
    QVBoxLayout *verticalLayout_7;
    QRadioButton *radioButton_NormalErase;
    QRadioButton *radioButton_ForcedlyErase;
    QRadioButton *radioButton_MarkAsBadBlock;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *FormatWidget)
    {
        if (FormatWidget->objectName().isEmpty())
            FormatWidget->setObjectName(QString::fromUtf8("FormatWidget"));
        FormatWidget->resize(618, 582);
        gridLayout_4 = new QGridLayout(FormatWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame_3 = new QFrame(FormatWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(70);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setMinimumSize(QSize(600, 60));
        frame_3->setMaximumSize(QSize(16777215, 85));
        frame_3->setFrameShape(QFrame::Box);
        frame_3->setFrameShadow(QFrame::Sunken);
        frame_3->setLineWidth(0);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_Validation = new QCheckBox(frame_3);
        checkBox_Validation->setObjectName(QString::fromUtf8("checkBox_Validation"));

        horizontalLayout_2->addWidget(checkBox_Validation);

        horizontalSpacer = new QSpacerItem(238, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        toolButton_Start = new QToolButton(frame_3);
        toolButton_Start->setObjectName(QString::fromUtf8("toolButton_Start"));
        toolButton_Start->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(91);
        sizePolicy1.setVerticalStretch(46);
        sizePolicy1.setHeightForWidth(toolButton_Start->sizePolicy().hasHeightForWidth());
        toolButton_Start->setSizePolicy(sizePolicy1);
        toolButton_Start->setMinimumSize(QSize(91, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Start->setIcon(icon);
        toolButton_Start->setIconSize(QSize(24, 24));
        toolButton_Start->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_Start->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_Start);

        toolButton_stop = new QToolButton(frame_3);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        toolButton_stop->setEnabled(false);
        sizePolicy1.setHeightForWidth(toolButton_stop->sizePolicy().hasHeightForWidth());
        toolButton_stop->setSizePolicy(sizePolicy1);
        toolButton_stop->setMinimumSize(QSize(91, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_stop->setIcon(icon1);
        toolButton_stop->setIconSize(QSize(24, 24));
        toolButton_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_stop->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_stop);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_3, 0, 0, 1, 1);

        frame_2 = new QFrame(FormatWidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setMinimumSize(QSize(600, 75));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setFrameShape(QFrame::Box);
        frame_2->setFrameShadow(QFrame::Sunken);
        frame_2->setLineWidth(1);
        frame_2->setMidLineWidth(0);
        gridLayout_2 = new QGridLayout(frame_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton_AutoFormat = new QRadioButton(frame_2);
        radioButton_AutoFormat->setObjectName(QString::fromUtf8("radioButton_AutoFormat"));
        radioButton_AutoFormat->setEnabled(true);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        radioButton_AutoFormat->setFont(font);
        radioButton_AutoFormat->setChecked(false);

        horizontalLayout_3->addWidget(radioButton_AutoFormat);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout->addLayout(verticalLayout_4);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButton_ManualFormat = new QRadioButton(frame_2);
        radioButton_ManualFormat->setObjectName(QString::fromUtf8("radioButton_ManualFormat"));
        radioButton_ManualFormat->setFont(font);
        radioButton_ManualFormat->setChecked(true);

        horizontalLayout_4->addWidget(radioButton_ManualFormat);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(verticalLayout_6);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_2, 1, 0, 1, 1);

        frame_ManualFormatSettings = new QFrame(FormatWidget);
        frame_ManualFormatSettings->setObjectName(QString::fromUtf8("frame_ManualFormatSettings"));
        frame_ManualFormatSettings->setEnabled(true);
        frame_ManualFormatSettings->setFrameShape(QFrame::Panel);
        frame_ManualFormatSettings->setFrameShadow(QFrame::Sunken);
        frame_ManualFormatSettings->setLineWidth(2);
        frame_ManualFormatSettings->setMidLineWidth(3);
        gridLayout_3 = new QGridLayout(frame_ManualFormatSettings);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_manualLabel = new QLabel(frame_ManualFormatSettings);
        label_manualLabel->setObjectName(QString::fromUtf8("label_manualLabel"));

        gridLayout_3->addWidget(label_manualLabel, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_region = new QLabel(frame_ManualFormatSettings);
        label_region->setObjectName(QString::fromUtf8("label_region"));

        verticalLayout_3->addWidget(label_region);

        label_BeginAddress = new QLabel(frame_ManualFormatSettings);
        label_BeginAddress->setObjectName(QString::fromUtf8("label_BeginAddress"));

        verticalLayout_3->addWidget(label_BeginAddress);

        label_FormatLength = new QLabel(frame_ManualFormatSettings);
        label_FormatLength->setObjectName(QString::fromUtf8("label_FormatLength"));

        verticalLayout_3->addWidget(label_FormatLength);


        horizontalLayout_5->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        comboBox_region = new QComboBox(frame_ManualFormatSettings);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));
        comboBox_region->setMinimumSize(QSize(120, 0));
        comboBox_region->setMaximumSize(QSize(130, 16777215));

        verticalLayout_2->addWidget(comboBox_region);

        lineEdit_BeginAddress = new QLineEdit(frame_ManualFormatSettings);
        lineEdit_BeginAddress->setObjectName(QString::fromUtf8("lineEdit_BeginAddress"));
        lineEdit_BeginAddress->setMinimumSize(QSize(120, 0));
        lineEdit_BeginAddress->setMaximumSize(QSize(130, 16777215));
        lineEdit_BeginAddress->setMaxLength(18);

        verticalLayout_2->addWidget(lineEdit_BeginAddress);

        lineEdit_FormatLength = new QLineEdit(frame_ManualFormatSettings);
        lineEdit_FormatLength->setObjectName(QString::fromUtf8("lineEdit_FormatLength"));
        lineEdit_FormatLength->setMinimumSize(QSize(120, 0));
        lineEdit_FormatLength->setMaximumSize(QSize(130, 16777215));
        lineEdit_FormatLength->setMaxLength(18);

        verticalLayout_2->addWidget(lineEdit_FormatLength);


        horizontalLayout_5->addLayout(verticalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        label_6 = new QLabel(frame_ManualFormatSettings);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 2, 0, 1, 1);


        gridLayout_4->addWidget(frame_ManualFormatSettings, 2, 0, 1, 1);

        groupBox_auto_fmt = new QGroupBox(FormatWidget);
        groupBox_auto_fmt->setObjectName(QString::fromUtf8("groupBox_auto_fmt"));
        verticalLayout_10 = new QVBoxLayout(groupBox_auto_fmt);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        radioButton_fmt_all = new QRadioButton(groupBox_auto_fmt);
        radioButton_fmt_all->setObjectName(QString::fromUtf8("radioButton_fmt_all"));
        radioButton_fmt_all->setChecked(true);

        verticalLayout_10->addWidget(radioButton_fmt_all);

        radioButton_fmt_others = new QRadioButton(groupBox_auto_fmt);
        radioButton_fmt_others->setObjectName(QString::fromUtf8("radioButton_fmt_others"));

        verticalLayout_10->addWidget(radioButton_fmt_others);


        gridLayout_4->addWidget(groupBox_auto_fmt, 3, 0, 1, 1);

        gb_ForamtEraseFlag = new QGroupBox(FormatWidget);
        gb_ForamtEraseFlag->setObjectName(QString::fromUtf8("gb_ForamtEraseFlag"));
        verticalLayout_7 = new QVBoxLayout(gb_ForamtEraseFlag);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        radioButton_NormalErase = new QRadioButton(gb_ForamtEraseFlag);
        radioButton_NormalErase->setObjectName(QString::fromUtf8("radioButton_NormalErase"));
        radioButton_NormalErase->setChecked(true);

        verticalLayout_7->addWidget(radioButton_NormalErase);

        radioButton_ForcedlyErase = new QRadioButton(gb_ForamtEraseFlag);
        radioButton_ForcedlyErase->setObjectName(QString::fromUtf8("radioButton_ForcedlyErase"));

        verticalLayout_7->addWidget(radioButton_ForcedlyErase);

        radioButton_MarkAsBadBlock = new QRadioButton(gb_ForamtEraseFlag);
        radioButton_MarkAsBadBlock->setObjectName(QString::fromUtf8("radioButton_MarkAsBadBlock"));

        verticalLayout_7->addWidget(radioButton_MarkAsBadBlock);


        gridLayout_4->addWidget(gb_ForamtEraseFlag, 4, 0, 1, 1);

        verticalSpacer = new QSpacerItem(597, 66, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 5, 0, 1, 1);


        retranslateUi(FormatWidget);

        QMetaObject::connectSlotsByName(FormatWidget);
    } // setupUi

    void retranslateUi(QWidget *FormatWidget)
    {
        FormatWidget->setWindowTitle(QCoreApplication::translate("FormatWidget", "Form", nullptr));
        checkBox_Validation->setText(QCoreApplication::translate("FormatWidget", "Validation", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_Start->setToolTip(QCoreApplication::translate("FormatWidget", "F9", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_Start->setText(QCoreApplication::translate("FormatWidget", "Start", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_stop->setToolTip(QCoreApplication::translate("FormatWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_stop->setText(QCoreApplication::translate("FormatWidget", "Stop", nullptr));
        radioButton_AutoFormat->setText(QCoreApplication::translate("FormatWidget", "Auto Format Flash", nullptr));
        radioButton_ManualFormat->setText(QCoreApplication::translate("FormatWidget", "Manual Format Flash", nullptr));
        label_manualLabel->setText(QCoreApplication::translate("FormatWidget", "Specify the begin address and length of the format area.", nullptr));
        label_region->setText(QCoreApplication::translate("FormatWidget", "Region", nullptr));
        label_BeginAddress->setText(QCoreApplication::translate("FormatWidget", "Begin Address[HEX]:", nullptr));
        label_FormatLength->setText(QCoreApplication::translate("FormatWidget", "Format Length[HEX]:", nullptr));
        lineEdit_BeginAddress->setText(QCoreApplication::translate("FormatWidget", "0x0000000000000000", nullptr));
        lineEdit_BeginAddress->setPlaceholderText(QString());
        lineEdit_FormatLength->setText(QCoreApplication::translate("FormatWidget", "0x000000001F600000", nullptr));
        label_6->setText(QCoreApplication::translate("FormatWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#ff0000;\">WARNING! Calibration data is erased if begin address is 0.</span></p></body></html>", nullptr));
        groupBox_auto_fmt->setTitle(QCoreApplication::translate("FormatWidget", "Auto Format Flag", nullptr));
        radioButton_fmt_all->setText(QCoreApplication::translate("FormatWidget", "Format whole flash", nullptr));
        radioButton_fmt_others->setText(QCoreApplication::translate("FormatWidget", "Format whole flash except Bootloader", nullptr));
        gb_ForamtEraseFlag->setTitle(QCoreApplication::translate("FormatWidget", "Erase Flag", nullptr));
        radioButton_NormalErase->setText(QCoreApplication::translate("FormatWidget", "Normal Erase (Bad block is skipped)", nullptr));
        radioButton_ForcedlyErase->setText(QCoreApplication::translate("FormatWidget", "Forcedly Erase (Bad block mark is erased)", nullptr));
        radioButton_MarkAsBadBlock->setText(QCoreApplication::translate("FormatWidget", "Mark as Bad Block", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormatWidget: public Ui_FormatWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMATWIDGET_H
