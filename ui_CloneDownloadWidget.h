/********************************************************************************
** Form generated from reading UI file 'CloneDownloadWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLONEDOWNLOADWIDGET_H
#define UI_CLONEDOWNLOADWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloneDownloadWidget
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_4;
    QFrame *button_Frame;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *pushButton_CloneReadback;
    QToolButton *pushButton_Restore;
    QToolButton *pushButton_Stop;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_readback;
    QLabel *label_restore;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_readback;
    QLineEdit *lineEdit_restore;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_readback;
    QPushButton *pushButton_restore;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CloneDownloadWidget)
    {
        if (CloneDownloadWidget->objectName().isEmpty())
            CloneDownloadWidget->setObjectName(QString::fromUtf8("CloneDownloadWidget"));
        CloneDownloadWidget->resize(681, 456);
        gridLayout_3 = new QGridLayout(CloneDownloadWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        button_Frame = new QFrame(CloneDownloadWidget);
        button_Frame->setObjectName(QString::fromUtf8("button_Frame"));
        button_Frame->setFrameShape(QFrame::Panel);
        button_Frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(button_Frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton_CloneReadback = new QToolButton(button_Frame);
        pushButton_CloneReadback->setObjectName(QString::fromUtf8("pushButton_CloneReadback"));
        pushButton_CloneReadback->setMinimumSize(QSize(110, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/readBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_CloneReadback->setIcon(icon);
        pushButton_CloneReadback->setIconSize(QSize(24, 24));
        pushButton_CloneReadback->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_CloneReadback->setAutoRaise(true);

        horizontalLayout_2->addWidget(pushButton_CloneReadback);

        pushButton_Restore = new QToolButton(button_Frame);
        pushButton_Restore->setObjectName(QString::fromUtf8("pushButton_Restore"));
        pushButton_Restore->setMinimumSize(QSize(110, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/jump.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Restore->setIcon(icon1);
        pushButton_Restore->setIconSize(QSize(24, 24));
        pushButton_Restore->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_Restore->setAutoRaise(true);

        horizontalLayout_2->addWidget(pushButton_Restore);

        pushButton_Stop = new QToolButton(button_Frame);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setEnabled(false);
        pushButton_Stop->setMinimumSize(QSize(110, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Stop->setIcon(icon2);
        pushButton_Stop->setIconSize(QSize(24, 24));
        pushButton_Stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_Stop->setAutoRaise(true);

        horizontalLayout_2->addWidget(pushButton_Stop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        verticalLayout_4->addWidget(button_Frame);

        frame = new QFrame(CloneDownloadWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_readback = new QLabel(frame);
        label_readback->setObjectName(QString::fromUtf8("label_readback"));
        label_readback->setMinimumSize(QSize(80, 0));

        verticalLayout_3->addWidget(label_readback);

        label_restore = new QLabel(frame);
        label_restore->setObjectName(QString::fromUtf8("label_restore"));
        label_restore->setMinimumSize(QSize(80, 0));

        verticalLayout_3->addWidget(label_restore);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_readback = new QLineEdit(frame);
        lineEdit_readback->setObjectName(QString::fromUtf8("lineEdit_readback"));
        lineEdit_readback->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_readback);

        lineEdit_restore = new QLineEdit(frame);
        lineEdit_restore->setObjectName(QString::fromUtf8("lineEdit_restore"));
        lineEdit_restore->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_restore);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_readback = new QPushButton(frame);
        pushButton_readback->setObjectName(QString::fromUtf8("pushButton_readback"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_readback->setIcon(icon3);
        pushButton_readback->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton_readback);

        pushButton_restore = new QPushButton(frame);
        pushButton_restore->setObjectName(QString::fromUtf8("pushButton_restore"));
        pushButton_restore->setIcon(icon3);
        pushButton_restore->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton_restore);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        verticalLayout_4->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        gridLayout_3->addLayout(verticalLayout_4, 0, 0, 1, 1);


        retranslateUi(CloneDownloadWidget);

        QMetaObject::connectSlotsByName(CloneDownloadWidget);
    } // setupUi

    void retranslateUi(QWidget *CloneDownloadWidget)
    {
        CloneDownloadWidget->setWindowTitle(QCoreApplication::translate("CloneDownloadWidget", "Form", nullptr));
        pushButton_CloneReadback->setText(QCoreApplication::translate("CloneDownloadWidget", "Readback", nullptr));
        pushButton_Restore->setText(QCoreApplication::translate("CloneDownloadWidget", "Restore", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("CloneDownloadWidget", "Stop", nullptr));
        label_readback->setText(QCoreApplication::translate("CloneDownloadWidget", "Readback", nullptr));
        label_restore->setText(QCoreApplication::translate("CloneDownloadWidget", "Restore", nullptr));
        pushButton_readback->setText(QCoreApplication::translate("CloneDownloadWidget", "Open Folder ", nullptr));
        pushButton_restore->setText(QCoreApplication::translate("CloneDownloadWidget", "Restore Folder", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloneDownloadWidget: public Ui_CloneDownloadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLONEDOWNLOADWIDGET_H
