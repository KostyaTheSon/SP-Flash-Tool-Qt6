/********************************************************************************
** Form generated from reading UI file 'ChipInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHIPINFOWIDGET_H
#define UI_CHIPINFOWIDGET_H

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

class Ui_ChipInfoWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_chipName;
    QLabel *label_chipVersion;
    QLabel *label_extClock;
    QLabel *label_ramType;
    QLabel *label_ramSize;
    QLabel *label_sramSize;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_chipName;
    QLineEdit *lineEdit_chipVersion;
    QLineEdit *lineEdit_extClock;
    QLineEdit *lineEdit_ramType;
    QLineEdit *lineEdit_ramSize;
    QLineEdit *lineEdit_sramSize;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ChipInfoWidget)
    {
        if (ChipInfoWidget->objectName().isEmpty())
            ChipInfoWidget->setObjectName(QString::fromUtf8("ChipInfoWidget"));
        ChipInfoWidget->resize(400, 300);
        gridLayout = new QGridLayout(ChipInfoWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_chipName = new QLabel(ChipInfoWidget);
        label_chipName->setObjectName(QString::fromUtf8("label_chipName"));

        verticalLayout_2->addWidget(label_chipName);

        label_chipVersion = new QLabel(ChipInfoWidget);
        label_chipVersion->setObjectName(QString::fromUtf8("label_chipVersion"));

        verticalLayout_2->addWidget(label_chipVersion);

        label_extClock = new QLabel(ChipInfoWidget);
        label_extClock->setObjectName(QString::fromUtf8("label_extClock"));

        verticalLayout_2->addWidget(label_extClock);

        label_ramType = new QLabel(ChipInfoWidget);
        label_ramType->setObjectName(QString::fromUtf8("label_ramType"));

        verticalLayout_2->addWidget(label_ramType);

        label_ramSize = new QLabel(ChipInfoWidget);
        label_ramSize->setObjectName(QString::fromUtf8("label_ramSize"));

        verticalLayout_2->addWidget(label_ramSize);

        label_sramSize = new QLabel(ChipInfoWidget);
        label_sramSize->setObjectName(QString::fromUtf8("label_sramSize"));

        verticalLayout_2->addWidget(label_sramSize);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_chipName = new QLineEdit(ChipInfoWidget);
        lineEdit_chipName->setObjectName(QString::fromUtf8("lineEdit_chipName"));
        lineEdit_chipName->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_chipName);

        lineEdit_chipVersion = new QLineEdit(ChipInfoWidget);
        lineEdit_chipVersion->setObjectName(QString::fromUtf8("lineEdit_chipVersion"));
        lineEdit_chipVersion->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_chipVersion);

        lineEdit_extClock = new QLineEdit(ChipInfoWidget);
        lineEdit_extClock->setObjectName(QString::fromUtf8("lineEdit_extClock"));
        lineEdit_extClock->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_extClock);

        lineEdit_ramType = new QLineEdit(ChipInfoWidget);
        lineEdit_ramType->setObjectName(QString::fromUtf8("lineEdit_ramType"));
        lineEdit_ramType->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_ramType);

        lineEdit_ramSize = new QLineEdit(ChipInfoWidget);
        lineEdit_ramSize->setObjectName(QString::fromUtf8("lineEdit_ramSize"));
        lineEdit_ramSize->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_ramSize);

        lineEdit_sramSize = new QLineEdit(ChipInfoWidget);
        lineEdit_sramSize->setObjectName(QString::fromUtf8("lineEdit_sramSize"));
        lineEdit_sramSize->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_sramSize);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(ChipInfoWidget);

        QMetaObject::connectSlotsByName(ChipInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *ChipInfoWidget)
    {
        ChipInfoWidget->setWindowTitle(QCoreApplication::translate("ChipInfoWidget", "Form", nullptr));
        label_chipName->setText(QCoreApplication::translate("ChipInfoWidget", "Chip Name:", nullptr));
        label_chipVersion->setText(QCoreApplication::translate("ChipInfoWidget", "Chip Version:", nullptr));
        label_extClock->setText(QCoreApplication::translate("ChipInfoWidget", "Ext Clock:", nullptr));
        label_ramType->setText(QCoreApplication::translate("ChipInfoWidget", "Extern RAM Type:", nullptr));
        label_ramSize->setText(QCoreApplication::translate("ChipInfoWidget", "Extern RAM Size:", nullptr));
        label_sramSize->setText(QCoreApplication::translate("ChipInfoWidget", "SRAM Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChipInfoWidget: public Ui_ChipInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHIPINFOWIDGET_H
