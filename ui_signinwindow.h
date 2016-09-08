/********************************************************************************
** Form generated from reading UI file 'signinwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWINDOW_H
#define UI_SIGNINWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignInWindow
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *emailLabel;
    QLineEdit *emailLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QPushButton *signInPushButton;
    QPushButton *signUpButton;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menuSignIn;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SignInWindow)
    {
        if (SignInWindow->objectName().isEmpty())
            SignInWindow->setObjectName(QStringLiteral("SignInWindow"));
        SignInWindow->resize(800, 600);
        centralwidget = new QWidget(SignInWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(240, 70, 160, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        emailLabel = new QLabel(formLayoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, emailLabel);

        emailLineEdit = new QLineEdit(formLayoutWidget);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, emailLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordLineEdit);

        signInPushButton = new QPushButton(centralwidget);
        signInPushButton->setObjectName(QStringLiteral("signInPushButton"));
        signInPushButton->setGeometry(QRect(300, 140, 75, 23));
        signUpButton = new QPushButton(centralwidget);
        signUpButton->setObjectName(QStringLiteral("signUpButton"));
        signUpButton->setGeometry(QRect(300, 170, 75, 23));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 10, 571, 41));
        QFont font;
        font.setFamily(QStringLiteral("Times New Roman"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        SignInWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SignInWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuSignIn = new QMenu(menubar);
        menuSignIn->setObjectName(QStringLiteral("menuSignIn"));
        SignInWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SignInWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SignInWindow->setStatusBar(statusbar);

        menubar->addAction(menuSignIn->menuAction());

        retranslateUi(SignInWindow);

        QMetaObject::connectSlotsByName(SignInWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SignInWindow)
    {
        SignInWindow->setWindowTitle(QApplication::translate("SignInWindow", "SignIn", 0));
        emailLabel->setText(QApplication::translate("SignInWindow", "EmailId: ", 0));
        passwordLabel->setText(QApplication::translate("SignInWindow", "Password", 0));
        signInPushButton->setText(QApplication::translate("SignInWindow", "SignIn", 0));
        signUpButton->setText(QApplication::translate("SignInWindow", "SignUp", 0));
        label->setText(QApplication::translate("SignInWindow", "                         WholeSale Management System", 0));
        menuSignIn->setTitle(QApplication::translate("SignInWindow", "SignIn", 0));
    } // retranslateUi

};

namespace Ui {
    class SignInWindow: public Ui_SignInWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWINDOW_H
