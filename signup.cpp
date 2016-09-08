#include "signup.h"
#include "signinwindow.h"
#include "ui_signup.h"
#include <QDebug>
SignUp::SignUp(QWidget *parent, QSqlDatabase *dbP, bool isLog) :
    QDialog(parent),
    ui(new Ui::SignUp)
{
    this->setWindowTitle("Sign Up");

    ui->setupUi(this);

    db = dbP;

//    db = QSqlDatabase::addDatabase("QMYSQL");
//    db.setHostName("localhost");
//    //db.setHostName("192.168.0.106");

//    db.setPort(3306);
//    db.setDatabaseName("wms");
//    db.setUserName("root");
//    db.setPassword("");

    if(!db->open())
    {
//        QMessageBox::critical(0, QObject::tr("Database error"),
//                              db.lastError().text());
//        qDebug()<<QString("database not access");
    }



}

SignUp::~SignUp()
{
    delete ui;
}

void SignUp::on_buttonBox_accepted()
{
  //  qDebug()<<QString("SignUp clicked");
    QString firstname, lastname, address, phoneNo, emailId, password;
    firstname = ui->firstNameLineEdit->text();
    lastname = ui->lastNameLineEdit->text();
    address = ui->addressLineEdit->text();
    phoneNo = ui->addressLineEdit->text();
    emailId = ui->emailIdLineEdit->text();
    password = ui->passwordLineEdit->text();

    QSqlQuery query;
    query.prepare("INSERT INTO customer(firstname, lastname, email_id, phone_no, address, password) VALUES (:A,:B,:C,:D,:E,:F)");
    query.bindValue(":A", firstname.toStdString().c_str());
    query.bindValue(":B", lastname.toStdString().c_str());
    query.bindValue(":C", emailId.toStdString().c_str());
    query.bindValue(":D",phoneNo.toStdString().c_str());
    query.bindValue(":E", address.toStdString().c_str());
    query.bindValue(":F", password.toStdString().c_str());


    if(query.exec()){
        qDebug()<<"executed query";
    }
    else{
        qDebug()<<"not executed query";
    }

    SignInWindow *signIn = new SignInWindow();
    signIn->show();

}
