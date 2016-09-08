#include "detailswindow.h"
#include "ui_detailswindow.h"

DetailsWindow::DetailsWindow(QWidget *parent, Details *d) :
    QMainWindow(parent),
    ui(new Ui::DetailsWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Details");

    onCartDetails = d;
    QString path = "../";
    path = path.append(d->name);
    path = path.append(".jpg");
    qDebug()<<path;

    QPixmap pix(path);
    ui->productImageLabel->setPixmap(pix);
    ui->productImageLabel->setScaledContents(true);

    nameLabel = new QLabel("Name: ");
    nameValueLabel = new QLabel("");

    categoryLabel = new QLabel("Name: ");
    categoryValueLabel = new QLabel("");

    availableInLabel = new QLabel("Name: ");
    availableInValueLabel = new QLabel("");

    stockQuantityLabel = new QLabel("Name: ");
    stockQuantityValueLabel = new QLabel("");

    pricePerUnitLabel = new QLabel("Name: ");
    pricePerUnitValueLabel = new QLabel("");

    descriptionLabel = new QLabel("Name: ");
    descriptionValueLabel = new QLabel("");

    enterQuantityLabel = new QLabel("Enter Quantity: ");
    quantitySpinBox = new QSpinBox();

    nameLabel->setText(QString("Name: "));
    nameValueLabel->setText(d->name);

    categoryLabel->setText(QString("Category: "));
    categoryValueLabel->setText(d->category);

    qDebug()<<d->category;

    availableInLabel->setText(QString("Availability: "));
    availableInValueLabel->setText(d->available);

    stockQuantityLabel->setText(QString("Currently in Stock: "));
    stockQuantityValueLabel->setText(d->stock);

    descriptionLabel->setText(QString("Description: "));
    descriptionValueLabel->setText(d->description);

    pricePerUnitLabel->setText(QString("Price Per Unit: "));
    pricePerUnitValueLabel->setText(d->price);

    QFont fontParameter = nameLabel->font();
    fontParameter.setBold(true);
    fontParameter.setPointSize(12);

    QFont fontValue = nameValueLabel->font();
    fontValue.setPointSize(12);



    nameLabel->setScaledContents(true);
    nameLabel->setFont(fontParameter);
    nameValueLabel->setScaledContents(true);
    nameValueLabel->setFont(fontValue);

    categoryLabel->setScaledContents(true);
    categoryLabel->setFont(fontParameter);
    categoryValueLabel->setScaledContents(true);
    categoryValueLabel->setFont(fontValue);

    availableInLabel->setScaledContents(true);
    availableInLabel->setFont(fontParameter);
    availableInValueLabel->setScaledContents(true);
    availableInValueLabel->setFont(fontValue);

    stockQuantityLabel->setScaledContents(true);
    stockQuantityLabel->setFont(fontParameter);
    stockQuantityValueLabel->setScaledContents(true);
    stockQuantityValueLabel->setFont(fontValue);

    pricePerUnitLabel->setScaledContents(true);
    pricePerUnitLabel->setFont(fontParameter);
    pricePerUnitValueLabel->setScaledContents(true);
    pricePerUnitValueLabel->setFont(fontValue);

    descriptionLabel->setScaledContents(true);
    descriptionLabel->setFont(fontParameter);
    descriptionValueLabel->setScaledContents(true);
    descriptionValueLabel->setFont(fontValue);

    enterQuantityLabel->setScaledContents(true);
    enterQuantityLabel->setFont(fontParameter);
    quantitySpinBox->setFont(fontValue);


    ui->detailsGridLayout->addWidget(nameLabel, 0, 0);
    ui->detailsGridLayout->addWidget(nameValueLabel, 0, 1);
    ui->detailsGridLayout->addWidget(categoryLabel, 1, 0);
    ui->detailsGridLayout->addWidget(categoryValueLabel, 1, 1);
    ui->detailsGridLayout->addWidget(availableInLabel, 2, 0);
    ui->detailsGridLayout->addWidget(availableInValueLabel, 2, 1);
    ui->detailsGridLayout->addWidget(stockQuantityLabel, 3, 0);
    ui->detailsGridLayout->addWidget(stockQuantityValueLabel, 3, 1);
    ui->detailsGridLayout->addWidget(pricePerUnitLabel, 4, 0);
    ui->detailsGridLayout->addWidget(pricePerUnitValueLabel, 4, 1);
    ui->detailsGridLayout->addWidget(descriptionLabel, 5, 0);
    ui->detailsGridLayout->addWidget(descriptionValueLabel, 5, 1);
    ui->detailsGridLayout->addWidget(enterQuantityLabel, 6, 0);
    ui->detailsGridLayout->addWidget(quantitySpinBox, 6, 1);
}

DetailsWindow::~DetailsWindow()
{
    delete ui;
}

void DetailsWindow::on_addCartPushButton_clicked()
{
    QSqlQuery query;
    query.prepare("INSERT INTO shoppingcart(product_name, price, quantity, category) VALUES (:A, :B, :C, :D)");
    qDebug() << onCartDetails->name;
    qDebug() << onCartDetails->price;
    qDebug() << onCartDetails->category;
    query.bindValue(":A", onCartDetails->name.toStdString().c_str());
    query.bindValue(":B", onCartDetails->price.toStdString().c_str());
    int quantityBought = quantitySpinBox->value();
    if(quantityBought > onCartDetails->stock.toInt()){
        QMessageBox msgBox;
        msgBox.setText("Sorry, quantity entered is more than available in stock");
        msgBox.exec();
        return;
    }
    query.bindValue(":C", QString :: number(quantityBought));
    query.bindValue(":D", onCartDetails->category);
    if(query.exec()){
        qDebug()<< "query insert cart success";
    }
    else{
        qDebug()<< "query insert cart not success";
    }
    this->hide();

}
