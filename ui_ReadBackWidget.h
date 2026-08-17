/********************************************************************************
** Form generated from reading UI file 'ReadBackWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READBACKWIDGET_H
#define UI_READBACKWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReadBackWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QToolButton *toolButton_add;
    QToolButton *toolButton_remove;
    QFrame *line;
    QToolButton *toolButton_readBack;
    QToolButton *toolButton_stop;
    QSpacerItem *horizontalSpacer;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ReadBackWidget)
    {
        if (ReadBackWidget->objectName().isEmpty())
            ReadBackWidget->setObjectName(QString::fromUtf8("ReadBackWidget"));
        ReadBackWidget->resize(686, 376);
        verticalLayout = new QVBoxLayout(ReadBackWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(ReadBackWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::Panel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolButton_add = new QToolButton(frame_4);
        toolButton_add->setObjectName(QString::fromUtf8("toolButton_add"));
        toolButton_add->setMinimumSize(QSize(110, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_add->setIcon(icon);
        toolButton_add->setIconSize(QSize(24, 24));
        toolButton_add->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_add->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_add);

        toolButton_remove = new QToolButton(frame_4);
        toolButton_remove->setObjectName(QString::fromUtf8("toolButton_remove"));
        toolButton_remove->setMinimumSize(QSize(110, 0));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_remove->setIcon(icon1);
        toolButton_remove->setIconSize(QSize(24, 24));
        toolButton_remove->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_remove->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_remove);

        line = new QFrame(frame_4);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMaximumSize(QSize(16777215, 41));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        toolButton_readBack = new QToolButton(frame_4);
        toolButton_readBack->setObjectName(QString::fromUtf8("toolButton_readBack"));
        toolButton_readBack->setMinimumSize(QSize(110, 0));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/readBack.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_readBack->setIcon(icon2);
        toolButton_readBack->setIconSize(QSize(24, 24));
        toolButton_readBack->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_readBack->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_readBack);

        toolButton_stop = new QToolButton(frame_4);
        toolButton_stop->setObjectName(QString::fromUtf8("toolButton_stop"));
        toolButton_stop->setEnabled(false);
        toolButton_stop->setMinimumSize(QSize(110, 0));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_stop->setIcon(icon3);
        toolButton_stop->setIconSize(QSize(24, 24));
        toolButton_stop->setPopupMode(QToolButton::DelayedPopup);
        toolButton_stop->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        toolButton_stop->setAutoRaise(true);

        horizontalLayout->addWidget(toolButton_stop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addWidget(frame_4);

        tableWidget = new QTableWidget(ReadBackWidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
        tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setWordWrap(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(1);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->horizontalHeader()->setStretchLastSection(true);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(21);

        verticalLayout->addWidget(tableWidget);


        retranslateUi(ReadBackWidget);

        QMetaObject::connectSlotsByName(ReadBackWidget);
    } // setupUi

    void retranslateUi(QWidget *ReadBackWidget)
    {
        ReadBackWidget->setWindowTitle(QCoreApplication::translate("ReadBackWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_add->setToolTip(QCoreApplication::translate("ReadBackWidget", "Ctrl + A", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_add->setText(QCoreApplication::translate("ReadBackWidget", "Add", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_remove->setToolTip(QCoreApplication::translate("ReadBackWidget", "Ctrl + R", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_remove->setText(QCoreApplication::translate("ReadBackWidget", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_readBack->setToolTip(QCoreApplication::translate("ReadBackWidget", "Ctrl + B", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_readBack->setText(QCoreApplication::translate("ReadBackWidget", "Read Back", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_stop->setToolTip(QCoreApplication::translate("ReadBackWidget", "F10", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_stop->setText(QCoreApplication::translate("ReadBackWidget", "Stop", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ReadBackWidget", "Partitoin Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ReadBackWidget", "Read Flag", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ReadBackWidget", "Start Address", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ReadBackWidget", "Length", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ReadBackWidget", "Region", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ReadBackWidget", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReadBackWidget: public Ui_ReadBackWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READBACKWIDGET_H
