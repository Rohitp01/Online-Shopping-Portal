#include "signinwindow.h"
#include "ui_signinwindow.h"
#include "signup.h"
#include "errordialog.h"
#include "homenewwindow.h"
#include <QDebug>

SignInWindow::SignInWindow(QWidget *parent, QSqlDatabase *dbP, bool isLog) :
    QMainWindow(parent),
    ui(new Ui::SignInWindow)
{
    this->setWindowTitle("Sign In");
    ui->setupUi(this);
    db = dbP;
    //QObject :: connect(ui->signInPushButton, SIGNAL(clicked()), this, SLOT(on_signInPushButton_clicked()));
}

SignInWindow::~SignInWindow()
{
    delete ui;
}

void SignInWindow::on_signUpButton_clicked()
{
    this->hide();
    SignUp signUp(0, db, false);
    signUp.setModal(true);
    signUp.exec();
}

void SignInWindow::on_signInPushButton_clicked()
{
    QString emailId, password;
    emailId = ui->emailLineEdit->text();
    password = ui->passwordLineEdit->text();

    QSqlQuery query;
    if(query.exec("SELECT * FROM customer WHERE email_id = '" + emailId + "' and password = '" + password + "'")){
        //if(query.record().count())       ;
        qDebug() << "query success login";
        QSqlQuery getId("SELECT customer_id FROM customer WHERE email_id = '" + emailId + "' and password = '" + password + "'");
        int field = getId.record().indexOf("customer_id");
        getId.next();
        int id = getId.value(field).toInt();

        qDebug()<<QString :: number(id);

        HomeNewWindow *hnw = new HomeNewWindow(0, id);
        this->hide();
        hnw->show();
    }
    else{
        qDebug() << "query failed";
        ErrorDialog e(0, QString("Incorrect username or password"));
        e.setModal(true);
        e.exec();
    }


}
