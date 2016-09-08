/********************************************************************************
** Form generated from reading UI file 'shoppingcartwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOPPINGCARTWINDOW_H
#define UI_SHOPPINGCARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShoppingCartWindow
{
public:
    QWidget *centralwidget;
    QPushButton *checkoutPushButton;
    QLabel *totalCostLabel;
    QTableView *tableView;
    QSpinBox *spinBoxshoppingWindow;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *cancelPushButton;
    QMenuBar *menubar;
    QMenu *menuShopping_Cart;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ShoppingCartWindow)
    {
        if (ShoppingCartWindow->objectName().isEmpty())
            ShoppingCartWindow->setObjectName(QStringLiteral("ShoppingCartWindow"));
        ShoppingCartWindow->resize(800, 600);
        centralwidget = new QWidget(ShoppingCartWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        checkoutPushButton = new QPushButton(centralwidget);
        checkoutPushButton->setObjectName(QStringLiteral("checkoutPushButton"));
        checkoutPushButton->setGeometry(QRect(534, 300, 141, 51));
        totalCostLabel = new QLabel(centralwidget);
        totalCostLabel->setObjectName(QStringLiteral("totalCostLabel"));
        totalCostLabel->setGeometry(QRect(70, 290, 251, 51));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(65, 10, 571, 192));
        spinBoxshoppingWindow = new QSpinBox(centralwidget);
        spinBoxshoppingWindow->setObjectName(QStringLiteral("spinBoxshoppingWindow"));
        spinBoxshoppingWindow->setGeometry(QRect(320, 220, 42, 22));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(156, 220, 141, 20));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(370, 220, 75, 23));
        cancelPushButton = new QPushButton(centralwidget);
        cancelPushButton->setObjectName(QStringLiteral("cancelPushButton"));
        cancelPushButton->setGeometry(QRect(390, 300, 121, 51));
        ShoppingCartWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ShoppingCartWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuShopping_Cart = new QMenu(menubar);
        menuShopping_Cart->setObjectName(QStringLiteral("menuShopping_Cart"));
        ShoppingCartWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ShoppingCartWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ShoppingCartWindow->setStatusBar(statusbar);

        menubar->addAction(menuShopping_Cart->menuAction());

        retranslateUi(ShoppingCartWindow);

        QMetaObject::connectSlotsByName(ShoppingCartWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ShoppingCartWindow)
    {
        ShoppingCartWindow->setWindowTitle(QApplication::translate("ShoppingCartWindow", "Your shopping cart", 0));
        checkoutPushButton->setText(QApplication::translate("ShoppingCartWindow", "CheckOut", 0));
        totalCostLabel->setText(QString());
        label->setText(QApplication::translate("ShoppingCartWindow", "Shopping cart id of item", 0));
        pushButton->setText(QApplication::translate("ShoppingCartWindow", "Remove Item", 0));
        cancelPushButton->setText(QApplication::translate("ShoppingCartWindow", "Cancel", 0));
        menuShopping_Cart->setTitle(QApplication::translate("ShoppingCartWindow", "Shopping Cart", 0));
    } // retranslateUi

};

namespace Ui {
    class ShoppingCartWindow: public Ui_ShoppingCartWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOPPINGCARTWINDOW_H
