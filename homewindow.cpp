#include "homewindow.h"
#include "ui_homewindow.h"

HomeWindow::HomeWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HomeWindow)
{
    ui->setupUi(this);

    ui->imageListWidget->setViewMode(QListWidget :: IconMode);
    ui->imageListWidget->setIconSize(QSize(70, 70));
    ui->imageListWidget->setResizeMode(QListWidget :: Adjust);

    QListWidgetItem *icon1 = new QListWidgetItem(QIcon("../icon1.jpg"), "icon1");
    icon1->setSizeHint(QSize(100, 100));
    ui->imageListWidget->addItem(icon1);
    //ui->imageListWidget->addItem(new QListWidgetItem(QIcon("../icon1.jpg"), "icon1"));
    QListWidgetItem *icon2 = new QListWidgetItem(QIcon("../icon2.jpg"), "icon1");
    icon2->setSizeHint(QSize(100, 100));
    ui->imageListWidget->addItem(icon2);
    //ui->imageListWidget->addItem(new QListWidgetItem(QIcon("../icon2.jpg"), "icon2"));
    QListWidgetItem *icon3 = new QListWidgetItem(QIcon("../icon3.jpg"), "icon1");
    icon3->setSizeHint(QSize(100, 100));
    ui->imageListWidget->addItem(icon3);
    //ui->imageListWidget->addItem(new QListWidgetItem(QIcon("../icon3.jpg"), "icon3"));
    QListWidgetItem *icon4 = new QListWidgetItem(QIcon("../icon4.jpg"), "icon1");
    icon4->setSizeHint(QSize(100, 100));
    ui->imageListWidget->addItem(icon4);
    //ui->imageListWidget->addItem(new QListWidgetItem(QIcon("../icon4.jpg"), "icon4"));
    QListWidgetItem *icon5 = new QListWidgetItem(QIcon("../icon5.jpg"), "icon1");
    icon5->setSizeHint(QSize(100, 100));
    ui->imageListWidget->addItem(icon5);
    //ui->imageListWidget->addItem(new QListWidgetItem(QIcon("../icon5.jpg"), "icon5"));
    QListWidgetItem *icon6 = new QListWidgetItem(QIcon("../icon6.jpg"), "icon1");
    icon6->setSizeHint(QSize(100, 100));
    ui->imageListWidget->addItem(icon6);
    //ui->imageListWidget->addItem(new QListWidgetItem(QIcon("../icon6.jpg"), "icon6"));

}

HomeWindow::~HomeWindow()
{
    delete ui;
}

void HomeWindow::on_clothesPushButton_clicked()
{

}
