/********************************************************************************
** Form generated from reading UI file 'detailswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAILSWINDOW_H
#define UI_DETAILSWINDOW_H

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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DetailsWindow
{
public:
    QWidget *centralwidget;
    QLabel *productImageLabel;
    QWidget *gridLayoutWidget;
    QGridLayout *detailsGridLayout;
    QPushButton *addCartPushButton;
    QMenuBar *menubar;
    QMenu *menuDetails;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *DetailsWindow)
    {
        if (DetailsWindow->objectName().isEmpty())
            DetailsWindow->setObjectName(QStringLiteral("DetailsWindow"));
        DetailsWindow->resize(800, 600);
        centralwidget = new QWidget(DetailsWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        productImageLabel = new QLabel(centralwidget);
        productImageLabel->setObjectName(QStringLiteral("productImageLabel"));
        productImageLabel->setGeometry(QRect(20, 50, 321, 261));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(400, 20, 381, 411));
        detailsGridLayout = new QGridLayout(gridLayoutWidget);
        detailsGridLayout->setObjectName(QStringLiteral("detailsGridLayout"));
        detailsGridLayout->setContentsMargins(0, 0, 0, 0);
        addCartPushButton = new QPushButton(centralwidget);
        addCartPushButton->setObjectName(QStringLiteral("addCartPushButton"));
        addCartPushButton->setGeometry(QRect(90, 460, 151, 51));
        DetailsWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DetailsWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuDetails = new QMenu(menubar);
        menuDetails->setObjectName(QStringLiteral("menuDetails"));
        DetailsWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(DetailsWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        DetailsWindow->setStatusBar(statusbar);

        menubar->addAction(menuDetails->menuAction());

        retranslateUi(DetailsWindow);

        QMetaObject::connectSlotsByName(DetailsWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DetailsWindow)
    {
        DetailsWindow->setWindowTitle(QApplication::translate("DetailsWindow", "Details", 0));
        productImageLabel->setText(QString());
        addCartPushButton->setText(QApplication::translate("DetailsWindow", "Add to Shopping Cart", 0));
        menuDetails->setTitle(QApplication::translate("DetailsWindow", "Details", 0));
    } // retranslateUi

};

namespace Ui {
    class DetailsWindow: public Ui_DetailsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAILSWINDOW_H
