/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignUp
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *firstNameLabel;
    QLineEdit *firstNameLineEdit;
    QLabel *lastNameLabel;
    QLineEdit *lastNameLineEdit;
    QLabel *contactNoLabel;
    QLineEdit *contactNoLineEdit;
    QLabel *emailIdLabel;
    QLineEdit *emailIdLineEdit;
    QLabel *addressLabel;
    QLineEdit *addressLineEdit;
    QLabel *passwordLabel;
    QLineEdit *passwordLineEdit;
    QLabel *confirmPasswordLabel;
    QLineEdit *confirmPasswordLineEdit;

    void setupUi(QDialog *SignUp)
    {
        if (SignUp->objectName().isEmpty())
            SignUp->setObjectName(QStringLiteral("SignUp"));
        SignUp->resize(400, 300);
        buttonBox = new QDialogButtonBox(SignUp);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(SignUp);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(70, 20, 251, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        firstNameLabel = new QLabel(formLayoutWidget);
        firstNameLabel->setObjectName(QStringLiteral("firstNameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, firstNameLabel);

        firstNameLineEdit = new QLineEdit(formLayoutWidget);
        firstNameLineEdit->setObjectName(QStringLiteral("firstNameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, firstNameLineEdit);

        lastNameLabel = new QLabel(formLayoutWidget);
        lastNameLabel->setObjectName(QStringLiteral("lastNameLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lastNameLabel);

        lastNameLineEdit = new QLineEdit(formLayoutWidget);
        lastNameLineEdit->setObjectName(QStringLiteral("lastNameLineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lastNameLineEdit);

        contactNoLabel = new QLabel(formLayoutWidget);
        contactNoLabel->setObjectName(QStringLiteral("contactNoLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, contactNoLabel);

        contactNoLineEdit = new QLineEdit(formLayoutWidget);
        contactNoLineEdit->setObjectName(QStringLiteral("contactNoLineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, contactNoLineEdit);

        emailIdLabel = new QLabel(formLayoutWidget);
        emailIdLabel->setObjectName(QStringLiteral("emailIdLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, emailIdLabel);

        emailIdLineEdit = new QLineEdit(formLayoutWidget);
        emailIdLineEdit->setObjectName(QStringLiteral("emailIdLineEdit"));

        formLayout->setWidget(3, QFormLayout::FieldRole, emailIdLineEdit);

        addressLabel = new QLabel(formLayoutWidget);
        addressLabel->setObjectName(QStringLiteral("addressLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, addressLabel);

        addressLineEdit = new QLineEdit(formLayoutWidget);
        addressLineEdit->setObjectName(QStringLiteral("addressLineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, addressLineEdit);

        passwordLabel = new QLabel(formLayoutWidget);
        passwordLabel->setObjectName(QStringLiteral("passwordLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, passwordLabel);

        passwordLineEdit = new QLineEdit(formLayoutWidget);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(5, QFormLayout::FieldRole, passwordLineEdit);

        confirmPasswordLabel = new QLabel(formLayoutWidget);
        confirmPasswordLabel->setObjectName(QStringLiteral("confirmPasswordLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, confirmPasswordLabel);

        confirmPasswordLineEdit = new QLineEdit(formLayoutWidget);
        confirmPasswordLineEdit->setObjectName(QStringLiteral("confirmPasswordLineEdit"));
        confirmPasswordLineEdit->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(6, QFormLayout::FieldRole, confirmPasswordLineEdit);


        retranslateUi(SignUp);
        QObject::connect(buttonBox, SIGNAL(accepted()), SignUp, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SignUp, SLOT(reject()));

        QMetaObject::connectSlotsByName(SignUp);
    } // setupUi

    void retranslateUi(QDialog *SignUp)
    {
        SignUp->setWindowTitle(QApplication::translate("SignUp", "Sign Up", 0));
        firstNameLabel->setText(QApplication::translate("SignUp", "FirstName", 0));
        lastNameLabel->setText(QApplication::translate("SignUp", "LastName", 0));
        contactNoLabel->setText(QApplication::translate("SignUp", "ContactNo", 0));
        emailIdLabel->setText(QApplication::translate("SignUp", "EmailId", 0));
        addressLabel->setText(QApplication::translate("SignUp", "Address", 0));
        passwordLabel->setText(QApplication::translate("SignUp", "Password", 0));
        confirmPasswordLabel->setText(QApplication::translate("SignUp", "ConfirmPassword", 0));
    } // retranslateUi

};

namespace Ui {
    class SignUp: public Ui_SignUp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
