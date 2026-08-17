/********************************************************************************
** Form generated from reading UI file 'CheckUpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKUPDATEDIALOG_H
#define UI_CHECKUPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CheckUpdateDialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLabel *label_info;
    QProgressBar *progressBar;
    QPushButton *pushButton_ok;

    void setupUi(QDialog *CheckUpdateDialog)
    {
        if (CheckUpdateDialog->objectName().isEmpty())
            CheckUpdateDialog->setObjectName(QString::fromUtf8("CheckUpdateDialog"));
        CheckUpdateDialog->resize(475, 162);
        gridLayout = new QGridLayout(CheckUpdateDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frame = new QFrame(CheckUpdateDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_info = new QLabel(frame);
        label_info->setObjectName(QString::fromUtf8("label_info"));
        label_info->setGeometry(QRect(20, 10, 431, 16));
        progressBar = new QProgressBar(frame);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(true);
        progressBar->setGeometry(QRect(20, 50, 421, 20));
        progressBar->setMaximum(0);
        progressBar->setValue(0);
        progressBar->setOrientation(Qt::Horizontal);
        pushButton_ok = new QPushButton(frame);
        pushButton_ok->setObjectName(QString::fromUtf8("pushButton_ok"));
        pushButton_ok->setGeometry(QRect(170, 90, 75, 23));
        pushButton_ok->setFlat(false);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(CheckUpdateDialog);

        QMetaObject::connectSlotsByName(CheckUpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *CheckUpdateDialog)
    {
        CheckUpdateDialog->setWindowTitle(QCoreApplication::translate("CheckUpdateDialog", "Software Update", nullptr));
        label_info->setText(QCoreApplication::translate("CheckUpdateDialog", "Checking for update...", nullptr));
        pushButton_ok->setText(QCoreApplication::translate("CheckUpdateDialog", "&OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckUpdateDialog: public Ui_CheckUpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKUPDATEDIALOG_H
