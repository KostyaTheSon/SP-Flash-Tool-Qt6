/********************************************************************************
** Form generated from reading UI file 'SDMMCWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SDMMCWIDGET_H
#define UI_SDMMCWIDGET_H

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

class Ui_SDMMCWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_id;
    QLabel *label_size;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_size;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SDMMCWidget)
    {
        if (SDMMCWidget->objectName().isEmpty())
            SDMMCWidget->setObjectName(QString::fromUtf8("SDMMCWidget"));
        SDMMCWidget->resize(400, 300);
        gridLayout = new QGridLayout(SDMMCWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_id = new QLabel(SDMMCWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        verticalLayout->addWidget(label_id);

        label_size = new QLabel(SDMMCWidget);
        label_size->setObjectName(QString::fromUtf8("label_size"));

        verticalLayout->addWidget(label_size);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_id = new QLineEdit(SDMMCWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_id);

        lineEdit_size = new QLineEdit(SDMMCWidget);
        lineEdit_size->setObjectName(QString::fromUtf8("lineEdit_size"));
        lineEdit_size->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_size);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(SDMMCWidget);

        QMetaObject::connectSlotsByName(SDMMCWidget);
    } // setupUi

    void retranslateUi(QWidget *SDMMCWidget)
    {
        SDMMCWidget->setWindowTitle(QCoreApplication::translate("SDMMCWidget", "Form", nullptr));
        label_id->setText(QCoreApplication::translate("SDMMCWidget", "ID:", nullptr));
        label_size->setText(QCoreApplication::translate("SDMMCWidget", "Size:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SDMMCWidget: public Ui_SDMMCWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SDMMCWIDGET_H
