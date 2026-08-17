/********************************************************************************
** Form generated from reading UI file 'ProcessingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSINGDIALOG_H
#define UI_PROCESSINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProcessingDialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_cancel;
    QSpacerItem *horizontalSpacer_2;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QHBoxLayout *animationLayout;
    QLabel *Message;

    void setupUi(QDialog *ProcessingDialog)
    {
        if (ProcessingDialog->objectName().isEmpty())
            ProcessingDialog->setObjectName(QString::fromUtf8("ProcessingDialog"));
        ProcessingDialog->resize(165, 91);
        ProcessingDialog->setMouseTracking(true);
        ProcessingDialog->setAcceptDrops(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        ProcessingDialog->setWindowIcon(icon);
        ProcessingDialog->setModal(true);
        layoutWidget = new QWidget(ProcessingDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 60, 169, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_cancel = new QPushButton(layoutWidget);
        pushButton_cancel->setObjectName(QString::fromUtf8("pushButton_cancel"));

        horizontalLayout->addWidget(pushButton_cancel);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        layoutWidget1 = new QWidget(ProcessingDialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(0, 0, 130, 52));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(layoutWidget1);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_2->sizePolicy().hasHeightForWidth());
        frame_2->setSizePolicy(sizePolicy);
        frame_2->setMinimumSize(QSize(50, 50));
        frame_2->setMaximumSize(QSize(50, 50));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        animationLayout = new QHBoxLayout();
        animationLayout->setSpacing(0);
#ifndef Q_OS_MAC
        animationLayout->setContentsMargins(0, 0, 0, 0);
#endif
        animationLayout->setObjectName(QString::fromUtf8("animationLayout"));

        gridLayout->addLayout(animationLayout, 0, 0, 1, 1);


        horizontalLayout_3->addWidget(frame_2);

        Message = new QLabel(layoutWidget1);
        Message->setObjectName(QString::fromUtf8("Message"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        Message->setFont(font);

        horizontalLayout_3->addWidget(Message);


        retranslateUi(ProcessingDialog);

        pushButton_cancel->setDefault(false);


        QMetaObject::connectSlotsByName(ProcessingDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcessingDialog)
    {
        ProcessingDialog->setWindowTitle(QCoreApplication::translate("ProcessingDialog", "Processing...", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("ProcessingDialog", "&Cancel", nullptr));
        Message->setText(QCoreApplication::translate("ProcessingDialog", "Processing...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessingDialog: public Ui_ProcessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSINGDIALOG_H
