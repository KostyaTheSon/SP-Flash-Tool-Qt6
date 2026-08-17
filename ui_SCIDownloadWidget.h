/********************************************************************************
** Form generated from reading UI file 'SCIDownloadWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCIDOWNLOADWIDGET_H
#define UI_SCIDOWNLOADWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SCIDownloadWidget
{
public:
    QGridLayout *gridLayout_3;
    QFrame *ButtonFrame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QToolButton *pushButton_SCIDownload;
    QToolButton *pushButton_Stop;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_SCIloading;
    QLineEdit *lineEdit_Path;
    QPushButton *pushButton_SCIscatterLoading;
    QTableWidget *tableWidget;

    void setupUi(QWidget *SCIDownloadWidget)
    {
        if (SCIDownloadWidget->objectName().isEmpty())
            SCIDownloadWidget->setObjectName(QString::fromUtf8("SCIDownloadWidget"));
        SCIDownloadWidget->resize(605, 394);
        gridLayout_3 = new QGridLayout(SCIDownloadWidget);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ButtonFrame = new QFrame(SCIDownloadWidget);
        ButtonFrame->setObjectName(QString::fromUtf8("ButtonFrame"));
        ButtonFrame->setFrameShape(QFrame::Panel);
        ButtonFrame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(ButtonFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_SCIDownload = new QToolButton(ButtonFrame);
        pushButton_SCIDownload->setObjectName(QString::fromUtf8("pushButton_SCIDownload"));
        pushButton_SCIDownload->setMinimumSize(QSize(110, 0));
        pushButton_SCIDownload->setStyleSheet(QString::fromUtf8("border-width:2px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_SCIDownload->setIcon(icon);
        pushButton_SCIDownload->setIconSize(QSize(24, 24));
        pushButton_SCIDownload->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_SCIDownload->setAutoRaise(true);

        horizontalLayout->addWidget(pushButton_SCIDownload);

        pushButton_Stop = new QToolButton(ButtonFrame);
        pushButton_Stop->setObjectName(QString::fromUtf8("pushButton_Stop"));
        pushButton_Stop->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_Stop->setIcon(icon1);
        pushButton_Stop->setIconSize(QSize(24, 24));
        pushButton_Stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        pushButton_Stop->setAutoRaise(true);

        horizontalLayout->addWidget(pushButton_Stop);

        horizontalSpacer = new QSpacerItem(398, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(ButtonFrame, 0, 0, 1, 1);

        frame = new QFrame(SCIDownloadWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Sunken);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_SCIloading = new QLabel(frame);
        label_SCIloading->setObjectName(QString::fromUtf8("label_SCIloading"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_SCIloading->sizePolicy().hasHeightForWidth());
        label_SCIloading->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_SCIloading);

        lineEdit_Path = new QLineEdit(frame);
        lineEdit_Path->setObjectName(QString::fromUtf8("lineEdit_Path"));
        lineEdit_Path->setReadOnly(true);

        horizontalLayout_2->addWidget(lineEdit_Path);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        pushButton_SCIscatterLoading = new QPushButton(frame);
        pushButton_SCIscatterLoading->setObjectName(QString::fromUtf8("pushButton_SCIscatterLoading"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_SCIscatterLoading->sizePolicy().hasHeightForWidth());
        pushButton_SCIscatterLoading->setSizePolicy(sizePolicy1);
        pushButton_SCIscatterLoading->setMaximumSize(QSize(110, 16777215));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_SCIscatterLoading->setIcon(icon2);
        pushButton_SCIscatterLoading->setIconSize(QSize(24, 24));

        horizontalLayout_3->addWidget(pushButton_SCIscatterLoading);


        verticalLayout->addLayout(horizontalLayout_3);

        tableWidget = new QTableWidget(frame);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setLineWidth(2);
        tableWidget->setMidLineWidth(1);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setColumnCount(3);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setCascadingSectionResizes(true);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);

        verticalLayout->addWidget(tableWidget);


        gridLayout_2->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(frame, 1, 0, 1, 1);


        retranslateUi(SCIDownloadWidget);

        QMetaObject::connectSlotsByName(SCIDownloadWidget);
    } // setupUi

    void retranslateUi(QWidget *SCIDownloadWidget)
    {
        SCIDownloadWidget->setWindowTitle(QCoreApplication::translate("SCIDownloadWidget", "Form", nullptr));
        pushButton_SCIDownload->setText(QCoreApplication::translate("SCIDownloadWidget", "SCI Download", nullptr));
        pushButton_Stop->setText(QCoreApplication::translate("SCIDownloadWidget", "Stop", nullptr));
        label_SCIloading->setText(QCoreApplication::translate("SCIDownloadWidget", "SCI-loading File", nullptr));
        pushButton_SCIscatterLoading->setText(QCoreApplication::translate("SCIDownloadWidget", "SCI File", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("SCIDownloadWidget", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("SCIDownloadWidget", "Begin Address", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SCIDownloadWidget: public Ui_SCIDownloadWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCIDOWNLOADWIDGET_H
