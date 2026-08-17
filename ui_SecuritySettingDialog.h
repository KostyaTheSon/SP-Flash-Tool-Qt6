/********************************************************************************
** Form generated from reading UI file 'SecuritySettingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECURITYSETTINGDIALOG_H
#define UI_SECURITYSETTINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecuritySettingDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QCheckBox *checkBox_lockDownAllImages;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout_imageList;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_ok;
    QPushButton *pushButton_cancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *SecuritySettingDialog)
    {
        if (SecuritySettingDialog->objectName().isEmpty())
            SecuritySettingDialog->setObjectName(QString::fromUtf8("SecuritySettingDialog"));
        SecuritySettingDialog->resize(428, 342);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        SecuritySettingDialog->setWindowIcon(icon);
        horizontalLayout = new QHBoxLayout(SecuritySettingDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(SecuritySettingDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        groupBox->setCheckable(false);
        checkBox_lockDownAllImages = new QCheckBox(groupBox);
        checkBox_lockDownAllImages->setObjectName(QString::fromUtf8("checkBox_lockDownAllImages"));
        checkBox_lockDownAllImages->setGeometry(QRect(10, 0, 16, 16));
        verticalLayoutWidget = new QWidget(groupBox);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 20, 311, 301));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_imageList = new QVBoxLayout();
        verticalLayout_imageList->setObjectName(QString::fromUtf8("verticalLayout_imageList"));

        verticalLayout_2->addLayout(verticalLayout_imageList);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(groupBox);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_ok = new QPushButton(SecuritySettingDialog);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));

        verticalLayout->addWidget(pushButton_ok);

        pushButton_cancel = new QPushButton(SecuritySettingDialog);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        verticalLayout->addWidget(pushButton_cancel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(SecuritySettingDialog);

        QMetaObject::connectSlotsByName(SecuritySettingDialog);
    } // setupUi

    void retranslateUi(QDialog *SecuritySettingDialog)
    {
        SecuritySettingDialog->setWindowTitle(QCoreApplication::translate("SecuritySettingDialog", "Security Setting", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SecuritySettingDialog", "   Lock down all images", nullptr));
        checkBox_lockDownAllImages->setText(QString());
        pushButton_ok->setText(QCoreApplication::translate("SecuritySettingDialog", "&Ok", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("SecuritySettingDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecuritySettingDialog: public Ui_SecuritySettingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECURITYSETTINGDIALOG_H
