/********************************************************************************
** Form generated from reading UI file 'checkoutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTWINDOW_H
#define UI_CHECKOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckoutWindow
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget;
    QGridLayout *addressGridLayout;
    QComboBox *paymentOptionComboBox;
    QLabel *paymentOptionLabel;
    QPushButton *donePushButton;
    QMenuBar *menubar;
    QMenu *menuCheckout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CheckoutWindow)
    {
        if (CheckoutWindow->objectName().isEmpty())
            CheckoutWindow->setObjectName(QStringLiteral("CheckoutWindow"));
        CheckoutWindow->resize(800, 600);
        CheckoutWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(CheckoutWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(120, 60, 451, 151));
        addressGridLayout = new QGridLayout(gridLayoutWidget);
        addressGridLayout->setObjectName(QStringLiteral("addressGridLayout"));
        addressGridLayout->setContentsMargins(0, 0, 0, 0);
        paymentOptionComboBox = new QComboBox(centralwidget);
        paymentOptionComboBox->setObjectName(QStringLiteral("paymentOptionComboBox"));
        paymentOptionComboBox->setGeometry(QRect(330, 250, 161, 21));
        paymentOptionLabel = new QLabel(centralwidget);
        paymentOptionLabel->setObjectName(QStringLiteral("paymentOptionLabel"));
        paymentOptionLabel->setGeometry(QRect(230, 240, 91, 41));
        donePushButton = new QPushButton(centralwidget);
        donePushButton->setObjectName(QStringLiteral("donePushButton"));
        donePushButton->setGeometry(QRect(270, 310, 131, 61));
        CheckoutWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CheckoutWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuCheckout = new QMenu(menubar);
        menuCheckout->setObjectName(QStringLiteral("menuCheckout"));
        CheckoutWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CheckoutWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        CheckoutWindow->setStatusBar(statusbar);

        menubar->addAction(menuCheckout->menuAction());

        retranslateUi(CheckoutWindow);

        QMetaObject::connectSlotsByName(CheckoutWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CheckoutWindow)
    {
        CheckoutWindow->setWindowTitle(QApplication::translate("CheckoutWindow", "Checkout", 0));
        paymentOptionLabel->setText(QApplication::translate("CheckoutWindow", "Payment Option", 0));
        donePushButton->setText(QApplication::translate("CheckoutWindow", "Done", 0));
        menuCheckout->setTitle(QApplication::translate("CheckoutWindow", "Checkout", 0));
    } // retranslateUi

};

namespace Ui {
    class CheckoutWindow: public Ui_CheckoutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTWINDOW_H
