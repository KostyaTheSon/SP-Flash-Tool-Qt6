/********************************************************************************
** Form generated from reading UI file 'NorFlashWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NORFLASHWIDGET_H
#define UI_NORFLASHWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NorFlashWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_id;
    QLabel *label_size;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_size;
    QLineEdit *lineEdit_otpSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NorFlashWidget)
    {
        if (NorFlashWidget->objectName().isEmpty())
            NorFlashWidget->setObjectName(QString::fromUtf8("NorFlashWidget"));
        NorFlashWidget->resize(493, 300);
        gridLayout = new QGridLayout(NorFlashWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_id = new QLabel(NorFlashWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        verticalLayout_2->addWidget(label_id);

        label_size = new QLabel(NorFlashWidget);
        label_size->setObjectName(QString::fromUtf8("label_size"));

        verticalLayout_2->addWidget(label_size);

        label = new QLabel(NorFlashWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_id = new QLineEdit(NorFlashWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_id);

        lineEdit_size = new QLineEdit(NorFlashWidget);
        lineEdit_size->setObjectName(QString::fromUtf8("lineEdit_size"));
        lineEdit_size->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_size);

        lineEdit_otpSize = new QLineEdit(NorFlashWidget);
        lineEdit_otpSize->setObjectName(QString::fromUtf8("lineEdit_otpSize"));
        lineEdit_otpSize->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_otpSize);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(NorFlashWidget);

        QMetaObject::connectSlotsByName(NorFlashWidget);
    } // setupUi

    void retranslateUi(QWidget *NorFlashWidget)
    {
        NorFlashWidget->setWindowTitle(QCoreApplication::translate("NorFlashWidget", "Form", nullptr));
        label_id->setText(QCoreApplication::translate("NorFlashWidget", "ID:", nullptr));
        label_size->setText(QCoreApplication::translate("NorFlashWidget", "Size:", nullptr));
        label->setText(QCoreApplication::translate("NorFlashWidget", "OTP Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NorFlashWidget: public Ui_NorFlashWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NORFLASHWIDGET_H
