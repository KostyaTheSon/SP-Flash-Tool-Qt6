/********************************************************************************
** Form generated from reading UI file 'UfsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UFSWIDGET_H
#define UI_UFSWIDGET_H

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

class Ui_UfsWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_lu0;
    QLabel *label_lu1;
    QLabel *label_lu2;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_lu0;
    QLineEdit *lineEdit_lu1;
    QLineEdit *lineEdit_lu2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *UfsWidget)
    {
        if (UfsWidget->objectName().isEmpty())
            UfsWidget->setObjectName(QString::fromUtf8("UfsWidget"));
        UfsWidget->resize(614, 383);
        gridLayout = new QGridLayout(UfsWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_lu0 = new QLabel(UfsWidget);
        label_lu0->setObjectName(QString::fromUtf8("label_lu0"));

        verticalLayout_2->addWidget(label_lu0);

        label_lu1 = new QLabel(UfsWidget);
        label_lu1->setObjectName(QString::fromUtf8("label_lu1"));

        verticalLayout_2->addWidget(label_lu1);

        label_lu2 = new QLabel(UfsWidget);
        label_lu2->setObjectName(QString::fromUtf8("label_lu2"));

        verticalLayout_2->addWidget(label_lu2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_lu0 = new QLineEdit(UfsWidget);
        lineEdit_lu0->setObjectName(QString::fromUtf8("lineEdit_lu0"));
        lineEdit_lu0->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_lu0);

        lineEdit_lu1 = new QLineEdit(UfsWidget);
        lineEdit_lu1->setObjectName(QString::fromUtf8("lineEdit_lu1"));
        lineEdit_lu1->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_lu1);

        lineEdit_lu2 = new QLineEdit(UfsWidget);
        lineEdit_lu2->setObjectName(QString::fromUtf8("lineEdit_lu2"));
        lineEdit_lu2->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_lu2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(UfsWidget);

        QMetaObject::connectSlotsByName(UfsWidget);
    } // setupUi

    void retranslateUi(QWidget *UfsWidget)
    {
        UfsWidget->setWindowTitle(QCoreApplication::translate("UfsWidget", "Form", nullptr));
        label_lu0->setText(QCoreApplication::translate("UfsWidget", "LU0 Size:", nullptr));
        label_lu1->setText(QCoreApplication::translate("UfsWidget", "LU1 Size:", nullptr));
        label_lu2->setText(QCoreApplication::translate("UfsWidget", "LU2 Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UfsWidget: public Ui_UfsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UFSWIDGET_H
