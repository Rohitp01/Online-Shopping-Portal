#include "gridwindow.h"
#include "ui_gridwindow.h"

GridWindow::GridWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::GridWindow)
{
    ui->setupUi(this);
}

GridWindow::~GridWindow()
{
    delete ui;
}
