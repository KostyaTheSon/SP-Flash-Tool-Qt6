/********************************************************************************
** Form generated from reading UI file 'EMMCWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMMCWIDGET_H
#define UI_EMMCWIDGET_H

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

class Ui_EMMCWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_boot1Size;
    QLabel *label_boot2Size;
    QLabel *label_rpmbSize;
    QLabel *label_gp1Size;
    QLabel *label_gp2Size;
    QLabel *label_gp3Size;
    QLabel *label_gp4Size;
    QLabel *label_uaSize;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_boot1;
    QLineEdit *lineEdit_boot2;
    QLineEdit *lineEdit_rpmb;
    QLineEdit *lineEdit_gp1;
    QLineEdit *lineEdit_gp2;
    QLineEdit *lineEdit_gp3;
    QLineEdit *lineEdit_gp4;
    QLineEdit *lineEdit_ua;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EMMCWidget)
    {
        if (EMMCWidget->objectName().isEmpty())
            EMMCWidget->setObjectName(QString::fromUtf8("EMMCWidget"));
        EMMCWidget->resize(614, 383);
        gridLayout = new QGridLayout(EMMCWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_boot1Size = new QLabel(EMMCWidget);
        label_boot1Size->setObjectName(QString::fromUtf8("label_boot1Size"));

        verticalLayout_2->addWidget(label_boot1Size);

        label_boot2Size = new QLabel(EMMCWidget);
        label_boot2Size->setObjectName(QString::fromUtf8("label_boot2Size"));

        verticalLayout_2->addWidget(label_boot2Size);

        label_rpmbSize = new QLabel(EMMCWidget);
        label_rpmbSize->setObjectName(QString::fromUtf8("label_rpmbSize"));

        verticalLayout_2->addWidget(label_rpmbSize);

        label_gp1Size = new QLabel(EMMCWidget);
        label_gp1Size->setObjectName(QString::fromUtf8("label_gp1Size"));

        verticalLayout_2->addWidget(label_gp1Size);

        label_gp2Size = new QLabel(EMMCWidget);
        label_gp2Size->setObjectName(QString::fromUtf8("label_gp2Size"));

        verticalLayout_2->addWidget(label_gp2Size);

        label_gp3Size = new QLabel(EMMCWidget);
        label_gp3Size->setObjectName(QString::fromUtf8("label_gp3Size"));

        verticalLayout_2->addWidget(label_gp3Size);

        label_gp4Size = new QLabel(EMMCWidget);
        label_gp4Size->setObjectName(QString::fromUtf8("label_gp4Size"));

        verticalLayout_2->addWidget(label_gp4Size);

        label_uaSize = new QLabel(EMMCWidget);
        label_uaSize->setObjectName(QString::fromUtf8("label_uaSize"));

        verticalLayout_2->addWidget(label_uaSize);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_boot1 = new QLineEdit(EMMCWidget);
        lineEdit_boot1->setObjectName(QString::fromUtf8("lineEdit_boot1"));
        lineEdit_boot1->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_boot1);

        lineEdit_boot2 = new QLineEdit(EMMCWidget);
        lineEdit_boot2->setObjectName(QString::fromUtf8("lineEdit_boot2"));
        lineEdit_boot2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_boot2);

        lineEdit_rpmb = new QLineEdit(EMMCWidget);
        lineEdit_rpmb->setObjectName(QString::fromUtf8("lineEdit_rpmb"));
        lineEdit_rpmb->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_rpmb);

        lineEdit_gp1 = new QLineEdit(EMMCWidget);
        lineEdit_gp1->setObjectName(QString::fromUtf8("lineEdit_gp1"));
        lineEdit_gp1->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_gp1);

        lineEdit_gp2 = new QLineEdit(EMMCWidget);
        lineEdit_gp2->setObjectName(QString::fromUtf8("lineEdit_gp2"));
        lineEdit_gp2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_gp2);

        lineEdit_gp3 = new QLineEdit(EMMCWidget);
        lineEdit_gp3->setObjectName(QString::fromUtf8("lineEdit_gp3"));
        lineEdit_gp3->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_gp3);

        lineEdit_gp4 = new QLineEdit(EMMCWidget);
        lineEdit_gp4->setObjectName(QString::fromUtf8("lineEdit_gp4"));
        lineEdit_gp4->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_gp4);

        lineEdit_ua = new QLineEdit(EMMCWidget);
        lineEdit_ua->setObjectName(QString::fromUtf8("lineEdit_ua"));
        lineEdit_ua->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_ua);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(EMMCWidget);

        QMetaObject::connectSlotsByName(EMMCWidget);
    } // setupUi

    void retranslateUi(QWidget *EMMCWidget)
    {
        EMMCWidget->setWindowTitle(QCoreApplication::translate("EMMCWidget", "Form", nullptr));
        label_boot1Size->setText(QCoreApplication::translate("EMMCWidget", "Boot1 Size:", nullptr));
        label_boot2Size->setText(QCoreApplication::translate("EMMCWidget", "Boot2 Size:", nullptr));
        label_rpmbSize->setText(QCoreApplication::translate("EMMCWidget", "RPMB Size:", nullptr));
        label_gp1Size->setText(QCoreApplication::translate("EMMCWidget", "GP1 Size:", nullptr));
        label_gp2Size->setText(QCoreApplication::translate("EMMCWidget", "GP2 Size:", nullptr));
        label_gp3Size->setText(QCoreApplication::translate("EMMCWidget", "GP3 Size:", nullptr));
        label_gp4Size->setText(QCoreApplication::translate("EMMCWidget", "GP4 Size:", nullptr));
        label_uaSize->setText(QCoreApplication::translate("EMMCWidget", "UA Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EMMCWidget: public Ui_EMMCWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMMCWIDGET_H
