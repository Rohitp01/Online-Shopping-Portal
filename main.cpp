#include "shoppingcartwindow.h"
#include "checkoutwindow.h"
#include "detailswindow.h"
#include "homenewwindow.h"
#include "homewindow.h"
#include "signinwindow.h"
#include <QApplication>
#include <QSqlDatabase>
#include <QStringList>
#include <QtDebug>
#include <QtSql>
#include <QSqlDatabase>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    //db.setHostName("192.168.0.106");

    db.setPort(3306);
    db.setDatabaseName("wms");
    db.setUserName("root");
    db.setPassword("");

    if(!db.open())
    {
//        QMessageBox::critical(0, QObject::tr("Database error"),
//                              db.lastError().text());
//        qDebug()<<QString("database not access");
    }


    SignInWindow w(0, &db, false);

  //  HomeWindow w;
//    HomeNewWindow w;
   //DetailsWindow w;
    //ShoppingCartWindow w;
  //  CheckoutWindow w;
    w.show();
    qDebug() << QSqlDatabase::drivers();

    return a.exec();
}
