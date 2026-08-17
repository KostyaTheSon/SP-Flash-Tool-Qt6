/********************************************************************************
** Form generated from reading UI file 'ReadBackAddressDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READBACKADDRESSDIALOG_H
#define UI_READBACKADDRESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
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

class Ui_ReadBackAddressDialog
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_type;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton_hex;
    QRadioButton *radioButton_decimal;
    QGroupBox *groupBox_readMethod;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_readPageSpare;
    QRadioButton *radioButton_readPageOnly;
    QRadioButton *radioButton_readSpareOnly;
    QRadioButton *radioButton_readPageWithECC;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_Region;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboBox_region;
    QLineEdit *lineEdit_startAddress;
    QLineEdit *lineEdit_length;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_5;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *ReadBackAddressDialog)
    {
        if (ReadBackAddressDialog->objectName().isEmpty())
            ReadBackAddressDialog->setObjectName(QString::fromUtf8("ReadBackAddressDialog"));
        ReadBackAddressDialog->resize(433, 478);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        ReadBackAddressDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(ReadBackAddressDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox = new QGroupBox(ReadBackAddressDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(300, 0));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_type = new QGroupBox(groupBox);
        groupBox_type->setObjectName(QString::fromUtf8("groupBox_type"));
        verticalLayout = new QVBoxLayout(groupBox_type);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        radioButton_hex = new QRadioButton(groupBox_type);
        radioButton_hex->setObjectName(QString::fromUtf8("radioButton_hex"));
        radioButton_hex->setChecked(true);

        verticalLayout->addWidget(radioButton_hex);

        radioButton_decimal = new QRadioButton(groupBox_type);
        radioButton_decimal->setObjectName(QString::fromUtf8("radioButton_decimal"));

        verticalLayout->addWidget(radioButton_decimal);


        gridLayout_2->addWidget(groupBox_type, 0, 0, 1, 1);

        groupBox_readMethod = new QGroupBox(groupBox);
        groupBox_readMethod->setObjectName(QString::fromUtf8("groupBox_readMethod"));
        verticalLayout_2 = new QVBoxLayout(groupBox_readMethod);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        radioButton_readPageSpare = new QRadioButton(groupBox_readMethod);
        radioButton_readPageSpare->setObjectName(QString::fromUtf8("radioButton_readPageSpare"));
        radioButton_readPageSpare->setChecked(true);

        verticalLayout_2->addWidget(radioButton_readPageSpare);

        radioButton_readPageOnly = new QRadioButton(groupBox_readMethod);
        radioButton_readPageOnly->setObjectName(QString::fromUtf8("radioButton_readPageOnly"));

        verticalLayout_2->addWidget(radioButton_readPageOnly);

        radioButton_readSpareOnly = new QRadioButton(groupBox_readMethod);
        radioButton_readSpareOnly->setObjectName(QString::fromUtf8("radioButton_readSpareOnly"));

        verticalLayout_2->addWidget(radioButton_readSpareOnly);

        radioButton_readPageWithECC = new QRadioButton(groupBox_readMethod);
        radioButton_readPageWithECC->setObjectName(QString::fromUtf8("radioButton_readPageWithECC"));

        verticalLayout_2->addWidget(radioButton_readPageWithECC);


        gridLayout_2->addWidget(groupBox_readMethod, 1, 0, 1, 1);

        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_6 = new QVBoxLayout(groupBox_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_Region = new QLabel(groupBox_4);
        label_Region->setObjectName(QString::fromUtf8("label_Region"));

        verticalLayout_3->addWidget(label_Region);

        label = new QLabel(groupBox_4);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 0));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(groupBox_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        comboBox_region = new QComboBox(groupBox_4);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));

        verticalLayout_4->addWidget(comboBox_region);

        lineEdit_startAddress = new QLineEdit(groupBox_4);
        lineEdit_startAddress->setObjectName(QString::fromUtf8("lineEdit_startAddress"));
        lineEdit_startAddress->setMaxLength(18);

        verticalLayout_4->addWidget(lineEdit_startAddress);

        lineEdit_length = new QLineEdit(groupBox_4);
        lineEdit_length->setObjectName(QString::fromUtf8("lineEdit_length"));
        lineEdit_length->setMaxLength(18);

        verticalLayout_4->addWidget(lineEdit_length);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_2);


        gridLayout_2->addWidget(groupBox_4, 2, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        pushButton_ok = new QPushButton(ReadBackAddressDialog);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        verticalLayout_5->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(ReadBackAddressDialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        verticalLayout_5->addWidget(pushButton_cancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_5, 0, 1, 1, 1);


        retranslateUi(ReadBackAddressDialog);
        QObject::connect(pushButton_cancel, SIGNAL(clicked()), ReadBackAddressDialog, SLOT(reject()));
        QObject::connect(pushButton_ok, SIGNAL(clicked()), ReadBackAddressDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ReadBackAddressDialog);
    } // setupUi

    void retranslateUi(QDialog *ReadBackAddressDialog)
    {
        ReadBackAddressDialog->setWindowTitle(QCoreApplication::translate("ReadBackAddressDialog", "Readback block start address", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ReadBackAddressDialog", "Readback block start address", nullptr));
        groupBox_type->setTitle(QCoreApplication::translate("ReadBackAddressDialog", "Type", nullptr));
        radioButton_hex->setText(QCoreApplication::translate("ReadBackAddressDialog", "Hex", nullptr));
        radioButton_decimal->setText(QCoreApplication::translate("ReadBackAddressDialog", "Decimal(auto convert to Hex)", nullptr));
        groupBox_readMethod->setTitle(QCoreApplication::translate("ReadBackAddressDialog", "Read Method", nullptr));
        radioButton_readPageSpare->setText(QCoreApplication::translate("ReadBackAddressDialog", "Read Page + Spare", nullptr));
        radioButton_readPageOnly->setText(QCoreApplication::translate("ReadBackAddressDialog", "Read Page Only", nullptr));
        radioButton_readSpareOnly->setText(QCoreApplication::translate("ReadBackAddressDialog", "Read Spare Only", nullptr));
        radioButton_readPageWithECC->setText(QCoreApplication::translate("ReadBackAddressDialog", "Read Page With ECC", nullptr));
        groupBox_4->setTitle(QString());
        label_Region->setText(QCoreApplication::translate("ReadBackAddressDialog", "Region", nullptr));
        label->setText(QCoreApplication::translate("ReadBackAddressDialog", "Start Address:", nullptr));
        label_2->setText(QCoreApplication::translate("ReadBackAddressDialog", "Length:", nullptr));
        lineEdit_startAddress->setInputMask(QString());
        lineEdit_startAddress->setText(QCoreApplication::translate("ReadBackAddressDialog", "0x0000000000000000", nullptr));
        lineEdit_length->setText(QCoreApplication::translate("ReadBackAddressDialog", "0x0000000000001000", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("ReadBackAddressDialog", "&OK", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("ReadBackAddressDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadBackAddressDialog: public Ui_ReadBackAddressDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READBACKADDRESSDIALOG_H
