/********************************************************************************
** Form generated from reading UI file 'WriteMemoryWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITEMEMORYWIDGET_H
#define UI_WRITEMEMORYWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WriteMemoryWidget
{
public:
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_writeMemory;
    QToolButton *toolButton_stop;
    QSpacerItem *horizontalSpacer_4;
    QFrame *frame_3;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_region;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_FilePath;
    QLineEdit *lineEdit_address;
    QComboBox *comboBox_region;
    QVBoxLayout *verticalLayout_3;
    QToolButton *toolButton_openFile;
    QLabel *label_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *WriteMemoryWidget)
    {
        if (WriteMemoryWidget->objectName().isEmpty())
            WriteMemoryWidget->setObjectName(QString::fromUtf8("WriteMemoryWidget"));
        WriteMemoryWidget->resize(505, 327);
        gridLayout_4 = new QGridLayout(WriteMemoryWidget);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(WriteMemoryWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton_writeMemory = new QToolButton(frame);
        toolButton_writeMemory->setObjectName(QString::fromUtf8("toolButton_writeMemory"));
        toolButton_writeMemory->setMinimumSize(QSize(91, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/writeMemory.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_writeMemory->setIcon(icon);
        toolButton_writeMemory->setIconSize(QSize(24, 24));
        toolButton_writeMemory->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_writeMemory->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_writeMemory);

        toolButton_stop = new QToolButton(frame);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        toolButton_stop->setEnabled(false);
        toolButton_stop->setMinimumSize(QSize(91, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_stop->setIcon(icon1);
        toolButton_stop->setIconSize(QSize(24, 24));
        toolButton_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_stop->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_stop);

        horizontalSpacer_4 = new QSpacerItem(217, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame, 0, 0, 1, 1);

        frame_3 = new QFrame(WriteMemoryWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox_2 = new QGroupBox(frame_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setMinimumSize(QSize(0, 0));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(138, 0));

        verticalLayout->addWidget(label_3);

        label_region = new QLabel(groupBox_2);
        label_region->setObjectName(QString::fromUtf8("label_region"));

        verticalLayout->addWidget(label_region);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_FilePath = new QLineEdit(groupBox_2);
        lineEdit_FilePath->setObjectName(QString::fromUtf8("lineEdit_FilePath"));
        lineEdit_FilePath->setMinimumSize(QSize(229, 0));

        verticalLayout_2->addWidget(lineEdit_FilePath);

        lineEdit_address = new QLineEdit(groupBox_2);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));
        lineEdit_address->setMinimumSize(QSize(229, 0));

        verticalLayout_2->addWidget(lineEdit_address);

        comboBox_region = new QComboBox(groupBox_2);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));

        verticalLayout_2->addWidget(comboBox_region);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        toolButton_openFile = new QToolButton(groupBox_2);
        toolButton_openFile->setObjectName(QString::fromUtf8("toolButton_openFile"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/openFolder.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_openFile->setIcon(icon2);
        toolButton_openFile->setIconSize(QSize(24, 24));
        toolButton_openFile->setAutoRaise(true);

        verticalLayout_3->addWidget(toolButton_openFile);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);

        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(frame_3, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(484, 62, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer_2, 2, 0, 1, 1);


        retranslateUi(WriteMemoryWidget);

        QMetaObject::connectSlotsByName(WriteMemoryWidget);
    } // setupUi

    void retranslateUi(QWidget *WriteMemoryWidget)
    {
        WriteMemoryWidget->setWindowTitle(QCoreApplication::translate("WriteMemoryWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_writeMemory->setToolTip(QCoreApplication::translate("WriteMemoryWidget", "Ctrl + W", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_writeMemory->setText(QCoreApplication::translate("WriteMemoryWidget", "Write Memory", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_stop->setToolTip(QCoreApplication::translate("WriteMemoryWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_stop->setText(QCoreApplication::translate("WriteMemoryWidget", "Stop", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("WriteMemoryWidget", "Write Parameter", nullptr));
        label->setText(QCoreApplication::translate("WriteMemoryWidget", "File Path:", nullptr));
        label_3->setText(QCoreApplication::translate("WriteMemoryWidget", "Begin Address (HEX):", nullptr));
        label_region->setText(QCoreApplication::translate("WriteMemoryWidget", "Region:", nullptr));
        lineEdit_address->setText(QCoreApplication::translate("WriteMemoryWidget", "0x1F600000", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_openFile->setToolTip(QCoreApplication::translate("WriteMemoryWidget", "Browser", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_openFile->setText(QCoreApplication::translate("WriteMemoryWidget", "...", nullptr));
        label_2->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WriteMemoryWidget: public Ui_WriteMemoryWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITEMEMORYWIDGET_H
