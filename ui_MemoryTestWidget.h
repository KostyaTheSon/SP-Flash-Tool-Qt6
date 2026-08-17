/********************************************************************************
** Form generated from reading UI file 'MemoryTestWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMORYTESTWIDGET_H
#define UI_MEMORYTESTWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemoryTestWidget
{
public:
    QGridLayout *gridLayout_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QToolButton *toolButton_start;
    QToolButton *toolButton_stop;
    QTextEdit *MemoryTestReport;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QGroupBox *RAM_TEST;
    QVBoxLayout *verticalLayout_8;
    QCheckBox *RAM_DataBusTest;
    QCheckBox *RAM_AddrBusTest;
    QCheckBox *RAM_DedicatedPatternTest;
    QCheckBox *RAM_IncDecPatternTest;
    QGroupBox *DRAM_FLIP_TEST;
    QGridLayout *gridLayout_5;
    QRadioButton *radioButton_dramtest_auto;
    QRadioButton *radioButton_dramtest_manual;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_dramtest_address;
    QLineEdit *lineEdit_dramtest_address;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_dramtest_length;
    QLineEdit *lineEdit_dramtest_length;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_dramtest_stresscount;
    QLineEdit *lineEdit_dramtest_stresscount;
    QGroupBox *NAND_FLASH_TEST;
    QGridLayout *gridLayout;
    QCheckBox *NAND_DedicatedPatternTest;
    QGroupBox *EMMC_FLASH_TEST;
    QGridLayout *gridLayout_2;
    QCheckBox *EMMC_DedicatedPatternTest;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_region;
    QComboBox *comboBox_region;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_address;
    QLineEdit *lineEdit_address;
    QHBoxLayout *horizontalLayout;
    QLabel *label_length;
    QLineEdit *lineEdit_length;
    QPushButton *SELECT_ALL;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *MemoryTestWidget)
    {
        if (MemoryTestWidget->objectName().isEmpty())
            MemoryTestWidget->setObjectName(QString::fromUtf8("MemoryTestWidget"));
        MemoryTestWidget->resize(702, 502);
        gridLayout_3 = new QGridLayout(MemoryTestWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        frame_5 = new QFrame(MemoryTestWidget);
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

        MemoryTestReport = new QTextEdit(MemoryTestWidget);
        MemoryTestReport->setObjectName(QString::fromUtf8("MemoryTestReport"));
        QFont font;
        font.setPointSize(12);
        MemoryTestReport->setFont(font);
        MemoryTestReport->setFrameShape(QFrame::WinPanel);
        MemoryTestReport->setReadOnly(true);

        gridLayout_3->addWidget(MemoryTestReport, 1, 1, 1, 1);

        groupBox = new QGroupBox(MemoryTestWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(270, 16777215));
        groupBox->setFlat(false);
        groupBox->setCheckable(false);
        groupBox->setChecked(false);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        RAM_TEST = new QGroupBox(groupBox);
        RAM_TEST->setObjectName(QString::fromUtf8("RAM_TEST"));
        RAM_TEST->setCheckable(true);
        RAM_TEST->setChecked(true);
        verticalLayout_8 = new QVBoxLayout(RAM_TEST);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        RAM_DataBusTest = new QCheckBox(RAM_TEST);
        RAM_DataBusTest->setObjectName(QString::fromUtf8("RAM_DataBusTest"));
        RAM_DataBusTest->setChecked(true);

        verticalLayout_8->addWidget(RAM_DataBusTest);

        RAM_AddrBusTest = new QCheckBox(RAM_TEST);
        RAM_AddrBusTest->setObjectName(QString::fromUtf8("RAM_AddrBusTest"));
        RAM_AddrBusTest->setChecked(true);

        verticalLayout_8->addWidget(RAM_AddrBusTest);

        RAM_DedicatedPatternTest = new QCheckBox(RAM_TEST);
        RAM_DedicatedPatternTest->setObjectName(QString::fromUtf8("RAM_DedicatedPatternTest"));
        RAM_DedicatedPatternTest->setChecked(true);

        verticalLayout_8->addWidget(RAM_DedicatedPatternTest);

        RAM_IncDecPatternTest = new QCheckBox(RAM_TEST);
        RAM_IncDecPatternTest->setObjectName(QString::fromUtf8("RAM_IncDecPatternTest"));
        RAM_IncDecPatternTest->setChecked(true);

        verticalLayout_8->addWidget(RAM_IncDecPatternTest);


        verticalLayout->addWidget(RAM_TEST);

        DRAM_FLIP_TEST = new QGroupBox(groupBox);
        DRAM_FLIP_TEST->setObjectName(QString::fromUtf8("DRAM_FLIP_TEST"));
        DRAM_FLIP_TEST->setCheckable(true);
        DRAM_FLIP_TEST->setChecked(true);
        gridLayout_5 = new QGridLayout(DRAM_FLIP_TEST);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        radioButton_dramtest_auto = new QRadioButton(DRAM_FLIP_TEST);
        radioButton_dramtest_auto->setObjectName(QString::fromUtf8("radioButton_dramtest_auto"));
        radioButton_dramtest_auto->setChecked(true);

        gridLayout_5->addWidget(radioButton_dramtest_auto, 0, 0, 1, 1);

        radioButton_dramtest_manual = new QRadioButton(DRAM_FLIP_TEST);
        radioButton_dramtest_manual->setObjectName(QString::fromUtf8("radioButton_dramtest_manual"));

        gridLayout_5->addWidget(radioButton_dramtest_manual, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_dramtest_address = new QLabel(DRAM_FLIP_TEST);
        label_dramtest_address->setObjectName(QString::fromUtf8("label_dramtest_address"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_dramtest_address->sizePolicy().hasHeightForWidth());
        label_dramtest_address->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(label_dramtest_address);

        lineEdit_dramtest_address = new QLineEdit(DRAM_FLIP_TEST);
        lineEdit_dramtest_address->setObjectName(QString::fromUtf8("lineEdit_dramtest_address"));
        lineEdit_dramtest_address->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_dramtest_address->sizePolicy().hasHeightForWidth());
        lineEdit_dramtest_address->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(lineEdit_dramtest_address);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 0, -1, -1);
        label_dramtest_length = new QLabel(DRAM_FLIP_TEST);
        label_dramtest_length->setObjectName(QString::fromUtf8("label_dramtest_length"));
        sizePolicy.setHeightForWidth(label_dramtest_length->sizePolicy().hasHeightForWidth());
        label_dramtest_length->setSizePolicy(sizePolicy);
        label_dramtest_length->setMinimumSize(QSize(43, 13));

        horizontalLayout_6->addWidget(label_dramtest_length);

        lineEdit_dramtest_length = new QLineEdit(DRAM_FLIP_TEST);
        lineEdit_dramtest_length->setObjectName(QString::fromUtf8("lineEdit_dramtest_length"));
        lineEdit_dramtest_length->setEnabled(false);

        horizontalLayout_6->addWidget(lineEdit_dramtest_length);


        gridLayout_5->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        label_dramtest_stresscount = new QLabel(DRAM_FLIP_TEST);
        label_dramtest_stresscount->setObjectName(QString::fromUtf8("label_dramtest_stresscount"));

        horizontalLayout_7->addWidget(label_dramtest_stresscount);

        lineEdit_dramtest_stresscount = new QLineEdit(DRAM_FLIP_TEST);
        lineEdit_dramtest_stresscount->setObjectName(QString::fromUtf8("lineEdit_dramtest_stresscount"));
        lineEdit_dramtest_stresscount->setEnabled(false);

        horizontalLayout_7->addWidget(lineEdit_dramtest_stresscount);


        gridLayout_5->addLayout(horizontalLayout_7, 4, 0, 1, 1);


        verticalLayout->addWidget(DRAM_FLIP_TEST);

        NAND_FLASH_TEST = new QGroupBox(groupBox);
        NAND_FLASH_TEST->setObjectName(QString::fromUtf8("NAND_FLASH_TEST"));
        NAND_FLASH_TEST->setCheckable(true);
        NAND_FLASH_TEST->setChecked(false);
        gridLayout = new QGridLayout(NAND_FLASH_TEST);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        NAND_DedicatedPatternTest = new QCheckBox(NAND_FLASH_TEST);
        NAND_DedicatedPatternTest->setObjectName(QString::fromUtf8("NAND_DedicatedPatternTest"));
        NAND_DedicatedPatternTest->setChecked(true);

        gridLayout->addWidget(NAND_DedicatedPatternTest, 0, 0, 1, 1);


        verticalLayout->addWidget(NAND_FLASH_TEST);

        EMMC_FLASH_TEST = new QGroupBox(groupBox);
        EMMC_FLASH_TEST->setObjectName(QString::fromUtf8("EMMC_FLASH_TEST"));
        EMMC_FLASH_TEST->setMaximumSize(QSize(16777215, 16777215));
        EMMC_FLASH_TEST->setCheckable(true);
        EMMC_FLASH_TEST->setChecked(false);
        gridLayout_2 = new QGridLayout(EMMC_FLASH_TEST);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        EMMC_DedicatedPatternTest = new QCheckBox(EMMC_FLASH_TEST);
        EMMC_DedicatedPatternTest->setObjectName(QString::fromUtf8("EMMC_DedicatedPatternTest"));
        EMMC_DedicatedPatternTest->setChecked(true);

        gridLayout_2->addWidget(EMMC_DedicatedPatternTest, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_region = new QLabel(EMMC_FLASH_TEST);
        label_region->setObjectName(QString::fromUtf8("label_region"));
        sizePolicy.setHeightForWidth(label_region->sizePolicy().hasHeightForWidth());
        label_region->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label_region);

        comboBox_region = new QComboBox(EMMC_FLASH_TEST);
        comboBox_region->setObjectName(QString::fromUtf8("comboBox_region"));

        horizontalLayout_4->addWidget(comboBox_region);


        gridLayout_2->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_address = new QLabel(EMMC_FLASH_TEST);
        label_address->setObjectName(QString::fromUtf8("label_address"));
        sizePolicy.setHeightForWidth(label_address->sizePolicy().hasHeightForWidth());
        label_address->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_address);

        lineEdit_address = new QLineEdit(EMMC_FLASH_TEST);
        lineEdit_address->setObjectName(QString::fromUtf8("lineEdit_address"));

        horizontalLayout_3->addWidget(lineEdit_address);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_length = new QLabel(EMMC_FLASH_TEST);
        label_length->setObjectName(QString::fromUtf8("label_length"));
        sizePolicy.setHeightForWidth(label_length->sizePolicy().hasHeightForWidth());
        label_length->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_length);

        lineEdit_length = new QLineEdit(EMMC_FLASH_TEST);
        lineEdit_length->setObjectName(QString::fromUtf8("lineEdit_length"));

        horizontalLayout->addWidget(lineEdit_length);


        gridLayout_2->addLayout(horizontalLayout, 3, 0, 1, 1);


        verticalLayout->addWidget(EMMC_FLASH_TEST);

        SELECT_ALL = new QPushButton(groupBox);
        SELECT_ALL->setObjectName(QString::fromUtf8("SELECT_ALL"));

        verticalLayout->addWidget(SELECT_ALL);

        verticalSpacer = new QSpacerItem(20, 43, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout_3->addWidget(groupBox, 0, 0, 2, 1);


        retranslateUi(MemoryTestWidget);

        QMetaObject::connectSlotsByName(MemoryTestWidget);
    } // setupUi

    void retranslateUi(QWidget *MemoryTestWidget)
    {
        MemoryTestWidget->setWindowTitle(QCoreApplication::translate("MemoryTestWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_start->setToolTip(QCoreApplication::translate("MemoryTestWidget", "F9", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_start->setText(QCoreApplication::translate("MemoryTestWidget", "Start", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_stop->setToolTip(QCoreApplication::translate("MemoryTestWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_stop->setText(QCoreApplication::translate("MemoryTestWidget", "Stop", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MemoryTestWidget", "Select Memory Test Method", nullptr));
        RAM_TEST->setTitle(QCoreApplication::translate("MemoryTestWidget", "RAM Test", nullptr));
        RAM_DataBusTest->setText(QCoreApplication::translate("MemoryTestWidget", "Data Bus Test", nullptr));
        RAM_AddrBusTest->setText(QCoreApplication::translate("MemoryTestWidget", "Addr Bus Test", nullptr));
        RAM_DedicatedPatternTest->setText(QCoreApplication::translate("MemoryTestWidget", "Dedicated Pattern Test", nullptr));
        RAM_IncDecPatternTest->setText(QCoreApplication::translate("MemoryTestWidget", "Inc/Dec Pattern Test", nullptr));
        DRAM_FLIP_TEST->setTitle(QCoreApplication::translate("MemoryTestWidget", "DRAM Flip Test", nullptr));
        radioButton_dramtest_auto->setText(QCoreApplication::translate("MemoryTestWidget", "Auto", nullptr));
        radioButton_dramtest_manual->setText(QCoreApplication::translate("MemoryTestWidget", "Manual", nullptr));
        label_dramtest_address->setText(QCoreApplication::translate("MemoryTestWidget", "Address:", nullptr));
        lineEdit_dramtest_address->setText(QCoreApplication::translate("MemoryTestWidget", "0x", nullptr));
        label_dramtest_length->setText(QCoreApplication::translate("MemoryTestWidget", "Length:", nullptr));
        lineEdit_dramtest_length->setText(QCoreApplication::translate("MemoryTestWidget", "0x", nullptr));
        label_dramtest_stresscount->setText(QCoreApplication::translate("MemoryTestWidget", "Stress Test Count", nullptr));
        lineEdit_dramtest_stresscount->setText(QCoreApplication::translate("MemoryTestWidget", "1", nullptr));
        NAND_FLASH_TEST->setTitle(QCoreApplication::translate("MemoryTestWidget", "NAND Flash Test", nullptr));
        NAND_DedicatedPatternTest->setText(QCoreApplication::translate("MemoryTestWidget", "Dedicated Pattern Test", nullptr));
        EMMC_FLASH_TEST->setTitle(QCoreApplication::translate("MemoryTestWidget", "EMMC Test", nullptr));
        EMMC_DedicatedPatternTest->setText(QCoreApplication::translate("MemoryTestWidget", "Dedicated Pattern Test", nullptr));
        label_region->setText(QCoreApplication::translate("MemoryTestWidget", "Region:  ", nullptr));
        label_address->setText(QCoreApplication::translate("MemoryTestWidget", "Address:", nullptr));
        label_length->setText(QCoreApplication::translate("MemoryTestWidget", "Length:  ", nullptr));
        SELECT_ALL->setText(QCoreApplication::translate("MemoryTestWidget", "Select All", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemoryTestWidget: public Ui_MemoryTestWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMORYTESTWIDGET_H
