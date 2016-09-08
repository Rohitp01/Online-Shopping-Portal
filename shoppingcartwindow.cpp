#include "shoppingcartwindow.h"
#include "checkoutwindow.h"
#include "ui_shoppingcartwindow.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
#include <QSqlQuery>


ShoppingCartWindow::ShoppingCartWindow(QWidget *parent, int customerId) :
    QMainWindow(parent),
    ui(new Ui::ShoppingCartWindow)
{
    this->setWindowTitle("Your shopping cart");
    userId = customerId;
    int itemNumber = 0;
    ui->setupUi(this);
//    ui->cartContentTableWidget->setColumnCount(5);
//    ui->cartContentTableWidget->setRowCount(itemNumber);
//    QStringList tableHeader;
//    tableHeader<<"Name "<<"Category "<<"Quantity "<<"Price "<<"Cost ";
//    ui->cartContentTableWidget->setHorizontalHeaderLabels(tableHeader);

//    QSqlQuery query;
//    //query.prepare("SELECT * FROM shoppingcart");
//    if(query.exec("SELECT * FROM shoppingcart")){
//        query.first();
//        qDebug()<<"shopping cart fetch success";
//        int i = 0;
//        //qDebug()<<QString :: number(query.result);
//        qDebug()<<query.result();
//        do{
//            QTableWidgetItem *tableWidgetItem1 = new QTableWidgetItem();
//            tableWidgetItem1->setText(query.value(0).toString());
//            ui->cartContentTableWidget->setItem(i, 0, tableWidgetItem1);

//            QTableWidgetItem *tableWidgetItem2 = new QTableWidgetItem();
//            tableWidgetItem2->setText(query.value(4).toString());
//            ui->cartContentTableWidget->setItem(i, 1, tableWidgetItem2);

//            QTableWidgetItem *tableWidgetItem3 = new QTableWidgetItem();
//            tableWidgetItem3->setText(query.value(3).toString());
//            ui->cartContentTableWidget->setItem(i, 2, tableWidgetItem3);

//            QTableWidgetItem *tableWidgetItem4 = new QTableWidgetItem();
//            tableWidgetItem4->setText(query.value(2).toString());
//            ui->cartContentTableWidget->setItem(i, 3, tableWidgetItem4);


//            QTableWidgetItem *tableWidgetItem5 = new QTableWidgetItem();
////            int p = QString :: number(query.value(2).toString());
////            int q = QString :: number(query.value(3).toString());
//            int p = query.value(2).toInt();
//            int q = query.value(3).toInt();
//            tableWidgetItem5->setText(QString :: number(p*q));
//            ui->cartContentTableWidget->setItem(i, 3, tableWidgetItem5);


//            ++i;
//        }
//        while(query.next());
//    }
//    else{
//        qDebug()<<"shopping cart fetch fail";
//    }

    //ui->tableView->

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM shoppingcart");
    ui->tableView->setModel(model);

    int totalCost = 0;
    QSqlQuery query("SELECT price, quantity FROM shoppingcart");
    while(query.next())
    {
        totalCost += (query.value(0).toInt()*query.value(1).toInt());
    }



    QFont totalCostFont = ui->totalCostLabel->font();
    totalCostFont.setBold(true);
    totalCostFont.setPointSize(12);


    float cost = 0.0;
    std::ostringstream ss;
    ss << cost;
    std::string s(ss.str());

    s = "Total Cost: " + (QString :: number(totalCost)).toStdString();
    ui->totalCostLabel->setText(s.c_str());
    ui->totalCostLabel->setFont(totalCostFont);
}

ShoppingCartWindow::~ShoppingCartWindow()
{
    QSqlQuery query("TRUNCATE shoppingcart");
    delete ui;
}


void ShoppingCartWindow::on_pushButton_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    int index = ui->spinBoxshoppingWindow->value();
    QSqlQuery checkId("SELECT COUNT(shoppingcart_id) FROM shoppingcart WHERE shoppingcart_id = "+QString::number(index));
    checkId.next();
    if(checkId.value(0).toInt() == 0){
        QMessageBox msgBox;
        msgBox.setText("Sorry id entered is not present inside your cart");
        msgBox.exec();
        return;
    }
//    if(checkId.exec()){
//        QMessageBox msgBox;
//        msgBox.setText("Sorry id entered is not present inside your cart");
//        msgBox.exec();
//        return;
//    }
    QSqlQuery query("DELETE FROM shoppingcart WHERE shoppingcart_id = "+QString::number(index));
    if(query.exec()){
        qDebug()<<" DELETE FROM shoppingcart WHERE shoppingcart_id ="+ QString::number(index);
        model->setQuery("SELECT * FROM shoppingcart");
        ui->tableView->setModel(model);


        float cost = 0.0;
        std::ostringstream ss;
        ss << cost;
        std::string s(ss.str());


        int totalCost = 0;
        QSqlQuery query("SELECT price, quantity FROM shoppingcart");
        while(query.next())
        {
            totalCost += (query.value(0).toInt()*query.value(1).toInt());
        }

        s = "Total Cost: " + (QString :: number(totalCost)).toStdString();
        ui->totalCostLabel->setText(s.c_str());
    }
    else{

        qDebug()<<"fail in delete of cart";
    }

}

void ShoppingCartWindow::on_ShoppingCartWindow_destroyed()
{
    QSqlQuery query;
    query.prepare("DELETE FROM shoppingcart WHERE 1");
    if(query.exec())
        qDebug()<<"cancel success";
    else
        qDebug()<<"cancel fail";
    this->hide();
    qDebug()<<"destroyed window";
}

void ShoppingCartWindow :: closeEvent(QCloseEvent *event){
    QSqlQuery query;
    query.prepare("DELETE FROM shoppingcart WHERE 1");
    if(query.exec())
        qDebug()<<"cancel success";
    else
        qDebug()<<"cancel fail";
    this->hide();
    qDebug()<<"destroyed window";
}

void ShoppingCartWindow::on_cancelPushButton_clicked()
{
    QSqlQuery query;
    query.prepare("DELETE FROM shoppingcart WHERE 1");
    if(query.exec())
        qDebug()<<"cancel success";
    else
        qDebug()<<"cancel fail";
    this->hide();
}

void ShoppingCartWindow::on_checkoutPushButton_clicked()
{
    this->hide();
    QSqlQuery query("SELECT * FROM shoppingcart");
    while(query.next())
    {
        int fieldNoQ = query.record().indexOf("product_name");
        int fieldNoQuantity = query.record().indexOf("quantity");
        int fieldPrice = query.record().indexOf("price");

        QSqlQuery storeOrder;
        storeOrder.prepare("INSERT INTO customer_order (customer_id, product_name, price, quantity) VALUES (:A, :B, :C, :D)");
        storeOrder.bindValue(":A", userId);
        storeOrder.bindValue(":B", query.value(fieldNoQ).toString());
        storeOrder.bindValue(":C", query.value(fieldPrice).toString());
        storeOrder.bindValue(":D", query.value(fieldNoQuantity).toString());

        storeOrder.exec();

        qDebug()<<"id "<<QString :: number(userId);
        qDebug()<<"name "<<query.value(fieldNoQ).toString();
        qDebug()<<"price "<<query.value(fieldPrice).toString();
        qDebug()<<"quantity "<<query.value(fieldNoQuantity).toString();

        QSqlQuery access("SELECT * FROM product WHERE product_name = '"+query.value(fieldNoQ).toString()+"'");
        int fieldNoA = access.record().indexOf("stock_quantity");
        access.next();

        int temp = access.value(fieldNoA).toInt();
//        qDebug() << "temp before "+QString :: number(temp);
        temp -= query.value(fieldNoQuantity).toInt();
//        qDebug() << "temp after "+QString :: number(temp);

        QSqlQuery change;
        change.prepare("UPDATE product SET stock_quantity = "+QString::number(temp)+" WHERE product_name = '"+query.value(fieldNoQ).toString()+"'");
        change.exec();
    }
    CheckoutWindow *check = new CheckoutWindow();
    check->show();
    QSqlQuery cartDel;
    cartDel.prepare("DELETE FROM shoppingcart WHERE 1");
    cartDel.exec();
}
