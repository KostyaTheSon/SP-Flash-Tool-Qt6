/********************************************************************************
** Form generated from reading UI file 'NandWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NANDWIDGET_H
#define UI_NANDWIDGET_H

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

class Ui_NandWidget
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_id;
    QLabel *label_size;
    QLabel *label_pageSize;
    QLabel *label_spareSize;
    QLabel *label_ppc;
    QLabel *label_bmt;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_size;
    QLineEdit *lineEdit_pageSize;
    QLineEdit *lineEdit_spareSize;
    QLineEdit *lineEdit_ppb;
    QLineEdit *lineEdit_bmtExist;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *NandWidget)
    {
        if (NandWidget->objectName().isEmpty())
            NandWidget->setObjectName(QString::fromUtf8("NandWidget"));
        NandWidget->resize(527, 300);
        gridLayout = new QGridLayout(NandWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_id = new QLabel(NandWidget);
        label_id->setObjectName(QString::fromUtf8("label_id"));

        verticalLayout_2->addWidget(label_id);

        label_size = new QLabel(NandWidget);
        label_size->setObjectName(QString::fromUtf8("label_size"));

        verticalLayout_2->addWidget(label_size);

        label_pageSize = new QLabel(NandWidget);
        label_pageSize->setObjectName(QString::fromUtf8("label_pageSize"));

        verticalLayout_2->addWidget(label_pageSize);

        label_spareSize = new QLabel(NandWidget);
        label_spareSize->setObjectName(QString::fromUtf8("label_spareSize"));

        verticalLayout_2->addWidget(label_spareSize);

        label_ppc = new QLabel(NandWidget);
        label_ppc->setObjectName(QString::fromUtf8("label_ppc"));

        verticalLayout_2->addWidget(label_ppc);

        label_bmt = new QLabel(NandWidget);
        label_bmt->setObjectName(QString::fromUtf8("label_bmt"));

        verticalLayout_2->addWidget(label_bmt);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit_id = new QLineEdit(NandWidget);
        lineEdit_id->setObjectName(QString::fromUtf8("lineEdit_id"));
        lineEdit_id->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_id);

        lineEdit_size = new QLineEdit(NandWidget);
        lineEdit_size->setObjectName(QString::fromUtf8("lineEdit_size"));
        lineEdit_size->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_size);

        lineEdit_pageSize = new QLineEdit(NandWidget);
        lineEdit_pageSize->setObjectName(QString::fromUtf8("lineEdit_pageSize"));
        lineEdit_pageSize->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_pageSize);

        lineEdit_spareSize = new QLineEdit(NandWidget);
        lineEdit_spareSize->setObjectName(QString::fromUtf8("lineEdit_spareSize"));
        lineEdit_spareSize->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_spareSize);

        lineEdit_ppb = new QLineEdit(NandWidget);
        lineEdit_ppb->setObjectName(QString::fromUtf8("lineEdit_ppb"));
        lineEdit_ppb->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_ppb);

        lineEdit_bmtExist = new QLineEdit(NandWidget);
        lineEdit_bmtExist->setObjectName(QString::fromUtf8("lineEdit_bmtExist"));
        lineEdit_bmtExist->setReadOnly(true);

        verticalLayout->addWidget(lineEdit_bmtExist);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout_3, 0, 0, 1, 1);


        retranslateUi(NandWidget);

        QMetaObject::connectSlotsByName(NandWidget);
    } // setupUi

    void retranslateUi(QWidget *NandWidget)
    {
        NandWidget->setWindowTitle(QCoreApplication::translate("NandWidget", "Form", nullptr));
        label_id->setText(QCoreApplication::translate("NandWidget", "ID:", nullptr));
        label_size->setText(QCoreApplication::translate("NandWidget", "Size:", nullptr));
        label_pageSize->setText(QCoreApplication::translate("NandWidget", "Page Size:", nullptr));
        label_spareSize->setText(QCoreApplication::translate("NandWidget", "Spare Size:", nullptr));
        label_ppc->setText(QCoreApplication::translate("NandWidget", "Pages per Block:", nullptr));
        label_bmt->setText(QCoreApplication::translate("NandWidget", "BMT Exist:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NandWidget: public Ui_NandWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NANDWIDGET_H
