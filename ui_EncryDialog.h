/********************************************************************************
** Form generated from reading UI file 'EncryDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCRYDIALOG_H
#define UI_ENCRYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EncryDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_hint;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QLineEdit *lineEdit_password;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;

    void setupUi(QDialog *EncryDialog)
    {
        if (EncryDialog->objectName().isEmpty())
            EncryDialog->setObjectName(QString::fromUtf8("EncryDialog"));
        EncryDialog->resize(379, 224);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(EncryDialog->sizePolicy().hasHeightForWidth());
        EncryDialog->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(EncryDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_hint = new QLabel(EncryDialog);
        label_hint->setObjectName(QString::fromUtf8("label_hint"));

        horizontalLayout->addWidget(label_hint);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(EncryDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setEnabled(false);
        line->setMinimumSize(QSize(0, 7));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        lineEdit_password = new QLineEdit(EncryDialog);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setContextMenuPolicy(Qt::NoContextMenu);
        lineEdit_password->setAcceptDrops(false);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(lineEdit_password);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        pushButton_OK = new QPushButton(EncryDialog);
        pushButton_OK->setObjectName(QString::fromUtf8("pushButton_OK"));

        horizontalLayout_2->addWidget(pushButton_OK);

        pushButton_Cancel = new QPushButton(EncryDialog);
        pushButton_Cancel->setObjectName(QString::fromUtf8("pushButton_Cancel"));

        horizontalLayout_2->addWidget(pushButton_Cancel);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(EncryDialog);

        QMetaObject::connectSlotsByName(EncryDialog);
    } // setupUi

    void retranslateUi(QDialog *EncryDialog)
    {
        EncryDialog->setWindowTitle(QCoreApplication::translate("EncryDialog", "Dialog", nullptr));
        label_hint->setText(QCoreApplication::translate("EncryDialog", "Please enter password:", nullptr));
        pushButton_OK->setText(QCoreApplication::translate("EncryDialog", "&OK", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("EncryDialog", "&Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EncryDialog: public Ui_EncryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCRYDIALOG_H
