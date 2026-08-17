/********************************************************************************
** Form generated from reading UI file 'WelcomeWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWIDGET_H
#define UI_WELCOMEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>
#include "QtWebEngineWidgets/QWebEngineView"

QT_BEGIN_NAMESPACE

class Ui_WelcomeWidget
{
public:
    QGridLayout *gridLayout;
    QWebEngineView *webView;

    void setupUi(QWidget *WelcomeWidget)
    {
        if (WelcomeWidget->objectName().isEmpty())
            WelcomeWidget->setObjectName(QString::fromUtf8("WelcomeWidget"));
        WelcomeWidget->resize(681, 456);
        WelcomeWidget->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(WelcomeWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        webView = new QWebEngineView(WelcomeWidget);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setStyleSheet(QString::fromUtf8(""));
        webView->setUrl(QUrl(QString::fromUtf8("qrc:/help/welcome.htm")));

        gridLayout->addWidget(webView, 0, 0, 1, 1);


        retranslateUi(WelcomeWidget);

        QMetaObject::connectSlotsByName(WelcomeWidget);
    } // setupUi

    void retranslateUi(QWidget *WelcomeWidget)
    {
        WelcomeWidget->setWindowTitle(QCoreApplication::translate("WelcomeWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWidget: public Ui_WelcomeWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWIDGET_H
