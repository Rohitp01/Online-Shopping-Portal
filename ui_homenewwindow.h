/********************************************************************************
** Form generated from reading UI file 'homenewwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMENEWWINDOW_H
#define UI_HOMENEWWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeNewWindow
{
public:
    QWidget *centralwidget;
    QPushButton *clothesPushButton;
    QPushButton *electronicpushbutton;
    QPushButton *bookspushbutton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *gotocart;
    QPushButton *getDetailsPushButton;
    QMenuBar *menubar;
    QMenu *menuHome;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeNewWindow)
    {
        if (HomeNewWindow->objectName().isEmpty())
            HomeNewWindow->setObjectName(QStringLiteral("HomeNewWindow"));
        HomeNewWindow->resize(800, 600);
        centralwidget = new QWidget(HomeNewWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        clothesPushButton = new QPushButton(centralwidget);
        clothesPushButton->setObjectName(QStringLiteral("clothesPushButton"));
        clothesPushButton->setGeometry(QRect(220, 60, 75, 23));
        electronicpushbutton = new QPushButton(centralwidget);
        electronicpushbutton->setObjectName(QStringLiteral("electronicpushbutton"));
        electronicpushbutton->setGeometry(QRect(340, 60, 75, 23));
        bookspushbutton = new QPushButton(centralwidget);
        bookspushbutton->setObjectName(QStringLiteral("bookspushbutton"));
        bookspushbutton->setGeometry(QRect(460, 60, 75, 23));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(60, 150, 601, 401));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(270, 120, 71, 16));
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(340, 120, 42, 22));
        gotocart = new QPushButton(centralwidget);
        gotocart->setObjectName(QStringLiteral("gotocart"));
        gotocart->setGeometry(QRect(600, 0, 75, 23));
        getDetailsPushButton = new QPushButton(centralwidget);
        getDetailsPushButton->setObjectName(QStringLiteral("getDetailsPushButton"));
        getDetailsPushButton->setGeometry(QRect(400, 120, 75, 23));
        HomeNewWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeNewWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuHome = new QMenu(menubar);
        menuHome->setObjectName(QStringLiteral("menuHome"));
        HomeNewWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeNewWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HomeNewWindow->setStatusBar(statusbar);

        menubar->addAction(menuHome->menuAction());

        retranslateUi(HomeNewWindow);

        QMetaObject::connectSlotsByName(HomeNewWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HomeNewWindow)
    {
        HomeNewWindow->setWindowTitle(QApplication::translate("HomeNewWindow", "Home", 0));
        clothesPushButton->setText(QApplication::translate("HomeNewWindow", "Clothes", 0));
        electronicpushbutton->setText(QApplication::translate("HomeNewWindow", "Electronics", 0));
        bookspushbutton->setText(QApplication::translate("HomeNewWindow", "Books", 0));
        label->setText(QApplication::translate("HomeNewWindow", "Enter the ID", 0));
        gotocart->setText(QApplication::translate("HomeNewWindow", "Go To Cart", 0));
        getDetailsPushButton->setText(QApplication::translate("HomeNewWindow", "Get Details", 0));
        menuHome->setTitle(QApplication::translate("HomeNewWindow", "Home", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeNewWindow: public Ui_HomeNewWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMENEWWINDOW_H
