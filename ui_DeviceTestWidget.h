/********************************************************************************
** Form generated from reading UI file 'DeviceTestWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICETESTWIDGET_H
#define UI_DEVICETESTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceTestWidget
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButton_start;
    QToolButton *toolButton_stop;
    QTextEdit *DeviceTestReport;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QSpacerItem *verticalSpacer;
    QGroupBox *BATTERY_TEST;
    QVBoxLayout *verticalLayout;
    QCheckBox *Battery_on;
    QCheckBox *Battery_off;
    QCheckBox *Battery_auto;
    QPushButton *SELECT_ALL;

    void setupUi(QWidget *DeviceTestWidget)
    {
        if (DeviceTestWidget->objectName().isEmpty())
            DeviceTestWidget->setObjectName(QString::fromUtf8("DeviceTestWidget"));
        DeviceTestWidget->resize(702, 502);
        gridLayout_3 = new QGridLayout(DeviceTestWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_5 = new QFrame(DeviceTestWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::Panel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_5);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        toolButton_start = new QToolButton(frame_5);
        toolButton_start->setObjectName(QString::fromUtf8("toolButton_start"));
        toolButton_start->setMinimumSize(QSize(110, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_start->setIcon(icon);
        toolButton_start->setIconSize(QSize(24, 24));
        toolButton_start->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_start->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_start);

        toolButton_stop = new QToolButton(frame_5);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        toolButton_stop->setEnabled(false);
        toolButton_stop->setMinimumSize(QSize(110, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_stop->setIcon(icon1);
        toolButton_stop->setIconSize(QSize(24, 24));
        toolButton_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_stop->setAutoRaise(true);

        horizontalLayout_2->addWidget(toolButton_stop);


        gridLayout_3->addWidget(frame_5, 0, 1, 1, 1);

        DeviceTestReport = new QTextEdit(DeviceTestWidget);
        DeviceTestReport->setObjectName(QString::fromUtf8("DeviceTestReport"));
        QFont font;
        font.setPointSize(12);
        DeviceTestReport->setFont(font);
        DeviceTestReport->setFrameShape(QFrame::WinPanel);
        DeviceTestReport->setReadOnly(true);

        gridLayout_3->addWidget(DeviceTestReport, 1, 1, 1, 1);

        groupBox = new QGroupBox(DeviceTestWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(270, 16777215));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        groupBox->setChecked(false);
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        verticalSpacer = new QSpacerItem(20, 27, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_4->addItem(verticalSpacer, 3, 0, 1, 1);

        BATTERY_TEST = new QGroupBox(groupBox);
        BATTERY_TEST->setObjectName(QString::fromUtf8("BATTERY_TEST"));
        BATTERY_TEST->setCheckable(true);
        BATTERY_TEST->setChecked(false);
        verticalLayout = new QVBoxLayout(BATTERY_TEST);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Battery_on = new QCheckBox(BATTERY_TEST);
        Battery_on->setObjectName(QString::fromUtf8("Battery_on"));
        Battery_on->setChecked(true);

        verticalLayout->addWidget(Battery_on);

        Battery_off = new QCheckBox(BATTERY_TEST);
        Battery_off->setObjectName(QString::fromUtf8("Battery_off"));
        Battery_off->setChecked(true);

        verticalLayout->addWidget(Battery_off);

        Battery_auto = new QCheckBox(BATTERY_TEST);
        Battery_auto->setObjectName(QString::fromUtf8("Battery_auto"));
        Battery_auto->setChecked(true);

        verticalLayout->addWidget(Battery_auto);


        gridLayout_4->addWidget(BATTERY_TEST, 1, 0, 1, 1);

        SELECT_ALL = new QPushButton(groupBox);
        SELECT_ALL->setObjectName(QString::fromUtf8("SELECT_ALL"));

        gridLayout_4->addWidget(SELECT_ALL, 2, 0, 1, 1);


        gridLayout_3->addWidget(groupBox, 0, 0, 2, 1);


        retranslateUi(DeviceTestWidget);

        QMetaObject::connectSlotsByName(DeviceTestWidget);
    } // setupUi

    void retranslateUi(QWidget *DeviceTestWidget)
    {
        DeviceTestWidget->setWindowTitle(QCoreApplication::translate("DeviceTestWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_start->setToolTip(QCoreApplication::translate("DeviceTestWidget", "F9", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_start->setText(QCoreApplication::translate("DeviceTestWidget", "Start", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_stop->setToolTip(QCoreApplication::translate("DeviceTestWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_stop->setText(QCoreApplication::translate("DeviceTestWidget", "Stop", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeviceTestWidget", "Select Device Test Method", nullptr));
        BATTERY_TEST->setTitle(QCoreApplication::translate("DeviceTestWidget", "Battery Test", nullptr));
        Battery_on->setText(QCoreApplication::translate("DeviceTestWidget", "with battery", nullptr));
        Battery_off->setText(QCoreApplication::translate("DeviceTestWidget", "w/o battery", nullptr));
        Battery_auto->setText(QCoreApplication::translate("DeviceTestWidget", "auto detect", nullptr));
        SELECT_ALL->setText(QCoreApplication::translate("DeviceTestWidget", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceTestWidget: public Ui_DeviceTestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICETESTWIDGET_H
