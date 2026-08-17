/********************************************************************************
** Form generated from reading UI file 'OTPReadDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTPREADDIALOG_H
#define UI_OTPREADDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OTPReadDialog
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_Region;
    QComboBox *comboBox_region;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_OTP_addr;
    QLabel *label_2;
    QLineEdit *lineEdit_OTP_len;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QLineEdit *lineEdit_OTP_save;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *OTPReadDialog)
    {
        if (OTPReadDialog->objectName().isEmpty())
            OTPReadDialog->setObjectName(QString::fromUtf8("OTPReadDialog"));
        OTPReadDialog->resize(462, 194);
        gridLayout_2 = new QGridLayout(OTPReadDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(OTPReadDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_Region = new QLabel(groupBox);
        label_Region->setObjectName(QString::fromUtf8("label_Region"));

        horizontalLayout_2->addWidget(label_Region);

        comboBox_region = new QComboBox(groupBox);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));

        horizontalLayout_2->addWidget(comboBox_region);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_OTP_addr = new QLineEdit(groupBox);
        lineEdit_OTP_addr->setObjectName(QString::fromUtf8("lineEdit_OTP_addr"));

        horizontalLayout->addWidget(lineEdit_OTP_addr);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        lineEdit_OTP_len = new QLineEdit(groupBox);
        lineEdit_OTP_len->setObjectName(QString::fromUtf8("lineEdit_OTP_len"));

        horizontalLayout->addWidget(lineEdit_OTP_len);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton);

        lineEdit_OTP_save = new QLineEdit(groupBox);
        lineEdit_OTP_save->setObjectName(QString::fromUtf8("lineEdit_OTP_save"));

        horizontalLayout_3->addWidget(lineEdit_OTP_save);


        verticalLayout->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(208, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        pushButton_OK = new QPushButton(OTPReadDialog);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        horizontalLayout_4->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(OTPReadDialog);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        horizontalLayout_4->addWidget(pushButton_Cancel);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);


        retranslateUi(OTPReadDialog);

        QMetaObject::connectSlotsByName(OTPReadDialog);
    } // setupUi

    void retranslateUi(QDialog *OTPReadDialog)
    {
        OTPReadDialog->setWindowTitle(QCoreApplication::translate("OTPReadDialog", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OTPReadDialog", "OTP Parameter", nullptr));
        label_Region->setText(QCoreApplication::translate("OTPReadDialog", "Region", nullptr));
        label->setText(QCoreApplication::translate("OTPReadDialog", "Address:", nullptr));
        label_2->setText(QCoreApplication::translate("OTPReadDialog", "Length:", nullptr));
        pushButton->setText(QCoreApplication::translate("OTPReadDialog", "Save File As", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("OTPReadDialog", "&OK", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("OTPReadDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OTPReadDialog: public Ui_OTPReadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTPREADDIALOG_H
