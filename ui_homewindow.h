/********************************************************************************
** Form generated from reading UI file 'homewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWINDOW_H
#define UI_HOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWindow
{
public:
    QWidget *centralwidget;
    QPushButton *clothesPushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *imageListWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HomeWindow)
    {
        if (HomeWindow->objectName().isEmpty())
            HomeWindow->setObjectName(QStringLiteral("HomeWindow"));
        HomeWindow->resize(800, 600);
        centralwidget = new QWidget(HomeWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        clothesPushButton = new QPushButton(centralwidget);
        clothesPushButton->setObjectName(QStringLiteral("clothesPushButton"));
        clothesPushButton->setGeometry(QRect(240, 60, 75, 23));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(360, 60, 75, 23));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(480, 60, 75, 23));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 110, 761, 341));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        imageListWidget = new QListWidget(horizontalLayoutWidget);
        imageListWidget->setObjectName(QStringLiteral("imageListWidget"));

        horizontalLayout->addWidget(imageListWidget);

        HomeWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HomeWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        HomeWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HomeWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        HomeWindow->setStatusBar(statusbar);

        retranslateUi(HomeWindow);

        QMetaObject::connectSlotsByName(HomeWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HomeWindow)
    {
        HomeWindow->setWindowTitle(QApplication::translate("HomeWindow", "Home", 0));
        clothesPushButton->setText(QApplication::translate("HomeWindow", "Clothes", 0));
        pushButton_2->setText(QApplication::translate("HomeWindow", "Electronics", 0));
        pushButton_3->setText(QApplication::translate("HomeWindow", "Books", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeWindow: public Ui_HomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWINDOW_H
