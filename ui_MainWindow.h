/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionConsole_Mode;
    QAction *actionBackup_Restore_No_Action;
    QAction *actionBackup_Format_Download_Restore_NVRAM;
    QAction *actionFormat_Download_Restore_NVRAM;
    QAction *actionRestore_NVRAM_Only;
    QAction *actionUse_Chip_ID_as_Backup_Folder_Name;
    QAction *actionUse_COM_Port_as_Backup_Folder_Name;
    QAction *actionWrite_IMEI_No_Action;
    QAction *actionDownload_Write_IMEI_BT_WiFi;
    QAction *actionFormat_Download_Write_IMEI_BT_WiFi;
    QAction *actionEMI_and_NFI_config;
    QAction *actionUSB_UART_options;
    QAction *actionExportFormat;
    QAction *actionExportDownload;
    QAction *actionExportPartial_Format_Download;
    QAction *actionOpen_Logs_Folder;
    QAction *actionPhysical_Format;
    QAction *actionParameter_Page;
    QAction *actionWrite_Memory;
    QAction *action_SoftwareUpdate;
    QAction *actionReadback;
    QAction *actionContents;
    QAction *actionIndex;
    QAction *actionShow_Welcome;
    QAction *actionCerfitication_download;
    QAction *actionExportWriteMemory;
    QAction *actionSecurity_Mode;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QFrame *statusFrame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QProgressBar *progressBar;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_SpeedInfo;
    QLabel *label_total;
    QLabel *label_COMPortInfo;
    QLabel *label_storage;
    QLabel *label_usbStatus;
    QLabel *label_time;
    QLabel *label_status_port;
    QFrame *frame_status;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_hd;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *ImageLabel;
    QSpacerItem *verticalSpacer;
    QToolBox *toolBox_status;
    QWidget *page;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuExport_Console_Mode_XML;
    QMenu *menuOptions;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1025, 643);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/application.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        MainWindow->setDocumentMode(false);
        MainWindow->setTabShape(QTabWidget::Rounded);
        MainWindow->setDockNestingEnabled(false);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setEnabled(true);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout->setEnabled(true);
        actionAbout->setVisible(true);
        actionConsole_Mode = new QAction(MainWindow);
        actionConsole_Mode->setObjectName(QString::fromUtf8("actionConsole_Mode"));
        actionConsole_Mode->setEnabled(true);
        actionConsole_Mode->setVisible(true);
        actionBackup_Restore_No_Action = new QAction(MainWindow);
        actionBackup_Restore_No_Action->setObjectName(QString::fromUtf8("actionBackup_Restore_No_Action"));
        actionBackup_Restore_No_Action->setCheckable(true);
        actionBackup_Format_Download_Restore_NVRAM = new QAction(MainWindow);
        actionBackup_Format_Download_Restore_NVRAM->setObjectName(QString::fromUtf8("actionBackup_Format_Download_Restore_NVRAM"));
        actionBackup_Format_Download_Restore_NVRAM->setCheckable(true);
        actionFormat_Download_Restore_NVRAM = new QAction(MainWindow);
        actionFormat_Download_Restore_NVRAM->setObjectName(QString::fromUtf8("actionFormat_Download_Restore_NVRAM"));
        actionFormat_Download_Restore_NVRAM->setCheckable(true);
        actionRestore_NVRAM_Only = new QAction(MainWindow);
        actionRestore_NVRAM_Only->setObjectName(QString::fromUtf8("actionRestore_NVRAM_Only"));
        actionRestore_NVRAM_Only->setCheckable(true);
        actionUse_Chip_ID_as_Backup_Folder_Name = new QAction(MainWindow);
        actionUse_Chip_ID_as_Backup_Folder_Name->setObjectName(QString::fromUtf8("actionUse_Chip_ID_as_Backup_Folder_Name"));
        actionUse_Chip_ID_as_Backup_Folder_Name->setCheckable(true);
        actionUse_COM_Port_as_Backup_Folder_Name = new QAction(MainWindow);
        actionUse_COM_Port_as_Backup_Folder_Name->setObjectName(QString::fromUtf8("actionUse_COM_Port_as_Backup_Folder_Name"));
        actionUse_COM_Port_as_Backup_Folder_Name->setCheckable(true);
        actionWrite_IMEI_No_Action = new QAction(MainWindow);
        actionWrite_IMEI_No_Action->setObjectName(QString::fromUtf8("actionWrite_IMEI_No_Action"));
        actionWrite_IMEI_No_Action->setCheckable(true);
        actionWrite_IMEI_No_Action->setChecked(true);
        actionDownload_Write_IMEI_BT_WiFi = new QAction(MainWindow);
        actionDownload_Write_IMEI_BT_WiFi->setObjectName(QString::fromUtf8("actionDownload_Write_IMEI_BT_WiFi"));
        actionDownload_Write_IMEI_BT_WiFi->setCheckable(true);
        actionFormat_Download_Write_IMEI_BT_WiFi = new QAction(MainWindow);
        actionFormat_Download_Write_IMEI_BT_WiFi->setObjectName(QString::fromUtf8("actionFormat_Download_Write_IMEI_BT_WiFi"));
        actionFormat_Download_Write_IMEI_BT_WiFi->setCheckable(true);
        actionEMI_and_NFI_config = new QAction(MainWindow);
        actionEMI_and_NFI_config->setObjectName(QString::fromUtf8("actionEMI_and_NFI_config"));
        actionUSB_UART_options = new QAction(MainWindow);
        actionUSB_UART_options->setObjectName(QString::fromUtf8("actionUSB_UART_options"));
        actionExportFormat = new QAction(MainWindow);
        actionExportFormat->setObjectName(QString::fromUtf8("actionExportFormat"));
        actionExportDownload = new QAction(MainWindow);
        actionExportDownload->setObjectName(QString::fromUtf8("actionExportDownload"));
        actionExportPartial_Format_Download = new QAction(MainWindow);
        actionExportPartial_Format_Download->setObjectName(QString::fromUtf8("actionExportPartial_Format_Download"));
        actionOpen_Logs_Folder = new QAction(MainWindow);
        actionOpen_Logs_Folder->setObjectName(QString::fromUtf8("actionOpen_Logs_Folder"));
        actionPhysical_Format = new QAction(MainWindow);
        actionPhysical_Format->setObjectName(QString::fromUtf8("actionPhysical_Format"));
        actionPhysical_Format->setCheckable(true);
        actionParameter_Page = new QAction(MainWindow);
        actionParameter_Page->setObjectName(QString::fromUtf8("actionParameter_Page"));
        actionParameter_Page->setCheckable(true);
        actionWrite_Memory = new QAction(MainWindow);
        actionWrite_Memory->setObjectName(QString::fromUtf8("actionWrite_Memory"));
        actionWrite_Memory->setCheckable(true);
        action_SoftwareUpdate = new QAction(MainWindow);
        action_SoftwareUpdate->setObjectName(QString::fromUtf8("action_SoftwareUpdate"));
        actionReadback = new QAction(MainWindow);
        actionReadback->setObjectName(QString::fromUtf8("actionReadback"));
        actionContents = new QAction(MainWindow);
        actionContents->setObjectName(QString::fromUtf8("actionContents"));
        actionIndex = new QAction(MainWindow);
        actionIndex->setObjectName(QString::fromUtf8("actionIndex"));
        actionShow_Welcome = new QAction(MainWindow);
        actionShow_Welcome->setObjectName(QString::fromUtf8("actionShow_Welcome"));
        actionCerfitication_download = new QAction(MainWindow);
        actionCerfitication_download->setObjectName(QString::fromUtf8("actionCerfitication_download"));
        actionExportWriteMemory = new QAction(MainWindow);
        actionExportWriteMemory->setObjectName(QString::fromUtf8("actionExportWriteMemory"));
        actionExportWriteMemory->setVisible(false);
        actionSecurity_Mode = new QAction(MainWindow);
        actionSecurity_Mode->setObjectName(QString::fromUtf8("actionSecurity_Mode"));
        actionSecurity_Mode->setCheckable(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setEnabled(true);
        centralWidget->setStyleSheet(QString::fromUtf8("alternate-background-color: rgb(85, 170, 127);"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tabWidget->setMinimumSize(QSize(0, 529));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(true);
        tabWidget->setMovable(true);

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);

        statusFrame = new QFrame(centralWidget);
        statusFrame->setObjectName(QString::fromUtf8("statusFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusFrame->sizePolicy().hasHeightForWidth());
        statusFrame->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(statusFrame);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_3 = new QFrame(statusFrame);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::Panel);
        frame_3->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        progressBar = new QProgressBar(frame_3);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        sizePolicy1.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy1);
        progressBar->setMinimumSize(QSize(0, 17));
        progressBar->setMaximumSize(QSize(16777215, 17));
        QPalette palette;
        QBrush brush(QColor(85, 170, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        QBrush brush1(QColor(85, 170, 127, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        progressBar->setPalette(palette);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        progressBar->setFont(font);
        progressBar->setAutoFillBackground(false);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar { border-radius: 0px;text-align: center}"));
        progressBar->setValue(0);
        progressBar->setAlignment(Qt::AlignCenter);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::BottomToTop);

        gridLayout->addWidget(progressBar, 0, 0, 1, 1);


        verticalLayout->addWidget(frame_3);

        frame = new QFrame(statusFrame);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(true);
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Sunken);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_SpeedInfo = new QLabel(frame);
        label_SpeedInfo->setObjectName(QString::fromUtf8("label_SpeedInfo"));
        label_SpeedInfo->setMinimumSize(QSize(100, 0));
        label_SpeedInfo->setMaximumSize(QSize(100, 16777215));
        label_SpeedInfo->setLayoutDirection(Qt::LeftToRight);
        label_SpeedInfo->setFrameShape(QFrame::Panel);
        label_SpeedInfo->setFrameShadow(QFrame::Sunken);
        label_SpeedInfo->setLineWidth(1);
        label_SpeedInfo->setMidLineWidth(0);
        label_SpeedInfo->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_SpeedInfo);

        label_total = new QLabel(frame);
        label_total->setObjectName(QString::fromUtf8("label_total"));
        label_total->setMinimumSize(QSize(100, 0));
        label_total->setMaximumSize(QSize(100, 16777215));
        label_total->setFrameShape(QFrame::Panel);
        label_total->setFrameShadow(QFrame::Sunken);
        label_total->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_total);

        label_COMPortInfo = new QLabel(frame);
        label_COMPortInfo->setObjectName(QString::fromUtf8("label_COMPortInfo"));
        label_COMPortInfo->setMinimumSize(QSize(60, 0));
        label_COMPortInfo->setMaximumSize(QSize(60, 16777215));
        label_COMPortInfo->setFrameShape(QFrame::Panel);
        label_COMPortInfo->setFrameShadow(QFrame::Sunken);
        label_COMPortInfo->setLineWidth(1);
        label_COMPortInfo->setMidLineWidth(0);
        label_COMPortInfo->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_COMPortInfo);

        label_storage = new QLabel(frame);
        label_storage->setObjectName(QString::fromUtf8("label_storage"));
        label_storage->setMinimumSize(QSize(50, 0));
        label_storage->setMaximumSize(QSize(50, 16777215));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setWeight(75);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferDefault);
        label_storage->setFont(font1);
        label_storage->setFrameShape(QFrame::Panel);
        label_storage->setFrameShadow(QFrame::Sunken);
        label_storage->setLineWidth(1);
        label_storage->setMidLineWidth(0);
        label_storage->setTextFormat(Qt::PlainText);
        label_storage->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_storage);

        label_usbStatus = new QLabel(frame);
        label_usbStatus->setObjectName(QString::fromUtf8("label_usbStatus"));
        label_usbStatus->setMinimumSize(QSize(100, 0));
        label_usbStatus->setMaximumSize(QSize(100, 16777215));
        label_usbStatus->setFrameShape(QFrame::Panel);
        label_usbStatus->setFrameShadow(QFrame::Sunken);
        label_usbStatus->setLineWidth(1);
        label_usbStatus->setMidLineWidth(0);
        label_usbStatus->setTextFormat(Qt::PlainText);
        label_usbStatus->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_usbStatus);

        label_time = new QLabel(frame);
        label_time->setObjectName(QString::fromUtf8("label_time"));
        label_time->setMinimumSize(QSize(90, 0));
        label_time->setMaximumSize(QSize(90, 16777215));
        label_time->setFrameShape(QFrame::Panel);
        label_time->setFrameShadow(QFrame::Sunken);
        label_time->setLineWidth(1);
        label_time->setMidLineWidth(0);
        label_time->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_time);

        label_status_port = new QLabel(frame);
        label_status_port->setObjectName(QString::fromUtf8("label_status_port"));
        label_status_port->setFrameShape(QFrame::Panel);
        label_status_port->setFrameShadow(QFrame::Sunken);
        label_status_port->setLineWidth(1);
        label_status_port->setMidLineWidth(0);

        horizontalLayout->addWidget(label_status_port);


        verticalLayout->addWidget(frame);

        frame_status = new QFrame(statusFrame);
        frame_status->setObjectName(QString::fromUtf8("frame_status"));
        frame_status->setFrameShape(QFrame::NoFrame);
        frame_status->setFrameShadow(QFrame::Sunken);
        frame_status->setLineWidth(2);
        frame_status->setMidLineWidth(1);
        horizontalLayout_2 = new QHBoxLayout(frame_status);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));

        verticalLayout->addWidget(frame_status);


        gridLayout_2->addWidget(statusFrame, 1, 1, 1, 1);

        frame_hd = new QFrame(centralWidget);
        frame_hd->setObjectName(QString::fromUtf8("frame_hd"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_hd->sizePolicy().hasHeightForWidth());
        frame_hd->setSizePolicy(sizePolicy2);
        frame_hd->setMinimumSize(QSize(200, 580));
        frame_hd->setMaximumSize(QSize(200, 16777215));
        frame_hd->setStyleSheet(QString::fromUtf8(""));
        frame_hd->setFrameShape(QFrame::StyledPanel);
        frame_hd->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_hd);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 202, 571));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        ImageLabel = new QLabel(layoutWidget);
        ImageLabel->setObjectName(QString::fromUtf8("ImageLabel"));
        ImageLabel->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(ImageLabel->sizePolicy().hasHeightForWidth());
        ImageLabel->setSizePolicy(sizePolicy3);
        ImageLabel->setMinimumSize(QSize(200, 0));
        ImageLabel->setMaximumSize(QSize(200, 360));
        ImageLabel->setPixmap(QPixmap(QString::fromUtf8(":/images/Phone.png")));
        ImageLabel->setScaledContents(true);
        ImageLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(ImageLabel);

        verticalSpacer = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        toolBox_status = new QToolBox(layoutWidget);
        toolBox_status->setObjectName(QString::fromUtf8("toolBox_status"));
        toolBox_status->setFrameShape(QFrame::StyledPanel);
        toolBox_status->setFrameShadow(QFrame::Sunken);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 196, 67));
        toolBox_status->addItem(page, QString::fromUtf8("Page 1"));

        verticalLayout_2->addWidget(toolBox_status);


        gridLayout_2->addWidget(frame_hd, 0, 0, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1025, 18));
        menuBar->setStyleSheet(QString::fromUtf8(""));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport_Console_Mode_XML = new QMenu(menuFile);
        menuExport_Console_Mode_XML->setObjectName(QString::fromUtf8("menuExport_Console_Mode_XML"));
        menuOptions = new QMenu(menuBar);
        menuOptions->setObjectName(QString::fromUtf8("menuOptions"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8(""));
        statusBar->setSizeGripEnabled(false);
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuOptions->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(menuExport_Console_Mode_XML->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport_Console_Mode_XML->addAction(actionExportFormat);
        menuExport_Console_Mode_XML->addAction(actionExportDownload);
        menuExport_Console_Mode_XML->addAction(actionExportPartial_Format_Download);
        menuExport_Console_Mode_XML->addSeparator();
        menuExport_Console_Mode_XML->addAction(actionReadback);
        menuExport_Console_Mode_XML->addAction(actionExportWriteMemory);
        menuExport_Console_Mode_XML->addSeparator();
        menuExport_Console_Mode_XML->addAction(actionCerfitication_download);
        menuOptions->addSeparator();
        menuOptions->addAction(actionUSB_UART_options);
        menuWindow->addAction(actionParameter_Page);
        menuWindow->addAction(actionWrite_Memory);
        menuWindow->addAction(actionSecurity_Mode);
        menuHelp->addAction(actionShow_Welcome);
        menuHelp->addSeparator();
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionIndex);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout);
        menuHelp->addAction(action_SoftwareUpdate);
        menuHelp->addSeparator();
        menuHelp->addAction(actionOpen_Logs_Folder);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(-1);
        toolBox_status->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Smart Phone Flash Tool", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About...", nullptr));
        actionConsole_Mode->setText(QCoreApplication::translate("MainWindow", "Console Mode", nullptr));
#if QT_CONFIG(shortcut)
        actionConsole_Mode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionBackup_Restore_No_Action->setText(QCoreApplication::translate("MainWindow", "No Action", nullptr));
        actionBackup_Format_Download_Restore_NVRAM->setText(QCoreApplication::translate("MainWindow", "Backup->Format->Download->Restore NVRAM", nullptr));
        actionFormat_Download_Restore_NVRAM->setText(QCoreApplication::translate("MainWindow", "Format->Download->Restore NVRAM", nullptr));
        actionRestore_NVRAM_Only->setText(QCoreApplication::translate("MainWindow", "Restore NVRAM Only", nullptr));
        actionUse_Chip_ID_as_Backup_Folder_Name->setText(QCoreApplication::translate("MainWindow", "Use Chip ID as Backup Folder Name", nullptr));
        actionUse_COM_Port_as_Backup_Folder_Name->setText(QCoreApplication::translate("MainWindow", "Use COM Port as Backup Folder Name", nullptr));
        actionWrite_IMEI_No_Action->setText(QCoreApplication::translate("MainWindow", "No Action", nullptr));
        actionDownload_Write_IMEI_BT_WiFi->setText(QCoreApplication::translate("MainWindow", "Download->Write IMEI/BT/WiFi", nullptr));
        actionFormat_Download_Write_IMEI_BT_WiFi->setText(QCoreApplication::translate("MainWindow", "Format->Download->Write IMEI/BT/WiFi", nullptr));
        actionEMI_and_NFI_config->setText(QCoreApplication::translate("MainWindow", "EMI and NFI config...", nullptr));
        actionUSB_UART_options->setText(QCoreApplication::translate("MainWindow", "Option...", nullptr));
        actionExportFormat->setText(QCoreApplication::translate("MainWindow", "Format...", nullptr));
        actionExportDownload->setText(QCoreApplication::translate("MainWindow", "Download...", nullptr));
        actionExportPartial_Format_Download->setText(QCoreApplication::translate("MainWindow", "Partial Format+Download...", nullptr));
        actionOpen_Logs_Folder->setText(QCoreApplication::translate("MainWindow", "Open Logs Folder", nullptr));
        actionPhysical_Format->setText(QCoreApplication::translate("MainWindow", "Physical Format", nullptr));
        actionParameter_Page->setText(QCoreApplication::translate("MainWindow", "Parameter Page", nullptr));
        actionWrite_Memory->setText(QCoreApplication::translate("MainWindow", "Write Memory", nullptr));
        action_SoftwareUpdate->setText(QCoreApplication::translate("MainWindow", "Software Update...", nullptr));
        actionReadback->setText(QCoreApplication::translate("MainWindow", "Readback...", nullptr));
        actionContents->setText(QCoreApplication::translate("MainWindow", "Contents", nullptr));
        actionIndex->setText(QCoreApplication::translate("MainWindow", "Index", nullptr));
        actionCerfitication_download->setText(QCoreApplication::translate("MainWindow", "Cerfitication download...", nullptr));
#if QT_CONFIG(tooltip)
        actionCerfitication_download->setToolTip(QCoreApplication::translate("MainWindow", "Cerfitication download", nullptr));
#endif // QT_CONFIG(tooltip)
        actionExportWriteMemory->setText(QCoreApplication::translate("MainWindow", "Write Memory", nullptr));
        actionSecurity_Mode->setText(QCoreApplication::translate("MainWindow", "Security Mode", nullptr));
#if QT_CONFIG(tooltip)
        tabWidget->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        progressBar->setFormat(QCoreApplication::translate("MainWindow", "%p%", nullptr));
        label_SpeedInfo->setText(QCoreApplication::translate("MainWindow", "0 B/s", nullptr));
        label_total->setText(QCoreApplication::translate("MainWindow", "0 Bytes", nullptr));
        label_COMPortInfo->setText(QString());
        label_storage->setText(QString());
#if QT_CONFIG(tooltip)
        label_usbStatus->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_usbStatus->setText(QString());
        label_time->setText(QCoreApplication::translate("MainWindow", "0:00", nullptr));
        label_status_port->setText(QString());
        ImageLabel->setText(QString());
        toolBox_status->setItemText(toolBox_status->indexOf(page), QCoreApplication::translate("MainWindow", "Page 1", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuExport_Console_Mode_XML->setTitle(QCoreApplication::translate("MainWindow", "Export Console Mode XML", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("MainWindow", "&Options", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("MainWindow", "&Window", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
