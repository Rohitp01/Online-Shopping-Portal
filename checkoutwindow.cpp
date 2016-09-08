#include "checkoutwindow.h"
#include "ui_checkoutwindow.h"

CheckoutWindow::CheckoutWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CheckoutWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Checkout");

    ui->paymentOptionComboBox->addItem(tr("Cash On Delievery"));
    ui->paymentOptionComboBox->addItem(tr("Wallet"));
    ui->paymentOptionComboBox->addItem(tr("Net Banking"));

    addressLabel = new QLabel("Address: ");
    addressLineEdit = new QLineEdit();

    ui->addressGridLayout->addWidget(addressLabel, 0, 0);
    ui->addressGridLayout->addWidget(addressLineEdit, 0, 1);

}

CheckoutWindow::~CheckoutWindow()
{
    delete ui;
}

void CheckoutWindow::on_donePushButton_clicked()
{
    this->hide();
}
