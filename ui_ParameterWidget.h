/********************************************************************************
** Form generated from reading UI file 'ParameterWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARAMETERWIDGET_H
#define UI_PARAMETERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParameterWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *OTP;
    QSpacerItem *horizontalSpacer;
    QToolButton *UPDATE;
    QToolButton *STOP;
    QFrame *frame_OTP;
    QGridLayout *gridLayout_2;
    QGroupBox *gb_OTP_para;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *OTP_Write;
    QRadioButton *OTP_Read;
    QPushButton *OTPSettingBtn;
    QVBoxLayout *verticalLayout_3;
    QLabel *OTP_WriteInfoLabel;
    QLabel *OTP_ReadInfoLabel;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *OTP_WriteInfoEdit;
    QLineEdit *OTPReadInfoEdit;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ParameterWidget)
    {
        if (ParameterWidget->objectName().isEmpty())
            ParameterWidget->setObjectName(QString::fromUtf8("ParameterWidget"));
        ParameterWidget->resize(565, 443);
        gridLayout_4 = new QGridLayout(ParameterWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(ParameterWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(frame);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        OTP = new QCheckBox(groupBox_3);
        OTP->setObjectName(QString::fromUtf8("OTP"));
        OTP->setAutoExclusive(false);

        horizontalLayout->addWidget(OTP);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        UPDATE = new QToolButton(groupBox_3);
        UPDATE->setObjectName(QString::fromUtf8("UPDATE"));
        UPDATE->setMinimumSize(QSize(110, 0));
        UPDATE->setMaximumSize(QSize(110, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/update.png"), QSize(), QIcon::Normal, QIcon::Off);
        UPDATE->setIcon(icon);
        UPDATE->setIconSize(QSize(24, 24));
        UPDATE->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        UPDATE->setAutoRaise(true);

        horizontalLayout->addWidget(UPDATE);

        STOP = new QToolButton(groupBox_3);
        STOP->setObjectName(QString::fromUtf8("STOP"));
        STOP->setEnabled(false);
        STOP->setMinimumSize(QSize(110, 0));
        STOP->setMaximumSize(QSize(110, 16777215));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        STOP->setIcon(icon1);
        STOP->setIconSize(QSize(24, 24));
        STOP->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        STOP->setAutoRaise(true);

        horizontalLayout->addWidget(STOP);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        frame_OTP = new QFrame(ParameterWidget);
        frame_OTP->setObjectName(QString::fromUtf8("frame_OTP"));
        frame_OTP->setFrameShape(QFrame::Box);
        frame_OTP->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame_OTP);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gb_OTP_para = new QGroupBox(frame_OTP);
        gb_OTP_para->setObjectName(QString::fromUtf8("gb_OTP_para"));
        horizontalLayout_2 = new QHBoxLayout(gb_OTP_para);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        OTP_Write = new QRadioButton(gb_OTP_para);
        OTP_Write->setObjectName(QString::fromUtf8("OTP_Write"));
        OTP_Write->setEnabled(false);

        verticalLayout_2->addWidget(OTP_Write);

        OTP_Read = new QRadioButton(gb_OTP_para);
        OTP_Read->setObjectName(QString::fromUtf8("OTP_Read"));
        OTP_Read->setEnabled(false);
        OTP_Read->setChecked(true);

        verticalLayout_2->addWidget(OTP_Read);


        horizontalLayout_2->addLayout(verticalLayout_2);

        OTPSettingBtn = new QPushButton(gb_OTP_para);
        OTPSettingBtn->setObjectName(QString::fromUtf8("OTPSettingBtn"));
        OTPSettingBtn->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/setting.png"), QSize(), QIcon::Normal, QIcon::Off);
        OTPSettingBtn->setIcon(icon2);
        OTPSettingBtn->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(OTPSettingBtn);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        OTP_WriteInfoLabel = new QLabel(gb_OTP_para);
        OTP_WriteInfoLabel->setObjectName(QString::fromUtf8("OTP_WriteInfoLabel"));
        OTP_WriteInfoLabel->setEnabled(false);
        OTP_WriteInfoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(OTP_WriteInfoLabel);

        OTP_ReadInfoLabel = new QLabel(gb_OTP_para);
        OTP_ReadInfoLabel->setObjectName(QString::fromUtf8("OTP_ReadInfoLabel"));
        OTP_ReadInfoLabel->setEnabled(false);
        OTP_ReadInfoLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_3->addWidget(OTP_ReadInfoLabel);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        OTP_WriteInfoEdit = new QLineEdit(gb_OTP_para);
        OTP_WriteInfoEdit->setObjectName(QString::fromUtf8("OTP_WriteInfoEdit"));
        OTP_WriteInfoEdit->setEnabled(false);
        OTP_WriteInfoEdit->setReadOnly(true);

        verticalLayout_4->addWidget(OTP_WriteInfoEdit);

        OTPReadInfoEdit = new QLineEdit(gb_OTP_para);
        OTPReadInfoEdit->setObjectName(QString::fromUtf8("OTPReadInfoEdit"));
        OTPReadInfoEdit->setEnabled(false);
        OTPReadInfoEdit->setAutoFillBackground(false);
        OTPReadInfoEdit->setReadOnly(true);

        verticalLayout_4->addWidget(OTPReadInfoEdit);


        horizontalLayout_2->addLayout(verticalLayout_4);


        gridLayout_2->addWidget(gb_OTP_para, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_OTP, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(ParameterWidget);

        QMetaObject::connectSlotsByName(ParameterWidget);
    } // setupUi

    void retranslateUi(QWidget *ParameterWidget)
    {
        ParameterWidget->setWindowTitle(QCoreApplication::translate("ParameterWidget", "Form", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ParameterWidget", "General Setting", nullptr));
        OTP->setText(QCoreApplication::translate("ParameterWidget", "OTP", nullptr));
#if QT_CONFIG(tooltip)
        UPDATE->setToolTip(QCoreApplication::translate("ParameterWidget", "Ctrl + U", nullptr));
#endif // QT_CONFIG(tooltip)
        UPDATE->setText(QCoreApplication::translate("ParameterWidget", "Update", nullptr));
#if QT_CONFIG(tooltip)
        STOP->setToolTip(QCoreApplication::translate("ParameterWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        STOP->setText(QCoreApplication::translate("ParameterWidget", "Stop", nullptr));
        gb_OTP_para->setTitle(QCoreApplication::translate("ParameterWidget", "Parameter of OTP", nullptr));
        OTP_Write->setText(QCoreApplication::translate("ParameterWidget", "Write", nullptr));
        OTP_Read->setText(QCoreApplication::translate("ParameterWidget", "Read", nullptr));
        OTPSettingBtn->setText(QCoreApplication::translate("ParameterWidget", "Setting", nullptr));
        OTP_WriteInfoLabel->setText(QCoreApplication::translate("ParameterWidget", "Write Info:", nullptr));
        OTP_ReadInfoLabel->setText(QCoreApplication::translate("ParameterWidget", "Read  Info:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParameterWidget: public Ui_ParameterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARAMETERWIDGET_H
