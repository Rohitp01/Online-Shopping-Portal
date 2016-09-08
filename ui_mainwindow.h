/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *formLayoutWidget;
    QFormLayout *loginFormLayout;
    QLabel *usernameLabel;
    QLineEdit *usernameLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *submitButton;
    QPushButton *signUpPushButton;
    QMenuBar *menuBar;
    QMenu *menuLogin;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        formLayoutWidget = new QWidget(centralWidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 20, 231, 211));
        loginFormLayout = new QFormLayout(formLayoutWidget);
        loginFormLayout->setSpacing(6);
        loginFormLayout->setContentsMargins(11, 11, 11, 11);
        loginFormLayout->setObjectName(QStringLiteral("loginFormLayout"));
        loginFormLayout->setContentsMargins(0, 0, 0, 0);
        usernameLabel = new QLabel(formLayoutWidget);
        usernameLabel->setObjectName(QStringLiteral("usernameLabel"));

        loginFormLayout->setWidget(0, QFormLayout::LabelRole, usernameLabel);

        usernameLineEdit = new QLineEdit(formLayoutWidget);
        usernameLineEdit->setObjectName(QStringLiteral("usernameLineEdit"));

        loginFormLayout->setWidget(0, QFormLayout::FieldRole, usernameLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        loginFormLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        loginFormLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        submitButton = new QPushButton(formLayoutWidget);
        submitButton->setObjectName(QStringLiteral("submitButton"));

        loginFormLayout->setWidget(2, QFormLayout::FieldRole, submitButton);

        signUpPushButton = new QPushButton(formLayoutWidget);
        signUpPushButton->setObjectName(QStringLiteral("signUpPushButton"));

        loginFormLayout->setWidget(3, QFormLayout::FieldRole, signUpPushButton);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuLogin = new QMenu(menuBar);
        menuLogin->setObjectName(QStringLiteral("menuLogin"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuLogin->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        usernameLabel->setText(QApplication::translate("MainWindow", "Username:", 0));
        passwordLabel->setText(QApplication::translate("MainWindow", "Password:", 0));
        submitButton->setText(QApplication::translate("MainWindow", "sandesh", 0));
        signUpPushButton->setText(QApplication::translate("MainWindow", "SignUp", 0));
        menuLogin->setTitle(QApplication::translate("MainWindow", "Sign In", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
