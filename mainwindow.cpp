#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QtCore>
#include <QtSql/QSqlError>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSql>
#include "signup.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("WMS");
    db.setUserName("root");
    db.setPassword("");

    if(!db.open())
    {
        QMessageBox::critical(0, QObject::tr("Database error"),
                              db.lastError().text());
    }

    ui->setupUi(this);
    desktopWidget = new QDesktopWidget();
    loginFormLayout = ui->loginFormLayout;

    userNameLineEdit = ui->usernameLineEdit;
    passwordLineEdit = ui->passwordLineEdit;
    submitPushButton = ui->submitButton;
//    userNameLabel = new QLabel("Username: ");
//    passWordLabel = new QLabel("Password: ");
//    userNameLineEdit = new QLineEdit();
//    passwordLineEdit = new QLineEdit();

    int width = desktopWidget->width()*0.7;
    int height = desktopWidget->height()*0.7;
    this->resize(width, height);

//    loginFormLayout->addRow(userNameLabel, userNameLineEdit);
//    loginFormLayout->addRow(passWordLabel, passwordLineEdit);
    qnam = new QNetworkAccessManager(this);
    QObject :: connect(submitPushButton, SIGNAL(clicked), this, SLOT(on_submitButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_submitButton_clicked()
{
     QString userName = userNameLineEdit->text();
     QString password = passwordLineEdit->text();
//     QNetworkRequest request(QUrl("http://localhost/login.php"));
//     request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
//     //connect(nam, SIGNAL(finished(QNetworkReply*)), this, SLOT(onNetworkResponse(QNetworkReply*)));
//     QObject :: connect(qnam, SIGNAL(finished(QNetworkReply*)), this, SLOT(onNetworkResponse(QNetworkReply*)));
//     QNetworkReply *reply = qnam->post(request, postData.toString(QUrl::FullyEncoded).toUtf8());

    QString s = "SELECT * FROM user WHERE username = :valA AND password = :valB;";
    QSqlQuery query(db);
    query.prepare(s);
    query.bindValue(":valA",userName);
    query.bindValue(":valB", password);
    query.exec();


    while(query.next())
    {
        qDebug()<<QString("successfull");
    }
}

void MainWindow::onNetworkResponse(QNetworkReply *re)
{

//    QString strReply = QObject::tr(re->readAll());
////    qDebug() << strReply;
//    if(strReply.length()>=1){
//        QString name, password;
//        QJsonParseError *error{nullptr};
//        QJsonDocument jsonResponse = QJsonDocument::fromJson(strReply.toUtf8(), error);
//        if(error)
//            qDebug()<< error->errorString();
//        QJsonObject jsonObject = jsonResponse.object();
//        //qDebug() << jsonObject.keys();

//        QJsonArray jsonArray = jsonObject["login"].toArray();

//        //qDebug() << jsonObject["login"].toArray();
//        QJsonObject obj = jsonArray[0].toObject();
////        qDebug()<<obj.value("status").toString();
//        if(obj.value("status").toString().compare("Success")==0){
//            qDebug() << "in If";
////            isLogged = true;
////            userName = user;
////            ui->labelWelcome->setText("Welcome "+userName);
////            ui->lineEditPassword->setReadOnly(isLogged);
////            ui->lineEditUserName->setReadOnly(isLogged);
////            ui->lineEditPassword->setReadOnly(isLogged);
////            ui->lineEditPassword->setText("");
////            ui->lineEditUserName->setText("");
////            ui->pushButtonLogin->setText("LogOut");
////            name = obj.value("name").toString();
////            owner = obj.value("owner").toString();
////            address = obj.value("address").toString();
////            balance = obj.value("balance").toString().toInt();
////            no_of_emp = obj.value("no_of_emp").toString().toInt();
//////            qDebug() << tr("balance: ")+obj.value("balance").toString();
//////            qDebug() << tr("no_of_emp: ")+ obj.value("no_of_emp").toString();
////            emit loggedIn(name, owner, address, balance, no_of_emp);
////            //qDebug() << (MainWindow.userName);
//        }
//        else if(obj.value("status").toString().compare("Incorrect Password") == 0){
////            ui->lineEditPassword->setText("");
////            QMessageBox messageBox;
////            messageBox.critical(0,"Error","Wrong username or password");
////            messageBox.setFixedSize(500,200);
//            qDebug() << "else If";
//        }
//    }

}

void MainWindow::on_signUpPushButton_clicked()
{
//    this->hide();
//    SignUp signUpWindow;
//    signUpWindow.setModal(true);
//    signUpWindow.exec();
}
