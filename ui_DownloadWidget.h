/********************************************************************************
** Form generated from reading UI file 'DownloadWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADWIDGET_H
#define UI_DOWNLOADWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadWidget
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame_3;
    QGridLayout *gridLayout_3;
    QToolButton *pushButton_download;
    QToolButton *pushButton_stop;
    QSpacerItem *horizontalSpacer;
    QToolButton *toolButton_Certification;
    QFrame *FileLoadFrame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_downloadAgent;
    QLabel *label_scatterLoading;
    QLabel *label_authFile;
    QLabel *label_certFile;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_agentFilePath;
    QComboBox *comboBox_scatterFilePath;
    QComboBox *comboBox_authFilePath;
    QLineEdit *lineEdit_certFilePath;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_downloadAgent;
    QPushButton *pushButton_scatterLoading;
    QPushButton *pushButton_authFile;
    QPushButton *pushButton_CertFile;
    QHBoxLayout *horizontalLayout_2;
    QComboBox *comboBox_Scene;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QTableWidget *downloadTableWidget;
    QGroupBox *groupBox_boot_mode_flag;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *checkbox_set_boot_mode_to_meta;
    QGroupBox *groupBox_com_type;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *com_type_usb;
    QRadioButton *com_type_uart;
    QRadioButton *com_type_wifi;
    QGroupBox *groupBox_com_id;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QCheckBox *checkbox_mobile_log_on;
    QCheckBox *checkbox_adb_on;

    void setupUi(QWidget *DownloadWidget)
    {
        if (DownloadWidget->objectName().isEmpty())
            DownloadWidget->setObjectName(QString::fromUtf8("DownloadWidget"));
        DownloadWidget->resize(681, 597);
        gridLayout_2 = new QGridLayout(DownloadWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_3 = new QFrame(DownloadWidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_3);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_download = new QToolButton(frame_3);
        pushButton_download->setObjectName(QString::fromUtf8("pushButton_download"));
        pushButton_download->setEnabled(true);
        pushButton_download->setMinimumSize(QSize(110, 0));
        pushButton_download->setStyleSheet(QString::fromUtf8("border-width:2px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_download->setIcon(icon);
        pushButton_download->setIconSize(QSize(24, 24));
        pushButton_download->setPopupMode(QToolButton::DelayedPopup);
        pushButton_download->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_download->setAutoRaise(true);

        gridLayout_3->addWidget(pushButton_download, 2, 0, 1, 1);

        pushButton_stop = new QToolButton(frame_3);
        pushButton_stop->setObjectName(QString::fromUtf8("pushButton_stop"));
        pushButton_stop->setEnabled(false);
        pushButton_stop->setMinimumSize(QSize(110, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_stop->setIcon(icon1);
        pushButton_stop->setIconSize(QSize(24, 24));
        pushButton_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_stop->setAutoRaise(true);

        gridLayout_3->addWidget(pushButton_stop, 2, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 2, 3, 1, 1);

        toolButton_Certification = new QToolButton(frame_3);
        toolButton_Certification->setObjectName(QString::fromUtf8("toolButton_Certification"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolButton_Certification->sizePolicy().hasHeightForWidth());
        toolButton_Certification->setSizePolicy(sizePolicy);
        toolButton_Certification->setMinimumSize(QSize(110, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/start.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_Certification->setIcon(icon2);
        toolButton_Certification->setIconSize(QSize(24, 24));
        toolButton_Certification->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_Certification->setAutoRaise(true);

        gridLayout_3->addWidget(toolButton_Certification, 2, 1, 1, 1);


        gridLayout_2->addWidget(frame_3, 0, 0, 1, 1);

        FileLoadFrame = new QFrame(DownloadWidget);
        FileLoadFrame->setObjectName(QString::fromUtf8("FileLoadFrame"));
        FileLoadFrame->setEnabled(true);
        FileLoadFrame->setFrameShape(QFrame::Box);
        FileLoadFrame->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(FileLoadFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_downloadAgent = new QLabel(FileLoadFrame);
        label_downloadAgent->setObjectName(QString::fromUtf8("label_downloadAgent"));

        verticalLayout_3->addWidget(label_downloadAgent);

        label_scatterLoading = new QLabel(FileLoadFrame);
        label_scatterLoading->setObjectName(QString::fromUtf8("label_scatterLoading"));

        verticalLayout_3->addWidget(label_scatterLoading);

        label_authFile = new QLabel(FileLoadFrame);
        label_authFile->setObjectName(QString::fromUtf8("label_authFile"));

        verticalLayout_3->addWidget(label_authFile);

        label_certFile = new QLabel(FileLoadFrame);
        label_certFile->setObjectName(QString::fromUtf8("label_certFile"));

        verticalLayout_3->addWidget(label_certFile);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_agentFilePath = new QLineEdit(FileLoadFrame);
        lineEdit_agentFilePath->setObjectName(QString::fromUtf8("lineEdit_agentFilePath"));
        lineEdit_agentFilePath->setEnabled(true);
        lineEdit_agentFilePath->setAcceptDrops(false);
        lineEdit_agentFilePath->setStyleSheet(QString::fromUtf8(""));
        lineEdit_agentFilePath->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_agentFilePath);

        comboBox_scatterFilePath = new QComboBox(FileLoadFrame);
        comboBox_scatterFilePath->setObjectName(QString::fromUtf8("comboBox_scatterFilePath"));
        comboBox_scatterFilePath->setAcceptDrops(false);
        comboBox_scatterFilePath->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"color: rgb(0, 0, 0);\n"
"border-radius: 3px;\n"
"margin:0 0 0 0;"));
        comboBox_scatterFilePath->setEditable(false);
        comboBox_scatterFilePath->setMaxCount(10);
        comboBox_scatterFilePath->setInsertPolicy(QComboBox::InsertAtTop);

        verticalLayout_2->addWidget(comboBox_scatterFilePath);

        comboBox_authFilePath = new QComboBox(FileLoadFrame);
        comboBox_authFilePath->setObjectName(QString::fromUtf8("comboBox_authFilePath"));
        comboBox_authFilePath->setAcceptDrops(false);
        comboBox_authFilePath->setEditable(false);
        comboBox_authFilePath->setMaxCount(10);
        comboBox_authFilePath->setInsertPolicy(QComboBox::InsertAtTop);

        verticalLayout_2->addWidget(comboBox_authFilePath);

        lineEdit_certFilePath = new QLineEdit(FileLoadFrame);
        lineEdit_certFilePath->setObjectName(QString::fromUtf8("lineEdit_certFilePath"));
        lineEdit_certFilePath->setEnabled(true);
        lineEdit_certFilePath->setAcceptDrops(false);
        lineEdit_certFilePath->setReadOnly(true);

        verticalLayout_2->addWidget(lineEdit_certFilePath);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton_downloadAgent = new QPushButton(FileLoadFrame);
        pushButton_downloadAgent->setObjectName(QString::fromUtf8("pushButton_downloadAgent"));
        pushButton_downloadAgent->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-align:left;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_downloadAgent->setIcon(icon3);
        pushButton_downloadAgent->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton_downloadAgent);

        pushButton_scatterLoading = new QPushButton(FileLoadFrame);
        pushButton_scatterLoading->setObjectName(QString::fromUtf8("pushButton_scatterLoading"));
        pushButton_scatterLoading->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-align:left;\n"
"}\n"
""));
        pushButton_scatterLoading->setIcon(icon3);
        pushButton_scatterLoading->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton_scatterLoading);

        pushButton_authFile = new QPushButton(FileLoadFrame);
        pushButton_authFile->setObjectName(QString::fromUtf8("pushButton_authFile"));
        pushButton_authFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-align:left;\n"
"}"));
        pushButton_authFile->setIcon(icon3);
        pushButton_authFile->setIconSize(QSize(20, 20));

        verticalLayout->addWidget(pushButton_authFile);

        pushButton_CertFile = new QPushButton(FileLoadFrame);
        pushButton_CertFile->setObjectName(QString::fromUtf8("pushButton_CertFile"));
        pushButton_CertFile->setEnabled(true);
        pushButton_CertFile->setLayoutDirection(Qt::LeftToRight);
        pushButton_CertFile->setAutoFillBackground(false);
        pushButton_CertFile->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    text-align:left;\n"
"}\n"
""));
        pushButton_CertFile->setIcon(icon3);
        pushButton_CertFile->setIconSize(QSize(20, 20));
        pushButton_CertFile->setAutoExclusive(false);

        verticalLayout->addWidget(pushButton_CertFile);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        comboBox_Scene = new QComboBox(FileLoadFrame);
        comboBox_Scene->setObjectName(QString::fromUtf8("comboBox_Scene"));
        comboBox_Scene->setMinimumSize(QSize(141, 0));
        comboBox_Scene->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));

        horizontalLayout_2->addWidget(comboBox_Scene);

        horizontalSpacer_2 = new QSpacerItem(218, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 3, 0, 1, 1);

        label = new QLabel(FileLoadFrame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        downloadTableWidget = new QTableWidget(FileLoadFrame);
        if (downloadTableWidget->columnCount() < 6)
            downloadTableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        downloadTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        downloadTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        downloadTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        downloadTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        downloadTableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        downloadTableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        downloadTableWidget->setObjectName(QString::fromUtf8("downloadTableWidget"));
        downloadTableWidget->setAcceptDrops(true);
        downloadTableWidget->setAutoFillBackground(false);
        downloadTableWidget->setFrameShape(QFrame::StyledPanel);
        downloadTableWidget->setFrameShadow(QFrame::Sunken);
        downloadTableWidget->setLineWidth(2);
        downloadTableWidget->setMidLineWidth(1);
        downloadTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        downloadTableWidget->setProperty("showDropIndicator", QVariant(true));
        downloadTableWidget->setAlternatingRowColors(true);
        downloadTableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        downloadTableWidget->setWordWrap(false);
        downloadTableWidget->setCornerButtonEnabled(false);
        downloadTableWidget->setRowCount(0);
        downloadTableWidget->setColumnCount(6);
        downloadTableWidget->horizontalHeader()->setVisible(false);
        downloadTableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        downloadTableWidget->horizontalHeader()->setMinimumSectionSize(15);
        downloadTableWidget->horizontalHeader()->setHighlightSections(true);
        downloadTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        downloadTableWidget->horizontalHeader()->setStretchLastSection(true);
        downloadTableWidget->verticalHeader()->setVisible(false);
        downloadTableWidget->verticalHeader()->setMinimumSectionSize(34);
        downloadTableWidget->verticalHeader()->setDefaultSectionSize(23);
        downloadTableWidget->verticalHeader()->setHighlightSections(false);
        downloadTableWidget->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(downloadTableWidget, 4, 0, 1, 1);

        groupBox_boot_mode_flag = new QGroupBox(FileLoadFrame);
        groupBox_boot_mode_flag->setObjectName(QString::fromUtf8("groupBox_boot_mode_flag"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_boot_mode_flag->sizePolicy().hasHeightForWidth());
        groupBox_boot_mode_flag->setSizePolicy(sizePolicy1);
        groupBox_boot_mode_flag->setMaximumSize(QSize(16777215, 60));
        horizontalLayoutWidget = new QWidget(groupBox_boot_mode_flag);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 10, 631, 52));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        checkbox_set_boot_mode_to_meta = new QCheckBox(horizontalLayoutWidget);
        checkbox_set_boot_mode_to_meta->setObjectName(QString::fromUtf8("checkbox_set_boot_mode_to_meta"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(checkbox_set_boot_mode_to_meta->sizePolicy().hasHeightForWidth());
        checkbox_set_boot_mode_to_meta->setSizePolicy(sizePolicy2);
        checkbox_set_boot_mode_to_meta->setBaseSize(QSize(0, 0));

        horizontalLayout_3->addWidget(checkbox_set_boot_mode_to_meta);

        groupBox_com_type = new QGroupBox(horizontalLayoutWidget);
        groupBox_com_type->setObjectName(QString::fromUtf8("groupBox_com_type"));
        groupBox_com_type->setEnabled(false);
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_com_type->sizePolicy().hasHeightForWidth());
        groupBox_com_type->setSizePolicy(sizePolicy3);
        groupBox_com_type->setMinimumSize(QSize(0, 45));
        groupBox_com_type->setCheckable(false);
        horizontalLayoutWidget_2 = new QWidget(groupBox_com_type);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(0, 10, 191, 31));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        com_type_usb = new QRadioButton(horizontalLayoutWidget_2);
        com_type_usb->setObjectName(QString::fromUtf8("com_type_usb"));
        sizePolicy.setHeightForWidth(com_type_usb->sizePolicy().hasHeightForWidth());
        com_type_usb->setSizePolicy(sizePolicy);
        com_type_usb->setMinimumSize(QSize(10, 0));
        com_type_usb->setMaximumSize(QSize(16777215, 16777215));
        com_type_usb->setChecked(true);

        horizontalLayout_4->addWidget(com_type_usb);

        com_type_uart = new QRadioButton(horizontalLayoutWidget_2);
        com_type_uart->setObjectName(QString::fromUtf8("com_type_uart"));
        sizePolicy.setHeightForWidth(com_type_uart->sizePolicy().hasHeightForWidth());
        com_type_uart->setSizePolicy(sizePolicy);
        com_type_uart->setMinimumSize(QSize(10, 0));
        com_type_uart->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_4->addWidget(com_type_uart);

        com_type_wifi = new QRadioButton(horizontalLayoutWidget_2);
        com_type_wifi->setObjectName(QString::fromUtf8("com_type_wifi"));
        sizePolicy.setHeightForWidth(com_type_wifi->sizePolicy().hasHeightForWidth());
        com_type_wifi->setSizePolicy(sizePolicy);
        com_type_wifi->setMinimumSize(QSize(10, 0));
        com_type_wifi->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_4->addWidget(com_type_wifi);


        horizontalLayout_3->addWidget(groupBox_com_type);

        groupBox_com_id = new QGroupBox(horizontalLayoutWidget);
        groupBox_com_id->setObjectName(QString::fromUtf8("groupBox_com_id"));
        groupBox_com_id->setEnabled(false);
        sizePolicy3.setHeightForWidth(groupBox_com_id->sizePolicy().hasHeightForWidth());
        groupBox_com_id->setSizePolicy(sizePolicy3);
        groupBox_com_id->setMinimumSize(QSize(0, 45));
        horizontalLayoutWidget_3 = new QWidget(groupBox_com_id);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(0, 10, 194, 31));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        checkbox_mobile_log_on = new QCheckBox(horizontalLayoutWidget_3);
        checkbox_mobile_log_on->setObjectName(QString::fromUtf8("checkbox_mobile_log_on"));
        sizePolicy3.setHeightForWidth(checkbox_mobile_log_on->sizePolicy().hasHeightForWidth());
        checkbox_mobile_log_on->setSizePolicy(sizePolicy3);
        checkbox_mobile_log_on->setMinimumSize(QSize(80, 0));
        checkbox_mobile_log_on->setChecked(true);

        horizontalLayout_5->addWidget(checkbox_mobile_log_on);

        checkbox_adb_on = new QCheckBox(horizontalLayoutWidget_3);
        checkbox_adb_on->setObjectName(QString::fromUtf8("checkbox_adb_on"));
        sizePolicy3.setHeightForWidth(checkbox_adb_on->sizePolicy().hasHeightForWidth());
        checkbox_adb_on->setSizePolicy(sizePolicy3);

        horizontalLayout_5->addWidget(checkbox_adb_on);


        horizontalLayout_3->addWidget(groupBox_com_id);


        gridLayout->addWidget(groupBox_boot_mode_flag, 1, 0, 1, 2);


        gridLayout_2->addWidget(FileLoadFrame, 1, 0, 1, 1);


        retranslateUi(DownloadWidget);

        comboBox_Scene->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(DownloadWidget);
    } // setupUi

    void retranslateUi(QWidget *DownloadWidget)
    {
        DownloadWidget->setWindowTitle(QCoreApplication::translate("DownloadWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_download->setToolTip(QCoreApplication::translate("DownloadWidget", "Ctrl + D", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_download->setText(QCoreApplication::translate("DownloadWidget", "Download", nullptr));
#if QT_CONFIG(shortcut)
        pushButton_download->setShortcut(QString());
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        pushButton_stop->setToolTip(QCoreApplication::translate("DownloadWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_stop->setText(QCoreApplication::translate("DownloadWidget", "Stop", nullptr));
        toolButton_Certification->setText(QCoreApplication::translate("DownloadWidget", "DL Certification", nullptr));
#if QT_CONFIG(shortcut)
        toolButton_Certification->setShortcut(QCoreApplication::translate("DownloadWidget", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        label_downloadAgent->setText(QCoreApplication::translate("DownloadWidget", "Download-Agent    ", nullptr));
        label_scatterLoading->setText(QCoreApplication::translate("DownloadWidget", "Scatter-loading File", nullptr));
#if QT_CONFIG(tooltip)
        label_authFile->setToolTip(QCoreApplication::translate("DownloadWidget", "Only used for security download", nullptr));
#endif // QT_CONFIG(tooltip)
        label_authFile->setText(QCoreApplication::translate("DownloadWidget", "Authentication File", nullptr));
        label_certFile->setText(QCoreApplication::translate("DownloadWidget", "Certification File", nullptr));
        lineEdit_agentFilePath->setText(QString());
#if QT_CONFIG(whatsthis)
        comboBox_authFilePath->setWhatsThis(QCoreApplication::translate("DownloadWidget", "Optional: Only used for security download", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton_downloadAgent->setText(QCoreApplication::translate("DownloadWidget", "choose", nullptr));
        pushButton_scatterLoading->setText(QCoreApplication::translate("DownloadWidget", "choose", nullptr));
        pushButton_authFile->setText(QCoreApplication::translate("DownloadWidget", "choose", nullptr));
        pushButton_CertFile->setText(QCoreApplication::translate("DownloadWidget", "choose", nullptr));
        label->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = downloadTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DownloadWidget", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = downloadTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DownloadWidget", "Begin Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = downloadTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DownloadWidget", "End Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = downloadTableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DownloadWidget", "Region", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = downloadTableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DownloadWidget", "Location", nullptr));
        groupBox_boot_mode_flag->setTitle(QCoreApplication::translate("DownloadWidget", "Boot mode flag", nullptr));
        checkbox_set_boot_mode_to_meta->setText(QCoreApplication::translate("DownloadWidget", "Boot to META after download", nullptr));
        groupBox_com_type->setTitle(QCoreApplication::translate("DownloadWidget", "com type", nullptr));
        com_type_usb->setText(QCoreApplication::translate("DownloadWidget", "USB", nullptr));
        com_type_uart->setText(QCoreApplication::translate("DownloadWidget", "UART", nullptr));
        com_type_wifi->setText(QCoreApplication::translate("DownloadWidget", "WIFI", nullptr));
        groupBox_com_id->setTitle(QCoreApplication::translate("DownloadWidget", "com id", nullptr));
        checkbox_mobile_log_on->setText(QCoreApplication::translate("DownloadWidget", "mobile log on", nullptr));
        checkbox_adb_on->setText(QCoreApplication::translate("DownloadWidget", "adb on", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadWidget: public Ui_DownloadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADWIDGET_H
