/********************************************************************************
** Form generated from reading UI file 'BromAdapterWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROMADAPTERWIDGET_H
#define UI_BROMADAPTERWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BromAdapterWidget
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_buttontoolb;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_connect;
    QToolButton *toolButton_download;
    QToolButton *toolButton_jump;
    QToolButton *toolButton_stop;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_download;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit_dataPath;
    QPushButton *pushButton_data;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_startAddress;
    QLineEdit *lineEdit_startAddress;
    QCheckBox *checkBox_jump;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_jump;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit_jumpAddress;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *BromAdapterWidget)
    {
        if (BromAdapterWidget->objectName().isEmpty())
            BromAdapterWidget->setObjectName(QString::fromUtf8("BromAdapterWidget"));
        BromAdapterWidget->resize(681, 456);
        gridLayout_3 = new QGridLayout(BromAdapterWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_buttontoolb = new QFrame(BromAdapterWidget);
        frame_buttontoolb->setObjectName(QString::fromUtf8("frame_buttontoolb"));
        frame_buttontoolb->setFrameShape(QFrame::Panel);
        frame_buttontoolb->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_buttontoolb);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        toolButton_connect = new QToolButton(frame_buttontoolb);
        toolButton_connect->setObjectName(QString::fromUtf8("toolButton_connect"));
        toolButton_connect->setMinimumSize(QSize(110, 0));
        toolButton_connect->setStyleSheet(QString::fromUtf8("border-width:2px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/connect.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_connect->setIcon(icon);
        toolButton_connect->setIconSize(QSize(24, 24));
        toolButton_connect->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_connect->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_connect);

        toolButton_download = new QToolButton(frame_buttontoolb);
        toolButton_download->setObjectName(QString::fromUtf8("toolButton_download"));
        toolButton_download->setEnabled(true);
        toolButton_download->setMinimumSize(QSize(110, 0));
        toolButton_download->setStyleSheet(QString::fromUtf8("border-width:2px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_download->setIcon(icon1);
        toolButton_download->setIconSize(QSize(24, 24));
        toolButton_download->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_download->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_download);

        toolButton_jump = new QToolButton(frame_buttontoolb);
        toolButton_jump->setObjectName(QString::fromUtf8("toolButton_jump"));
        toolButton_jump->setEnabled(false);
        toolButton_jump->setMinimumSize(QSize(110, 0));
        toolButton_jump->setStyleSheet(QString::fromUtf8("border-width:2px;"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/jump.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_jump->setIcon(icon2);
        toolButton_jump->setIconSize(QSize(24, 24));
        toolButton_jump->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_jump->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_jump);

        toolButton_stop = new QToolButton(frame_buttontoolb);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        toolButton_stop->setEnabled(false);
        toolButton_stop->setMinimumSize(QSize(110, 0));
        toolButton_stop->setStyleSheet(QString::fromUtf8("border-width:2px;"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_stop->setIcon(icon3);
        toolButton_stop->setIconSize(QSize(24, 24));
        toolButton_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_stop->setAutoRaise(true);

        horizontalLayout_4->addWidget(toolButton_stop);

        horizontalSpacer = new QSpacerItem(176, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        gridLayout_3->addWidget(frame_buttontoolb, 0, 0, 1, 1);

        frame_download = new QFrame(BromAdapterWidget);
        frame_download->setObjectName(QString::fromUtf8("frame_download"));
        frame_download->setFrameShape(QFrame::StyledPanel);
        frame_download->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_download);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lineEdit_dataPath = new QLineEdit(frame_download);
        lineEdit_dataPath->setObjectName(QString::fromUtf8("lineEdit_dataPath"));

        horizontalLayout_3->addWidget(lineEdit_dataPath);

        pushButton_data = new QPushButton(frame_download);
        pushButton_data->setObjectName(QString::fromUtf8("pushButton_data"));
        pushButton_data->setEnabled(true);
        pushButton_data->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-align:left;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_data->setIcon(icon4);
        pushButton_data->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(pushButton_data);


        gridLayout_2->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_startAddress = new QLabel(frame_download);
        label_startAddress->setObjectName(QString::fromUtf8("label_startAddress"));

        horizontalLayout_2->addWidget(label_startAddress);

        lineEdit_startAddress = new QLineEdit(frame_download);
        lineEdit_startAddress->setObjectName(QString::fromUtf8("lineEdit_startAddress"));
        lineEdit_startAddress->setMinimumSize(QSize(100, 0));
        lineEdit_startAddress->setMaximumSize(QSize(120, 16777215));
        lineEdit_startAddress->setMaxLength(18);
        lineEdit_startAddress->setCursorPosition(0);

        horizontalLayout_2->addWidget(lineEdit_startAddress);

        checkBox_jump = new QCheckBox(frame_download);
        checkBox_jump->setObjectName(QString::fromUtf8("checkBox_jump"));

        horizontalLayout_2->addWidget(checkBox_jump);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        gridLayout_2->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        gridLayout_3->addWidget(frame_download, 1, 0, 1, 1);

        frame_jump = new QFrame(BromAdapterWidget);
        frame_jump->setObjectName(QString::fromUtf8("frame_jump"));
        frame_jump->setFrameShape(QFrame::StyledPanel);
        frame_jump->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_jump);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(frame_jump);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        lineEdit_jumpAddress = new QLineEdit(frame_jump);
        lineEdit_jumpAddress->setObjectName(QString::fromUtf8("lineEdit_jumpAddress"));
        lineEdit_jumpAddress->setMinimumSize(QSize(100, 0));
        lineEdit_jumpAddress->setMaximumSize(QSize(120, 16777215));
        lineEdit_jumpAddress->setMaxLength(18);

        horizontalLayout->addWidget(lineEdit_jumpAddress);

        horizontalSpacer_2 = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame_jump, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 206, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 3, 0, 1, 1);


        retranslateUi(BromAdapterWidget);

        QMetaObject::connectSlotsByName(BromAdapterWidget);
    } // setupUi

    void retranslateUi(QWidget *BromAdapterWidget)
    {
        BromAdapterWidget->setWindowTitle(QCoreApplication::translate("BromAdapterWidget", "Form", nullptr));
#if QT_CONFIG(statustip)
        toolButton_connect->setStatusTip(QCoreApplication::translate("BromAdapterWidget", "Ctrl + C", nullptr));
#endif // QT_CONFIG(statustip)
        toolButton_connect->setText(QCoreApplication::translate("BromAdapterWidget", "Connect", nullptr));
#if QT_CONFIG(statustip)
        toolButton_download->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        toolButton_download->setText(QCoreApplication::translate("BromAdapterWidget", "Download", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_jump->setToolTip(QCoreApplication::translate("BromAdapterWidget", "Ctrl + J", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_jump->setText(QCoreApplication::translate("BromAdapterWidget", "Jump", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_stop->setToolTip(QCoreApplication::translate("BromAdapterWidget", "Ctrl + S", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_stop->setText(QCoreApplication::translate("BromAdapterWidget", "Stop", nullptr));
        pushButton_data->setText(QCoreApplication::translate("BromAdapterWidget", "Download Data", nullptr));
        label_startAddress->setText(QCoreApplication::translate("BromAdapterWidget", "Start Address:", nullptr));
        lineEdit_startAddress->setText(QString());
        lineEdit_startAddress->setPlaceholderText(QCoreApplication::translate("BromAdapterWidget", "Input address", nullptr));
        checkBox_jump->setText(QCoreApplication::translate("BromAdapterWidget", "Jump", nullptr));
        label->setText(QCoreApplication::translate("BromAdapterWidget", "Jump Address:", nullptr));
        lineEdit_jumpAddress->setText(QString());
        lineEdit_jumpAddress->setPlaceholderText(QCoreApplication::translate("BromAdapterWidget", "Input address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BromAdapterWidget: public Ui_BromAdapterWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROMADAPTERWIDGET_H
