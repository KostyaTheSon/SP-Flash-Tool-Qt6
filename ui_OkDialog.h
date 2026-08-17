/********************************************************************************
** Form generated from reading UI file 'OkDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OKDIALOG_H
#define UI_OKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_OkDialog
{
public:

    void setupUi(QDialog *OkDialog)
    {
        if (OkDialog->objectName().isEmpty())
            OkDialog->setObjectName(QString::fromUtf8("OkDialog"));
        OkDialog->setWindowModality(Qt::ApplicationModal);
        OkDialog->resize(229, 148);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OkDialog->sizePolicy().hasHeightForWidth());
        OkDialog->setSizePolicy(sizePolicy);
        OkDialog->setMaximumSize(QSize(229, 148));
        OkDialog->setStyleSheet(QString::fromUtf8("background-image: url(:/images/ok.png);\n"
"background-color: rgb(85, 255, 255);\n"
"background-repeat:no-repeat;\n"
"background-position:center;"));

        retranslateUi(OkDialog);

        QMetaObject::connectSlotsByName(OkDialog);
    } // setupUi

    void retranslateUi(QDialog *OkDialog)
    {
        OkDialog->setWindowTitle(QCoreApplication::translate("OkDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OkDialog: public Ui_OkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OKDIALOG_H
