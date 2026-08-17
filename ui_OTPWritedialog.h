/********************************************************************************
** Form generated from reading UI file 'OTPWritedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTPWRITEDIALOG_H
#define UI_OTPWRITEDIALOG_H

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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OTPWriteDialog
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *gb_otp_oper;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *rb_write_only;
    QRadioButton *rb_otp_wl;
    QRadioButton *rb_lock_only;
    QGroupBox *gb_otp_para;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_region;
    QComboBox *comboBox_region;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lb_otp_waddr;
    QLineEdit *le_otp_waddr;
    QLabel *lb_otp_wlen;
    QLineEdit *le_otp_wlen;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pb_OTPfile_path;
    QLineEdit *le_OTPfile_path;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *OTPWriteDialog)
    {
        if (OTPWriteDialog->objectName().isEmpty())
            OTPWriteDialog->setObjectName(QString::fromUtf8("OTPWriteDialog"));
        OTPWriteDialog->resize(568, 292);
        gridLayout_2 = new QGridLayout(OTPWriteDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gb_otp_oper = new QGroupBox(OTPWriteDialog);
        gb_otp_oper->setObjectName(QString::fromUtf8("gb_otp_oper"));
        verticalLayout_3 = new QVBoxLayout(gb_otp_oper);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        rb_write_only = new QRadioButton(gb_otp_oper);
        rb_write_only->setObjectName(QString::fromUtf8("rb_write_only"));
        rb_write_only->setChecked(true);

        verticalLayout_3->addWidget(rb_write_only);

        rb_otp_wl = new QRadioButton(gb_otp_oper);
        rb_otp_wl->setObjectName(QString::fromUtf8("rb_otp_wl"));

        verticalLayout_3->addWidget(rb_otp_wl);

        rb_lock_only = new QRadioButton(gb_otp_oper);
        rb_lock_only->setObjectName(QString::fromUtf8("rb_lock_only"));

        verticalLayout_3->addWidget(rb_lock_only);


        verticalLayout_4->addWidget(gb_otp_oper);

        gb_otp_para = new QGroupBox(OTPWriteDialog);
        gb_otp_para->setObjectName(QString::fromUtf8("gb_otp_para"));
        gridLayout = new QGridLayout(gb_otp_para);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_region = new QLabel(gb_otp_para);
        label_region->setObjectName(QString::fromUtf8("label_region"));

        horizontalLayout->addWidget(label_region);

        comboBox_region = new QComboBox(gb_otp_para);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));

        horizontalLayout->addWidget(comboBox_region);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lb_otp_waddr = new QLabel(gb_otp_para);
        lb_otp_waddr->setObjectName(QString::fromUtf8("lb_otp_waddr"));

        horizontalLayout_2->addWidget(lb_otp_waddr);

        le_otp_waddr = new QLineEdit(gb_otp_para);
        le_otp_waddr->setObjectName(QString::fromUtf8("le_otp_waddr"));

        horizontalLayout_2->addWidget(le_otp_waddr);

        lb_otp_wlen = new QLabel(gb_otp_para);
        lb_otp_wlen->setObjectName(QString::fromUtf8("lb_otp_wlen"));

        horizontalLayout_2->addWidget(lb_otp_wlen);

        le_otp_wlen = new QLineEdit(gb_otp_para);
        le_otp_wlen->setObjectName(QString::fromUtf8("le_otp_wlen"));

        horizontalLayout_2->addWidget(le_otp_wlen);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pb_OTPfile_path = new QPushButton(gb_otp_para);
        pb_OTPfile_path->setObjectName(QString::fromUtf8("pb_OTPfile_path"));
        pb_OTPfile_path->setInputMethodHints(Qt::ImhNone);

        horizontalLayout_3->addWidget(pb_OTPfile_path);

        le_OTPfile_path = new QLineEdit(gb_otp_para);
        le_OTPfile_path->setObjectName(QString::fromUtf8("le_OTPfile_path"));

        horizontalLayout_3->addWidget(le_OTPfile_path);


        verticalLayout_2->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        verticalLayout_4->addWidget(gb_otp_para);


        gridLayout_2->addLayout(verticalLayout_4, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_OK = new QPushButton(OTPWriteDialog);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        verticalLayout->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(OTPWriteDialog);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        verticalLayout->addWidget(pushButton_Cancel);

        verticalSpacer = new QSpacerItem(20, 138, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_2->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(OTPWriteDialog);

        QMetaObject::connectSlotsByName(OTPWriteDialog);
    } // setupUi

    void retranslateUi(QDialog *OTPWriteDialog)
    {
        OTPWriteDialog->setWindowTitle(QCoreApplication::translate("OTPWriteDialog", "Dialog", nullptr));
        gb_otp_oper->setTitle(QCoreApplication::translate("OTPWriteDialog", "OTP Operation", nullptr));
        rb_write_only->setText(QCoreApplication::translate("OTPWriteDialog", "Write Only", nullptr));
        rb_otp_wl->setText(QCoreApplication::translate("OTPWriteDialog", "Write and Lock", nullptr));
        rb_lock_only->setText(QCoreApplication::translate("OTPWriteDialog", "Lock Only", nullptr));
        gb_otp_para->setTitle(QCoreApplication::translate("OTPWriteDialog", "OTP Parameter", nullptr));
        label_region->setText(QCoreApplication::translate("OTPWriteDialog", "Region:", nullptr));
        lb_otp_waddr->setText(QCoreApplication::translate("OTPWriteDialog", "Write Address:", nullptr));
        lb_otp_wlen->setText(QCoreApplication::translate("OTPWriteDialog", "Write Length:", nullptr));
        pb_OTPfile_path->setText(QCoreApplication::translate("OTPWriteDialog", "OTP file path", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("OTPWriteDialog", "&OK", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("OTPWriteDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OTPWriteDialog: public Ui_OTPWriteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTPWRITEDIALOG_H
