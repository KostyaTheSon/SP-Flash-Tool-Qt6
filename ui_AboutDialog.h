/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_title;
    QLabel *label_build_date;
    QLabel *label_comment;
    QGroupBox *groupBox_DA_and_DLL_Info;
    QVBoxLayout *verticalLayout;
    QLabel *label_DA;
    QLabel *label_DA_Build_Date;
    QLabel *label_Brom;
    QLabel *label_Brom_Release_Type;
    QLabel *label_Brom_Build_Date;
    QLabel *label_Eboot;
    QLabel *label_Eboot_Release_Type;
    QLabel *label_Eboot_Build_Date;
    QLabel *label_copyright;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_Ok;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->setWindowModality(Qt::NonModal);
        AboutDialog->setEnabled(true);
        AboutDialog->resize(406, 374);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AboutDialog->sizePolicy().hasHeightForWidth());
        AboutDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        AboutDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(AboutDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(AboutDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_title = new QLabel(frame);
        label_title->setObjectName(QString::fromUtf8("label_title"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Unicode MS"));
        font.setPointSize(22);
        font.setBold(false);
        font.setWeight(50);
        label_title->setFont(font);

        verticalLayout_2->addWidget(label_title);

        label_build_date = new QLabel(frame);
        label_build_date->setObjectName(QString::fromUtf8("label_build_date"));

        verticalLayout_2->addWidget(label_build_date);

        label_comment = new QLabel(frame);
        label_comment->setObjectName(QString::fromUtf8("label_comment"));

        verticalLayout_2->addWidget(label_comment);

        groupBox_DA_and_DLL_Info = new QGroupBox(frame);
        groupBox_DA_and_DLL_Info->setObjectName(QString::fromUtf8("groupBox_DA_and_DLL_Info"));
        verticalLayout = new QVBoxLayout(groupBox_DA_and_DLL_Info);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_DA = new QLabel(groupBox_DA_and_DLL_Info);
        label_DA->setObjectName(QString::fromUtf8("label_DA"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_DA->setFont(font1);

        verticalLayout->addWidget(label_DA);

        label_DA_Build_Date = new QLabel(groupBox_DA_and_DLL_Info);
        label_DA_Build_Date->setObjectName(QString::fromUtf8("label_DA_Build_Date"));

        verticalLayout->addWidget(label_DA_Build_Date);

        label_Brom = new QLabel(groupBox_DA_and_DLL_Info);
        label_Brom->setObjectName(QString::fromUtf8("label_Brom"));
        label_Brom->setFont(font1);

        verticalLayout->addWidget(label_Brom);

        label_Brom_Release_Type = new QLabel(groupBox_DA_and_DLL_Info);
        label_Brom_Release_Type->setObjectName(QString::fromUtf8("label_Brom_Release_Type"));

        verticalLayout->addWidget(label_Brom_Release_Type);

        label_Brom_Build_Date = new QLabel(groupBox_DA_and_DLL_Info);
        label_Brom_Build_Date->setObjectName(QString::fromUtf8("label_Brom_Build_Date"));

        verticalLayout->addWidget(label_Brom_Build_Date);

        label_Eboot = new QLabel(groupBox_DA_and_DLL_Info);
        label_Eboot->setObjectName(QString::fromUtf8("label_Eboot"));
        label_Eboot->setFont(font1);

        verticalLayout->addWidget(label_Eboot);

        label_Eboot_Release_Type = new QLabel(groupBox_DA_and_DLL_Info);
        label_Eboot_Release_Type->setObjectName(QString::fromUtf8("label_Eboot_Release_Type"));

        verticalLayout->addWidget(label_Eboot_Release_Type);

        label_Eboot_Build_Date = new QLabel(groupBox_DA_and_DLL_Info);
        label_Eboot_Build_Date->setObjectName(QString::fromUtf8("label_Eboot_Build_Date"));

        verticalLayout->addWidget(label_Eboot_Build_Date);


        verticalLayout_2->addWidget(groupBox_DA_and_DLL_Info);

        label_copyright = new QLabel(frame);
        label_copyright->setObjectName(QString::fromUtf8("label_copyright"));

        verticalLayout_2->addWidget(label_copyright);


        verticalLayout_3->addWidget(frame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_Ok = new QPushButton(AboutDialog);
        pushButton_Ok->setObjectName(QString::fromUtf8("pushButton_Ok"));

        horizontalLayout->addWidget(pushButton_Ok);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);
        QObject::connect(pushButton_Ok, SIGNAL(clicked()), AboutDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Smart Phone Flash Tool", nullptr));
        label_title->setText(QString());
        label_build_date->setText(QCoreApplication::translate("AboutDialog", ":", nullptr));
        label_comment->setText(QString());
        groupBox_DA_and_DLL_Info->setTitle(QCoreApplication::translate("AboutDialog", "DA and Library Info", nullptr));
        label_DA->setText(QString());
        label_DA_Build_Date->setText(QString());
        label_Brom->setText(QString());
        label_Brom_Release_Type->setText(QString());
        label_Brom_Build_Date->setText(QString());
        label_Eboot->setText(QString());
        label_Eboot_Release_Type->setText(QString());
        label_Eboot_Build_Date->setText(QString());
        label_copyright->setText(QCoreApplication::translate("AboutDialog", "Copyright (c) 2001-2017, MediaTek Inc. All rights reserved.", nullptr));
        pushButton_Ok->setText(QCoreApplication::translate("AboutDialog", "&Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
