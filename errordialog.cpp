#include "errordialog.h"
#include "ui_errordialog.h"

ErrorDialog::ErrorDialog(QWidget *parent, QString text) :
    QDialog(parent),
    ui(new Ui::ErrorDialog)
{
    ui->setupUi(this);
    ui->label->setText(text);
}

ErrorDialog::~ErrorDialog()
{
    delete ui;
}
