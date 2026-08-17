/********************************************************************************
** Form generated from reading UI file 'UpdateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEDIALOG_H
#define UI_UPDATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_UpdateDialog
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QLabel *label;
    QTextBrowser *textBrowser_note;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_remind;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_install;

    void setupUi(QDialog *UpdateDialog)
    {
        if (UpdateDialog->objectName().isEmpty())
            UpdateDialog->setObjectName(QString::fromUtf8("UpdateDialog"));
        UpdateDialog->setWindowModality(Qt::ApplicationModal);
        UpdateDialog->resize(626, 385);
        UpdateDialog->setModal(true);
        gridLayout_2 = new QGridLayout(UpdateDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(UpdateDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        textBrowser_note = new QTextBrowser(frame);
        textBrowser_note->setObjectName(QString::fromUtf8("textBrowser_note"));

        gridLayout->addWidget(textBrowser_note, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_remind = new QPushButton(frame);
        pushButton_remind->setObjectName(QString::fromUtf8("pushButton_remind"));

        horizontalLayout->addWidget(pushButton_remind);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_install = new QPushButton(frame);
        pushButton_install->setObjectName(QString::fromUtf8("pushButton_install"));

        horizontalLayout->addWidget(pushButton_install);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(UpdateDialog);

        QMetaObject::connectSlotsByName(UpdateDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateDialog)
    {
        UpdateDialog->setWindowTitle(QCoreApplication::translate("UpdateDialog", "Software Update", nullptr));
        label->setText(QCoreApplication::translate("UpdateDialog", "<html><head/><body><p>A new version of Flash tool is availabel</p></body></html>", nullptr));
        pushButton_remind->setText(QCoreApplication::translate("UpdateDialog", "&Remind Me Later", nullptr));
        pushButton_install->setText(QCoreApplication::translate("UpdateDialog", "Install &Update", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateDialog: public Ui_UpdateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEDIALOG_H
