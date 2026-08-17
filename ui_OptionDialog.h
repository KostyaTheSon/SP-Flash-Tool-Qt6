/********************************************************************************
** Form generated from reading UI file 'OptionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONDIALOG_H
#define UI_OPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
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
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionDialog
{
public:
    QGridLayout *gridLayout_8;
    QSplitter *splitter;
    QTreeWidget *treeWidget;
    QStackedWidget *stackedWidget_view;
    QWidget *page_General;
    QLabel *label_21;
    QFrame *line_10;
    QCheckBox *checkBox_ShowWelcome;
    QWidget *page_Appearance;
    QLabel *label_4;
    QFrame *line;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *comboBoxTheme;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_qssFile;
    QLineEdit *lineEdit_qssFilePath;
    QPushButton *pushButton_loadQssFile;
    QWidget *page_Keys;
    QLabel *label_7;
    QFrame *line_2;
    QLabel *label_commandName;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_6;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_keyName;
    QLineEdit *lineEdit_commandName;
    QLabel *label_description;
    QLineEdit *lineEdit_KeyDescription;
    QLabel *label_keyBind;
    QLineEdit *lineEdit_binding;
    QLabel *label_newKeys;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBox_KeyModify;
    QLabel *label_add;
    QComboBox *comboBox_key;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_Language;
    QLabel *label_11;
    QFrame *line_3;
    QComboBox *comboBox_Language;
    QWidget *page_StartupandShutdown;
    QLabel *label_12;
    QFrame *line_4;
    QCheckBox *checkBox_RestoreStartup;
    QWidget *page_Tracing;
    QLabel *label_13;
    QFrame *line_5;
    QWidget *layoutWidget2;
    QGridLayout *gridLayout_10;
    QCheckBox *checkBox_enableTracing;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_9;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_14;
    QLineEdit *lineEdit_logPath;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_15;
    QComboBox *comboBox__LogDate;
    QGroupBox *groupBox_DA_log;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_da_log_level;
    QLabel *label_DA_log_level;
    QComboBox *comboBox_da_log_level;
    QWidget *page_Conn;
    QGridLayout *gridLayout_14;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_uartusb;
    QGridLayout *gridLayout_12;
    QFrame *frameUART;
    QGridLayout *gridLayout;
    QRadioButton *radioUART;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_3;
    QComboBox *comboPort;
    QComboBox *comboRate;
    QFrame *frame;
    QGridLayout *gridLayout_15;
    QRadioButton *radioUSB;
    QHBoxLayout *horizontalLayout_7;
    QGroupBox *groupBox_speed;
    QRadioButton *radioSpeedHigh;
    QRadioButton *radioSpeedFull;
    QGroupBox *groupBox_battery;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButton_WithBattery;
    QRadioButton *radioButton_WithoutBattery;
    QRadioButton *radioButton_Autodetect;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_Timeout;
    QComboBox *comboTimeout;
    QLabel *label_min;
    QSpacerItem *verticalSpacer;
    QLabel *label_16;
    QFrame *line_6;
    QWidget *page_Download;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QFrame *line_8;
    QLabel *label__DownloadSetting;
    QFrame *frame_DAchksum;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBox_usbchksum;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_emmcchksum;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_physicalFormat;
    QSpacerItem *horizontalSpacer_3;
    QGroupBox *groupBox_rpmb_setting;
    QCheckBox *checkBox_rpmb;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_Update;
    QLabel *label_20;
    QFrame *line_9;
    QCheckBox *checkBox;

    void setupUi(QDialog *OptionDialog)
    {
        if (OptionDialog->objectName().isEmpty())
            OptionDialog->setObjectName(QString::fromUtf8("OptionDialog"));
        OptionDialog->setWindowModality(Qt::ApplicationModal);
        OptionDialog->resize(751, 595);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(OptionDialog->sizePolicy().hasHeightForWidth());
        OptionDialog->setSizePolicy(sizePolicy);
        gridLayout_8 = new QGridLayout(OptionDialog);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        splitter = new QSplitter(OptionDialog);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        treeWidget = new QTreeWidget(splitter);
        treeWidget->headerItem()->setText(0, QString());
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeWidget->sizePolicy().hasHeightForWidth());
        treeWidget->setSizePolicy(sizePolicy1);
        treeWidget->setMinimumSize(QSize(100, 0));
        treeWidget->setMaximumSize(QSize(270, 16777215));
        treeWidget->setRootIsDecorated(true);
        splitter->addWidget(treeWidget);
        treeWidget->header()->setVisible(false);
        stackedWidget_view = new QStackedWidget(splitter);
        stackedWidget_view->setObjectName(QString::fromUtf8("stackedWidget_view"));
        sizePolicy1.setHeightForWidth(stackedWidget_view->sizePolicy().hasHeightForWidth());
        stackedWidget_view->setSizePolicy(sizePolicy1);
        stackedWidget_view->setMinimumSize(QSize(460, 0));
        page_General = new QWidget();
        page_General->setObjectName(QString::fromUtf8("page_General"));
        label_21 = new QLabel(page_General);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 10, 91, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_21->setFont(font);
        line_10 = new QFrame(page_General);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(20, 25, 411, 31));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        checkBox_ShowWelcome = new QCheckBox(page_General);
        checkBox_ShowWelcome->setObjectName(QString::fromUtf8("checkBox_ShowWelcome"));
        checkBox_ShowWelcome->setGeometry(QRect(20, 60, 271, 16));
        stackedWidget_view->addWidget(page_General);
        page_Appearance = new QWidget();
        page_Appearance->setObjectName(QString::fromUtf8("page_Appearance"));
        label_4 = new QLabel(page_Appearance);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 10, 81, 16));
        label_4->setFont(font);
        line = new QFrame(page_Appearance);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(20, 30, 411, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        layoutWidget = new QWidget(page_Appearance);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 52, 411, 70));
        verticalLayout_11 = new QVBoxLayout(layoutWidget);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        comboBoxTheme = new QComboBox(layoutWidget);
        comboBoxTheme->setObjectName(QString::fromUtf8("comboBoxTheme"));
        comboBoxTheme->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));

        horizontalLayout_4->addWidget(comboBoxTheme);


        verticalLayout_11->addLayout(horizontalLayout_4);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_qssFile = new QLabel(layoutWidget);
        label_qssFile->setObjectName(QString::fromUtf8("label_qssFile"));

        horizontalLayout_10->addWidget(label_qssFile);

        lineEdit_qssFilePath = new QLineEdit(layoutWidget);
        lineEdit_qssFilePath->setObjectName(QString::fromUtf8("lineEdit_qssFilePath"));

        horizontalLayout_10->addWidget(lineEdit_qssFilePath);

        pushButton_loadQssFile = new QPushButton(layoutWidget);
        pushButton_loadQssFile->setObjectName(QString::fromUtf8("pushButton_loadQssFile"));

        horizontalLayout_10->addWidget(pushButton_loadQssFile);


        verticalLayout_11->addLayout(horizontalLayout_10);

        stackedWidget_view->addWidget(page_Appearance);
        page_Keys = new QWidget();
        page_Keys->setObjectName(QString::fromUtf8("page_Keys"));
        label_7 = new QLabel(page_Keys);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(9, 9, 37, 17));
        label_7->setFont(font);
        line_2 = new QFrame(page_Keys);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(9, 20, 449, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_commandName = new QLabel(page_Keys);
        label_commandName->setObjectName(QString::fromUtf8("label_commandName"));
        label_commandName->setGeometry(QRect(237, 267, 16, 16));
        layoutWidget1 = new QWidget(page_Keys);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 42, 451, 445));
        gridLayout_6 = new QGridLayout(layoutWidget1);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        tableWidget = new QTableWidget(layoutWidget1);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tableWidget->rowCount() < 22)
            tableWidget->setRowCount(22);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(8, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(9, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(10, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(11, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(12, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(13, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(14, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(15, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(16, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(17, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(18, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(19, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(20, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(21, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget->setItem(3, 0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget->setItem(3, 1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget->setItem(3, 2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget->setItem(4, 0, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setItem(4, 1, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setItem(4, 2, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setItem(5, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setItem(5, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setItem(5, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setItem(6, 0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setItem(6, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setItem(6, 2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(7, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(7, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(7, 2, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(8, 0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(8, 1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(8, 2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(9, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(9, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(9, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget->setItem(10, 0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget->setItem(10, 1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget->setItem(10, 2, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget->setItem(11, 0, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget->setItem(11, 1, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget->setItem(11, 2, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget->setItem(12, 0, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget->setItem(12, 1, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget->setItem(12, 2, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget->setItem(13, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget->setItem(13, 1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget->setItem(13, 2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget->setItem(14, 0, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget->setItem(14, 1, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget->setItem(14, 2, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget->setItem(15, 0, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget->setItem(15, 1, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget->setItem(15, 2, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget->setItem(16, 0, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget->setItem(16, 1, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget->setItem(16, 2, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget->setItem(17, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget->setItem(17, 1, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget->setItem(17, 2, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget->setItem(18, 0, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget->setItem(18, 1, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget->setItem(18, 2, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget->setItem(19, 0, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget->setItem(19, 1, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget->setItem(19, 2, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget->setItem(20, 0, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget->setItem(20, 1, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget->setItem(20, 2, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget->setItem(21, 0, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget->setItem(21, 1, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget->setItem(21, 2, __qtablewidgetitem90);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->horizontalHeader()->setMinimumSectionSize(16);
        tableWidget->horizontalHeader()->setDefaultSectionSize(120);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);

        gridLayout_6->addWidget(tableWidget, 0, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_keyName = new QLabel(layoutWidget1);
        label_keyName->setObjectName(QString::fromUtf8("label_keyName"));

        verticalLayout_5->addWidget(label_keyName);

        lineEdit_commandName = new QLineEdit(layoutWidget1);
        lineEdit_commandName->setObjectName(QString::fromUtf8("lineEdit_commandName"));
        lineEdit_commandName->setEnabled(false);
        lineEdit_commandName->setMinimumSize(QSize(420, 0));

        verticalLayout_5->addWidget(lineEdit_commandName);

        label_description = new QLabel(layoutWidget1);
        label_description->setObjectName(QString::fromUtf8("label_description"));

        verticalLayout_5->addWidget(label_description);

        lineEdit_KeyDescription = new QLineEdit(layoutWidget1);
        lineEdit_KeyDescription->setObjectName(QString::fromUtf8("lineEdit_KeyDescription"));
        lineEdit_KeyDescription->setEnabled(false);

        verticalLayout_5->addWidget(lineEdit_KeyDescription);

        label_keyBind = new QLabel(layoutWidget1);
        label_keyBind->setObjectName(QString::fromUtf8("label_keyBind"));

        verticalLayout_5->addWidget(label_keyBind);

        lineEdit_binding = new QLineEdit(layoutWidget1);
        lineEdit_binding->setObjectName(QString::fromUtf8("lineEdit_binding"));

        verticalLayout_5->addWidget(lineEdit_binding);

        label_newKeys = new QLabel(layoutWidget1);
        label_newKeys->setObjectName(QString::fromUtf8("label_newKeys"));

        verticalLayout_5->addWidget(label_newKeys);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBox_KeyModify = new QComboBox(layoutWidget1);
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->addItem(QString());
        comboBox_KeyModify->setObjectName(QString::fromUtf8("comboBox_KeyModify"));

        horizontalLayout->addWidget(comboBox_KeyModify);

        label_add = new QLabel(layoutWidget1);
        label_add->setObjectName(QString::fromUtf8("label_add"));
        label_add->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_add);

        comboBox_key = new QComboBox(layoutWidget1);
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->addItem(QString());
        comboBox_key->setObjectName(QString::fromUtf8("comboBox_key"));

        horizontalLayout->addWidget(comboBox_key);


        verticalLayout_5->addLayout(horizontalLayout);


        gridLayout_6->addLayout(verticalLayout_5, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_2, 2, 0, 1, 1);

        stackedWidget_view->addWidget(page_Keys);
        page_Language = new QWidget();
        page_Language->setObjectName(QString::fromUtf8("page_Language"));
        label_11 = new QLabel(page_Language);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(10, 10, 81, 16));
        label_11->setFont(font);
        line_3 = new QFrame(page_Language);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(10, 30, 421, 21));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        comboBox_Language = new QComboBox(page_Language);
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->addItem(QString());
        comboBox_Language->setObjectName(QString::fromUtf8("comboBox_Language"));
        comboBox_Language->setGeometry(QRect(10, 60, 421, 22));
        comboBox_Language->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));
        stackedWidget_view->addWidget(page_Language);
        page_StartupandShutdown = new QWidget();
        page_StartupandShutdown->setObjectName(QString::fromUtf8("page_StartupandShutdown"));
        label_12 = new QLabel(page_StartupandShutdown);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 10, 171, 16));
        label_12->setFont(font);
        line_4 = new QFrame(page_StartupandShutdown);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(10, 30, 421, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        checkBox_RestoreStartup = new QCheckBox(page_StartupandShutdown);
        checkBox_RestoreStartup->setObjectName(QString::fromUtf8("checkBox_RestoreStartup"));
        checkBox_RestoreStartup->setGeometry(QRect(20, 60, 261, 16));
        stackedWidget_view->addWidget(page_StartupandShutdown);
        page_Tracing = new QWidget();
        page_Tracing->setObjectName(QString::fromUtf8("page_Tracing"));
        label_13 = new QLabel(page_Tracing);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(20, 10, 91, 16));
        label_13->setFont(font);
        line_5 = new QFrame(page_Tracing);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(10, 30, 421, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        layoutWidget2 = new QWidget(page_Tracing);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 60, 421, 141));
        gridLayout_10 = new QGridLayout(layoutWidget2);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        gridLayout_10->setContentsMargins(0, 0, 0, 0);
        checkBox_enableTracing = new QCheckBox(layoutWidget2);
        checkBox_enableTracing->setObjectName(QString::fromUtf8("checkBox_enableTracing"));

        gridLayout_10->addWidget(checkBox_enableTracing, 0, 0, 1, 1);

        groupBox = new QGroupBox(layoutWidget2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMaximumSize(QSize(16777215, 100));
        gridLayout_9 = new QGridLayout(groupBox);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy2);
        label_14->setMaximumSize(QSize(100, 20));

        horizontalLayout_9->addWidget(label_14);

        lineEdit_logPath = new QLineEdit(groupBox);
        lineEdit_logPath->setObjectName(QString::fromUtf8("lineEdit_logPath"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(lineEdit_logPath->sizePolicy().hasHeightForWidth());
        lineEdit_logPath->setSizePolicy(sizePolicy3);
        lineEdit_logPath->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_logPath);


        verticalLayout_14->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setSizeConstraint(QLayout::SetDefaultConstraint);
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_8->addWidget(label_15);

        comboBox__LogDate = new QComboBox(groupBox);
        comboBox__LogDate->setObjectName(QString::fromUtf8("comboBox__LogDate"));
        comboBox__LogDate->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));

        horizontalLayout_8->addWidget(comboBox__LogDate);


        verticalLayout_14->addLayout(horizontalLayout_8);


        gridLayout_9->addLayout(verticalLayout_14, 1, 0, 1, 1);


        gridLayout_10->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_DA_log = new QGroupBox(page_Tracing);
        groupBox_DA_log->setObjectName(QString::fromUtf8("groupBox_DA_log"));
        groupBox_DA_log->setGeometry(QRect(10, 210, 421, 51));
        layoutWidget3 = new QWidget(groupBox_DA_log);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(12, 20, 397, 26));
        horizontalLayout_da_log_level = new QHBoxLayout(layoutWidget3);
        horizontalLayout_da_log_level->setObjectName(QString::fromUtf8("horizontalLayout_da_log_level"));
        horizontalLayout_da_log_level->setContentsMargins(0, 0, 0, 0);
        label_DA_log_level = new QLabel(layoutWidget3);
        label_DA_log_level->setObjectName(QString::fromUtf8("label_DA_log_level"));

        horizontalLayout_da_log_level->addWidget(label_DA_log_level);

        comboBox_da_log_level = new QComboBox(layoutWidget3);
        comboBox_da_log_level->setObjectName(QString::fromUtf8("comboBox_da_log_level"));
        comboBox_da_log_level->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));

        horizontalLayout_da_log_level->addWidget(comboBox_da_log_level);

        stackedWidget_view->addWidget(page_Tracing);
        page_Conn = new QWidget();
        page_Conn->setObjectName(QString::fromUtf8("page_Conn"));
        gridLayout_14 = new QGridLayout(page_Conn);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        gridLayout_13 = new QGridLayout();
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_uartusb = new QGroupBox(page_Conn);
        groupBox_uartusb->setObjectName(QString::fromUtf8("groupBox_uartusb"));
        groupBox_uartusb->setFlat(false);
        gridLayout_12 = new QGridLayout(groupBox_uartusb);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        frameUART = new QFrame(groupBox_uartusb);
        frameUART->setObjectName(QString::fromUtf8("frameUART"));
        frameUART->setFrameShape(QFrame::Box);
        frameUART->setFrameShadow(QFrame::Sunken);
        gridLayout = new QGridLayout(frameUART);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        radioUART = new QRadioButton(frameUART);
        radioUART->setObjectName(QString::fromUtf8("radioUART"));

        gridLayout->addWidget(radioUART, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(frameUART);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(frameUART);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        comboPort = new QComboBox(frameUART);
        comboPort->setObjectName(QString::fromUtf8("comboPort"));
        comboPort->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));

        verticalLayout_3->addWidget(comboPort);

        comboRate = new QComboBox(frameUART);
        comboRate->setObjectName(QString::fromUtf8("comboRate"));
        comboRate->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));

        verticalLayout_3->addWidget(comboRate);


        horizontalLayout_6->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 1);


        gridLayout_12->addWidget(frameUART, 0, 0, 1, 1);

        frame = new QFrame(groupBox_uartusb);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_15 = new QGridLayout(frame);
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        radioUSB = new QRadioButton(frame);
        radioUSB->setObjectName(QString::fromUtf8("radioUSB"));
        radioUSB->setChecked(true);

        gridLayout_15->addWidget(radioUSB, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        groupBox_speed = new QGroupBox(frame);
        groupBox_speed->setObjectName(QString::fromUtf8("groupBox_speed"));
        radioSpeedHigh = new QRadioButton(groupBox_speed);
        radioSpeedHigh->setObjectName(QString::fromUtf8("radioSpeedHigh"));
        radioSpeedHigh->setGeometry(QRect(17, 25, 102, 22));
        radioSpeedHigh->setChecked(true);
        radioSpeedFull = new QRadioButton(groupBox_speed);
        radioSpeedFull->setObjectName(QString::fromUtf8("radioSpeedFull"));
        radioSpeedFull->setGeometry(QRect(17, 53, 95, 22));
        radioSpeedFull->setChecked(false);

        horizontalLayout_7->addWidget(groupBox_speed);

        groupBox_battery = new QGroupBox(frame);
        groupBox_battery->setObjectName(QString::fromUtf8("groupBox_battery"));
        gridLayout_2 = new QGridLayout(groupBox_battery);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButton_WithBattery = new QRadioButton(groupBox_battery);
        radioButton_WithBattery->setObjectName(QString::fromUtf8("radioButton_WithBattery"));

        gridLayout_2->addWidget(radioButton_WithBattery, 0, 0, 1, 1);

        radioButton_WithoutBattery = new QRadioButton(groupBox_battery);
        radioButton_WithoutBattery->setObjectName(QString::fromUtf8("radioButton_WithoutBattery"));
        radioButton_WithoutBattery->setChecked(true);

        gridLayout_2->addWidget(radioButton_WithoutBattery, 1, 0, 1, 1);

        radioButton_Autodetect = new QRadioButton(groupBox_battery);
        radioButton_Autodetect->setObjectName(QString::fromUtf8("radioButton_Autodetect"));

        gridLayout_2->addWidget(radioButton_Autodetect, 2, 0, 1, 1);


        horizontalLayout_7->addWidget(groupBox_battery);


        gridLayout_15->addLayout(horizontalLayout_7, 1, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_Timeout = new QLabel(frame);
        label_Timeout->setObjectName(QString::fromUtf8("label_Timeout"));

        horizontalLayout_11->addWidget(label_Timeout);

        comboTimeout = new QComboBox(frame);
        comboTimeout->setObjectName(QString::fromUtf8("comboTimeout"));
        comboTimeout->setAutoFillBackground(false);
        comboTimeout->setStyleSheet(QString::fromUtf8("border: 1px solid rgb(95,95,95);\n"
"border-radius: 3px;\n"
"color: rgb(0, 0, 0);\n"
"margin:0 0 0 0;"));
        comboTimeout->setInsertPolicy(QComboBox::InsertAtBottom);

        horizontalLayout_11->addWidget(comboTimeout);

        label_min = new QLabel(frame);
        label_min->setObjectName(QString::fromUtf8("label_min"));

        horizontalLayout_11->addWidget(label_min);


        gridLayout_15->addLayout(horizontalLayout_11, 2, 0, 1, 1);


        gridLayout_12->addWidget(frame, 1, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_uartusb, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_14->addLayout(gridLayout_13, 2, 0, 1, 1);

        label_16 = new QLabel(page_Conn);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);

        gridLayout_14->addWidget(label_16, 0, 0, 1, 1);

        line_6 = new QFrame(page_Conn);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        gridLayout_14->addWidget(line_6, 1, 0, 1, 1);

        stackedWidget_view->addWidget(page_Conn);
        page_Download = new QWidget();
        page_Download->setObjectName(QString::fromUtf8("page_Download"));
        frame_3 = new QFrame(page_Download);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(9, 9, 421, 561));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Plain);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);

        line_8 = new QFrame(frame_3);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_8);

        label__DownloadSetting = new QLabel(frame_3);
        label__DownloadSetting->setObjectName(QString::fromUtf8("label__DownloadSetting"));
        sizePolicy.setHeightForWidth(label__DownloadSetting->sizePolicy().hasHeightForWidth());
        label__DownloadSetting->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(label__DownloadSetting);

        frame_DAchksum = new QFrame(frame_3);
        frame_DAchksum->setObjectName(QString::fromUtf8("frame_DAchksum"));
        frame_DAchksum->setFrameShape(QFrame::Box);
        frame_DAchksum->setFrameShadow(QFrame::Sunken);
        gridLayout_5 = new QGridLayout(frame_DAchksum);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_2 = new QGroupBox(frame_DAchksum);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        checkBox_usbchksum = new QCheckBox(groupBox_2);
        checkBox_usbchksum->setObjectName(QString::fromUtf8("checkBox_usbchksum"));

        horizontalLayout_2->addWidget(checkBox_usbchksum);

        horizontalSpacer_2 = new QSpacerItem(118, 19, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_emmcchksum = new QCheckBox(groupBox_2);
        checkBox_emmcchksum->setObjectName(QString::fromUtf8("checkBox_emmcchksum"));

        horizontalLayout_3->addWidget(checkBox_emmcchksum);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_physicalFormat = new QCheckBox(frame_DAchksum);
        checkBox_physicalFormat->setObjectName(QString::fromUtf8("checkBox_physicalFormat"));

        horizontalLayout_5->addWidget(checkBox_physicalFormat);

        horizontalSpacer_3 = new QSpacerItem(168, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        verticalLayout->addWidget(frame_DAchksum);

        groupBox_rpmb_setting = new QGroupBox(frame_3);
        groupBox_rpmb_setting->setObjectName(QString::fromUtf8("groupBox_rpmb_setting"));
        groupBox_rpmb_setting->setMinimumSize(QSize(0, 50));
        checkBox_rpmb = new QCheckBox(groupBox_rpmb_setting);
        checkBox_rpmb->setObjectName(QString::fromUtf8("checkBox_rpmb"));
        checkBox_rpmb->setGeometry(QRect(10, 20, 361, 18));

        verticalLayout->addWidget(groupBox_rpmb_setting);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        stackedWidget_view->addWidget(page_Download);
        page_Update = new QWidget();
        page_Update->setObjectName(QString::fromUtf8("page_Update"));
        label_20 = new QLabel(page_Update);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(10, 10, 131, 16));
        label_20->setFont(font);
        line_9 = new QFrame(page_Update);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(10, 20, 411, 31));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);
        checkBox = new QCheckBox(page_Update);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 60, 261, 16));
        stackedWidget_view->addWidget(page_Update);
        splitter->addWidget(stackedWidget_view);

        gridLayout_8->addWidget(splitter, 0, 0, 1, 2);


        retranslateUi(OptionDialog);

        stackedWidget_view->setCurrentIndex(7);
        comboBox_KeyModify->setCurrentIndex(-1);
        comboRate->setCurrentIndex(-1);
        comboTimeout->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(OptionDialog);
    } // setupUi

    void retranslateUi(QDialog *OptionDialog)
    {
        OptionDialog->setWindowTitle(QCoreApplication::translate("OptionDialog", "Option", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->topLevelItem(0);
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("OptionDialog", "General", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = ___qtreewidgetitem->child(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("OptionDialog", "Appearance", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem->child(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("OptionDialog", "Key", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem->child(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("OptionDialog", "Language", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem->child(3);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("OptionDialog", "Startup and Shutdown", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem->child(4);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("OptionDialog", "Tracing", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("OptionDialog", "Connection", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("OptionDialog", "Download", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = treeWidget->topLevelItem(3);
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("OptionDialog", "Install/Update", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        label_21->setText(QCoreApplication::translate("OptionDialog", "General", nullptr));
        checkBox_ShowWelcome->setText(QCoreApplication::translate("OptionDialog", "Show Welcome page when startup", nullptr));
        label_4->setText(QCoreApplication::translate("OptionDialog", "Appearance", nullptr));
        label_5->setText(QCoreApplication::translate("OptionDialog", "Theme:", nullptr));
        label_qssFile->setText(QCoreApplication::translate("OptionDialog", "QSS file", nullptr));
        pushButton_loadQssFile->setText(QCoreApplication::translate("OptionDialog", "Load", nullptr));
        label_7->setText(QCoreApplication::translate("OptionDialog", "Keys", nullptr));
        label_commandName->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("OptionDialog", "Command", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("OptionDialog", "Binding", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("OptionDialog", "Category", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("OptionDialog", "parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("OptionDialog", "Options", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("OptionDialog", "content", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("OptionDialog", "index", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("OptionDialog", "dl_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("OptionDialog", "dl_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("OptionDialog", "dl_cert", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("OptionDialog", "fmt_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->verticalHeaderItem(8);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("OptionDialog", "fmt_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->verticalHeaderItem(9);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("OptionDialog", "rb_add", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->verticalHeaderItem(10);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("OptionDialog", "rb_remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->verticalHeaderItem(11);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("OptionDialog", "rb_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->verticalHeaderItem(12);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("OptionDialog", "rb_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->verticalHeaderItem(13);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("OptionDialog", "mt_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->verticalHeaderItem(14);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("OptionDialog", "mt_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->verticalHeaderItem(15);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("OptionDialog", "para_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->verticalHeaderItem(16);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("OptionDialog", "para_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->verticalHeaderItem(17);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("OptionDialog", "wm_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->verticalHeaderItem(18);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("OptionDialog", "wm_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->verticalHeaderItem(19);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("OptionDialog", "bat_start", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget->verticalHeaderItem(20);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("OptionDialog", "bat_stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget->verticalHeaderItem(21);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("OptionDialog", "bat_jump", nullptr));

        const bool __sortingEnabled1 = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget->item(0, 0);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("OptionDialog", "Parameter", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->item(1, 0);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("OptionDialog", "Option", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->item(2, 0);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("OptionDialog", "Contents", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->item(3, 0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("OptionDialog", "Indexs", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->item(4, 0);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("OptionDialog", "Download", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->item(5, 0);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("OptionDialog", "Stop Download", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->item(6, 0);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("OptionDialog", "Download Certification", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->item(7, 0);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("OptionDialog", "Start Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->item(8, 0);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("OptionDialog", "Stop Format", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(9, 0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("OptionDialog", "Add", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(10, 0);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("OptionDialog", "Remove", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(11, 0);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("OptionDialog", "Read Back", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(12, 0);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("OptionDialog", "Stop Readback", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(13, 0);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("OptionDialog", "Start MemoryTest", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(14, 0);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("OptionDialog", "Stop MemoryTest", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(15, 0);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("OptionDialog", "Update Parameters", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(16, 0);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("OptionDialog", "Stop Update Para", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(17, 0);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("OptionDialog", "Write Memory", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget->item(18, 0);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("OptionDialog", "Stop WriteMemory", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget->item(19, 0);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("OptionDialog", "Download BROM", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget->item(20, 0);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("OptionDialog", "Stop BAT", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget->item(21, 0);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("OptionDialog", "Jump BROM", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled1);

        label_keyName->setText(QCoreApplication::translate("OptionDialog", "Name:", nullptr));
        label_description->setText(QCoreApplication::translate("OptionDialog", "Description:", nullptr));
        label_keyBind->setText(QCoreApplication::translate("OptionDialog", "Current Keys:", nullptr));
        label_newKeys->setText(QCoreApplication::translate("OptionDialog", "New Keys:", nullptr));
        comboBox_KeyModify->setItemText(0, QString());
        comboBox_KeyModify->setItemText(1, QCoreApplication::translate("OptionDialog", "Alt", nullptr));
        comboBox_KeyModify->setItemText(2, QCoreApplication::translate("OptionDialog", "Ctrl", nullptr));
        comboBox_KeyModify->setItemText(3, QCoreApplication::translate("OptionDialog", "Shift", nullptr));
        comboBox_KeyModify->setItemText(4, QCoreApplication::translate("OptionDialog", "Ctrl + Alt", nullptr));
        comboBox_KeyModify->setItemText(5, QCoreApplication::translate("OptionDialog", "Ctrl + Shift", nullptr));
        comboBox_KeyModify->setItemText(6, QCoreApplication::translate("OptionDialog", "Ctrl + Alt + Shift", nullptr));

        label_add->setText(QCoreApplication::translate("OptionDialog", "+", nullptr));
        comboBox_key->setItemText(0, QCoreApplication::translate("OptionDialog", "F1", nullptr));
        comboBox_key->setItemText(1, QCoreApplication::translate("OptionDialog", "F2", nullptr));
        comboBox_key->setItemText(2, QCoreApplication::translate("OptionDialog", "F3", nullptr));
        comboBox_key->setItemText(3, QCoreApplication::translate("OptionDialog", "F4", nullptr));
        comboBox_key->setItemText(4, QCoreApplication::translate("OptionDialog", "F5", nullptr));
        comboBox_key->setItemText(5, QCoreApplication::translate("OptionDialog", "F6", nullptr));
        comboBox_key->setItemText(6, QCoreApplication::translate("OptionDialog", "F7", nullptr));
        comboBox_key->setItemText(7, QCoreApplication::translate("OptionDialog", "F8", nullptr));
        comboBox_key->setItemText(8, QCoreApplication::translate("OptionDialog", "F9", nullptr));
        comboBox_key->setItemText(9, QCoreApplication::translate("OptionDialog", "F10", nullptr));
        comboBox_key->setItemText(10, QCoreApplication::translate("OptionDialog", "F11", nullptr));
        comboBox_key->setItemText(11, QCoreApplication::translate("OptionDialog", "F12", nullptr));
        comboBox_key->setItemText(12, QCoreApplication::translate("OptionDialog", "A", nullptr));
        comboBox_key->setItemText(13, QCoreApplication::translate("OptionDialog", "B", nullptr));
        comboBox_key->setItemText(14, QCoreApplication::translate("OptionDialog", "C", nullptr));
        comboBox_key->setItemText(15, QCoreApplication::translate("OptionDialog", "D", nullptr));
        comboBox_key->setItemText(16, QCoreApplication::translate("OptionDialog", "E", nullptr));
        comboBox_key->setItemText(17, QCoreApplication::translate("OptionDialog", "F", nullptr));
        comboBox_key->setItemText(18, QCoreApplication::translate("OptionDialog", "G", nullptr));
        comboBox_key->setItemText(19, QCoreApplication::translate("OptionDialog", "H", nullptr));
        comboBox_key->setItemText(20, QCoreApplication::translate("OptionDialog", "I", nullptr));
        comboBox_key->setItemText(21, QCoreApplication::translate("OptionDialog", "J", nullptr));
        comboBox_key->setItemText(22, QCoreApplication::translate("OptionDialog", "K", nullptr));
        comboBox_key->setItemText(23, QCoreApplication::translate("OptionDialog", "L", nullptr));
        comboBox_key->setItemText(24, QCoreApplication::translate("OptionDialog", "M", nullptr));
        comboBox_key->setItemText(25, QCoreApplication::translate("OptionDialog", "N", nullptr));
        comboBox_key->setItemText(26, QCoreApplication::translate("OptionDialog", "O", nullptr));
        comboBox_key->setItemText(27, QCoreApplication::translate("OptionDialog", "P", nullptr));
        comboBox_key->setItemText(28, QCoreApplication::translate("OptionDialog", "Q", nullptr));
        comboBox_key->setItemText(29, QCoreApplication::translate("OptionDialog", "R", nullptr));
        comboBox_key->setItemText(30, QCoreApplication::translate("OptionDialog", "S", nullptr));
        comboBox_key->setItemText(31, QCoreApplication::translate("OptionDialog", "T", nullptr));
        comboBox_key->setItemText(32, QCoreApplication::translate("OptionDialog", "U", nullptr));
        comboBox_key->setItemText(33, QCoreApplication::translate("OptionDialog", "V", nullptr));
        comboBox_key->setItemText(34, QCoreApplication::translate("OptionDialog", "W", nullptr));
        comboBox_key->setItemText(35, QCoreApplication::translate("OptionDialog", "X", nullptr));
        comboBox_key->setItemText(36, QCoreApplication::translate("OptionDialog", "Y", nullptr));
        comboBox_key->setItemText(37, QCoreApplication::translate("OptionDialog", "Z", nullptr));
        comboBox_key->setItemText(38, QCoreApplication::translate("OptionDialog", "0", nullptr));
        comboBox_key->setItemText(39, QCoreApplication::translate("OptionDialog", "1", nullptr));
        comboBox_key->setItemText(40, QCoreApplication::translate("OptionDialog", "2", nullptr));
        comboBox_key->setItemText(41, QCoreApplication::translate("OptionDialog", "3", nullptr));
        comboBox_key->setItemText(42, QCoreApplication::translate("OptionDialog", "4", nullptr));
        comboBox_key->setItemText(43, QCoreApplication::translate("OptionDialog", "5", nullptr));
        comboBox_key->setItemText(44, QCoreApplication::translate("OptionDialog", "6", nullptr));
        comboBox_key->setItemText(45, QCoreApplication::translate("OptionDialog", "7", nullptr));
        comboBox_key->setItemText(46, QCoreApplication::translate("OptionDialog", "8", nullptr));
        comboBox_key->setItemText(47, QCoreApplication::translate("OptionDialog", "9", nullptr));

        label_11->setText(QCoreApplication::translate("OptionDialog", "Language", nullptr));
        comboBox_Language->setItemText(0, QCoreApplication::translate("OptionDialog", "English", nullptr));
        comboBox_Language->setItemText(1, QCoreApplication::translate("OptionDialog", "\347\256\200\344\275\223\344\270\255\346\226\207", nullptr));
        comboBox_Language->setItemText(2, QCoreApplication::translate("OptionDialog", "\347\271\201\344\275\223\344\270\255\346\226\207", nullptr));

        label_12->setText(QCoreApplication::translate("OptionDialog", "Startup and Shutdown", nullptr));
        checkBox_RestoreStartup->setText(QCoreApplication::translate("OptionDialog", "Restore last state on startup", nullptr));
        label_13->setText(QCoreApplication::translate("OptionDialog", "Tracing", nullptr));
        checkBox_enableTracing->setText(QCoreApplication::translate("OptionDialog", "Enabling tracing", nullptr));
        groupBox->setTitle(QCoreApplication::translate("OptionDialog", "Logger", nullptr));
        label_14->setText(QCoreApplication::translate("OptionDialog", "Log File Path:", nullptr));
        label_15->setText(QCoreApplication::translate("OptionDialog", "Clean log file older than:", nullptr));
        groupBox_DA_log->setTitle(QCoreApplication::translate("OptionDialog", "DA_log", nullptr));
        label_DA_log_level->setText(QCoreApplication::translate("OptionDialog", "DA_log_level", nullptr));
        groupBox_uartusb->setTitle(QCoreApplication::translate("OptionDialog", "Connection Setting", nullptr));
        radioUART->setText(QCoreApplication::translate("OptionDialog", "UART", nullptr));
        label->setText(QCoreApplication::translate("OptionDialog", "COM port", nullptr));
        label_2->setText(QCoreApplication::translate("OptionDialog", "Baud rate", nullptr));
        radioUSB->setText(QCoreApplication::translate("OptionDialog", "USB", nullptr));
        groupBox_speed->setTitle(QCoreApplication::translate("OptionDialog", "USB speed", nullptr));
        radioSpeedHigh->setText(QCoreApplication::translate("OptionDialog", "High speed", nullptr));
        radioSpeedFull->setText(QCoreApplication::translate("OptionDialog", "Full speed", nullptr));
        groupBox_battery->setTitle(QCoreApplication::translate("OptionDialog", "Battery", nullptr));
        radioButton_WithBattery->setText(QCoreApplication::translate("OptionDialog", "with battery", nullptr));
        radioButton_WithoutBattery->setText(QCoreApplication::translate("OptionDialog", "w/o battery", nullptr));
        radioButton_Autodetect->setText(QCoreApplication::translate("OptionDialog", "auto detect", nullptr));
        label_Timeout->setText(QCoreApplication::translate("OptionDialog", "Timeout", nullptr));
        label_min->setText(QCoreApplication::translate("OptionDialog", "min", nullptr));
        label_16->setText(QCoreApplication::translate("OptionDialog", "Connection", nullptr));
        label_3->setText(QCoreApplication::translate("OptionDialog", "Download", nullptr));
        label__DownloadSetting->setText(QCoreApplication::translate("OptionDialog", "General Setting", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("OptionDialog", "DA DL All with Checksum", nullptr));
        checkBox_usbchksum->setText(QCoreApplication::translate("OptionDialog", "USB Checksum", nullptr));
        checkBox_emmcchksum->setText(QCoreApplication::translate("OptionDialog", "Storage Checksum", nullptr));
        checkBox_physicalFormat->setText(QCoreApplication::translate("OptionDialog", "Physical Format/Readback", nullptr));
        groupBox_rpmb_setting->setTitle(QCoreApplication::translate("OptionDialog", "RPMB Setting", nullptr));
        checkBox_rpmb->setText(QCoreApplication::translate("OptionDialog", "Check RPMB before download", nullptr));
        label_20->setText(QCoreApplication::translate("OptionDialog", "Install/Update", nullptr));
        checkBox->setText(QCoreApplication::translate("OptionDialog", "Search latest version when startup", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionDialog: public Ui_OptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONDIALOG_H
