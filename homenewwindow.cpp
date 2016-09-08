#include "homenewwindow.h"
#include "ui_homenewwindow.h"
#include "detailswindow.h"
#include "shoppingcartwindow.h"

HomeNewWindow::HomeNewWindow(QWidget *parent, int id) :
    QMainWindow(parent),
    ui(new Ui::HomeNewWindow)
{
    customerId = id;
    ui->setupUi(this);
    this->setWindowTitle("Home");

    displayedItems = 0;

        //productId[6];
//        QLabel* label1 = new QLabel();
//        label1->setScaledContents(true);
//        QPixmap pix1("../icon1.png");
//        label1->setPixmap(pix1);

//        QLabel* label2 = new QLabel();
//        label2->setScaledContents(true);
//        QPixmap pix2("../icon2.png");
//        label2->setPixmap(pix2);

//        QLabel* label3 = new QLabel();
//        label3->setScaledContents(true);
//        QPixmap pix3("../icon3.png");
//        label3->setPixmap(pix3);

//        QLabel* label4 = new QLabel();
//        label4->setScaledContents(true);
//        QPixmap pix4("../icon4.png");
//        label4->setPixmap(pix4);

//        QLabel* label5 = new QLabel();
//        label5->setScaledContents(true);
//        QPixmap pix5("../icon5.png");
//        label5->setPixmap(pix5);

//        QLabel* label6 = new QLabel();
//        label6->setScaledContents(true);
//        QPixmap pix6("../icon6.png");
//        label6->setPixmap(pix6);

        int k = 0, l = 0;
        for(int i = 0; i < 4; i++)
            for(int j = 0; j < 2; j++)
            {
                if(i%2)
                {
                    QString temp = QString :: number(l+1);
                    labelIDArray[l] = new QLabel(temp);
                    ui->gridLayout->addWidget(labelIDArray[l], i, j);
                    labelIDArray[l]->setScaledContents(true);
                    ++l;
                }
                else{
                    labelArray[k] = new QLabel();
                    ui->gridLayout->addWidget(labelArray[k], i, j);
                    labelArray[k]->setScaledContents(true);
                    ++k;
                }
            }

//        ui->gridLayout->addWidget(label1, 0, 0);
//        ui->gridLayout->addWidget(label2, 0, 1);
//        ui->gridLayout->addWidget(label3,2, 0);
//        ui->gridLayout->addWidget(label4, 2, 1);
//        ui->gridLayout->addWidget(label5, 4, 0);
//        ui->gridLayout->addWidget(label6, 4, 1);

//        QLabel* label7 = new QLabel("One");
//        ui->gridLayout->addWidget(label7, 1, 0);

//        QLabel* label8 = new QLabel("Two");
//        ui->gridLayout->addWidget(label8, 1, 1);

//        QLabel* label9 = new QLabel("Three");
//        ui->gridLayout->addWidget(label9, 3, 0);

//        QLabel* label10 = new QLabel("Four");
//        ui->gridLayout->addWidget(label10, 3, 1);

//        QLabel* label11 = new QLabel("Five");
//        ui->gridLayout->addWidget(label11, 5, 0);

//        QLabel* label12 = new QLabel("Six");
//        ui->gridLayout->addWidget(label12, 5, 0);

}

HomeNewWindow::~HomeNewWindow()
{
    delete ui;
}


void HomeNewWindow::on_gotocart_clicked()
{
    //this->hide();
    ShoppingCartWindow *window = new ShoppingCartWindow(0, customerId);
     window->show();
}

void HomeNewWindow::on_electronicpushbutton_clicked()
{
    displayedItems = 0;
    QSqlQuery query;
    query.prepare("SELECT * FROM product WHERE category = 2");
    if(query.exec()){
        qDebug()<<"product returned";
        int i = 0;
        while(query.next()){
            productId[i] = query.value(0).toInt();
            QString path = "../";
            path = path.append(query.value(1).toString());
            path = path.append(".jpg");
            qDebug()<<path;
            QPixmap pix(path);
            labelArray[i]->setPixmap(pix);
            ++i;
            ++displayedItems;
        }

    }else{
        qDebug()<<"product not returned";
    }


}

void HomeNewWindow::on_bookspushbutton_clicked()
{
    displayedItems = 0;
    QSqlQuery query;
    query.prepare("SELECT * FROM product WHERE category = 1");
    if(query.exec()){
        qDebug()<<"product returned";
        int i = 0;
        while(query.next()){
            productId[i] = query.value(0).toInt();
            QString path = "../";
            path = path.append(query.value(1).toString());
            path = path.append(".jpg");
            qDebug()<<path;
            QPixmap pix(path);
            labelArray[i]->setPixmap(pix);
            ++i;
            ++displayedItems;
        }

    }else{
        qDebug()<<"product not returned";
    }


}

void HomeNewWindow::on_clothesPushButton_clicked()
{
    displayedItems = 0;
    QSqlQuery query;
    query.prepare("SELECT * FROM product WHERE category = 3");
    if(query.exec()){
        qDebug()<<"product returned";
        int i = 0;
        while(query.next()){
            productId[i] = query.value(0).toInt();
            QString path = "../";
            path = path.append(query.value(1).toString());
            path = path.append(".jpg");
            qDebug()<<path;
            QPixmap pix(path);
            labelArray[i]->setPixmap(pix);
            ++i;
            ++displayedItems;
        }

    }else{
        qDebug()<<"product not returned";
    }

}

void HomeNewWindow::on_getDetailsPushButton_clicked()
{
    int choice = ui->spinBox->value();
    if(displayedItems == 0){
        QMessageBox msgBox;
        msgBox.setText("Sorry, please select Clothes/Electronics/Books before entering id for any item");
        msgBox.exec();
        return;
    }
    if(choice > displayedItems){
        QMessageBox msgBox;
        msgBox.setText("Sorry id entered does not present for the items displayed");
        msgBox.exec();
        return;
    }
    QSqlQuery query;
    int id = productId[choice-1];
    query.prepare("SELECT * FROM product WHERE product_id = '"+QString::number(id)+"'");
    if(query.exec()){
        qDebug()<<"Query successful";
    }else{
        qDebug()<<"Query not successful";
        exit(1);
    }
    query.next();
    Details *d = new Details;
    d->name = query.value(1).toString();
    d->price = query.value(2).toString();
    d->stock = query.value(3).toString();
    if(query.value(3).Int > 0)
        d->available = "Yes";
    else
        d->available = "No";
    QString cat = query.value(4).toString();
    if(cat.compare(cat,"1", Qt::CaseInsensitive) == 0){
        d->category = "Book";
    }
    else if(cat.compare(cat,"2", Qt::CaseInsensitive) == 0){
        d->category = "Electronics";
    }
    else{
        d->category = "Clothes";
    }

    d->description = query.value(5).toString();

    DetailsWindow *window = new DetailsWindow(0, d);
    window->show();

}
