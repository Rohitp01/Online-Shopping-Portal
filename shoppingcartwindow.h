#ifndef SHOPPINGCARTWINDOW_H
#define SHOPPINGCARTWINDOW_H

#include <QMainWindow>
#include <QHeaderView>
#include <QDebug>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QString>
#include <QSqlResult>
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QCloseEvent>
#include <QMessageBox>

namespace Ui {
class ShoppingCartWindow;
}

class ShoppingCartWindow : public QMainWindow, public QCloseEvent
{
    Q_OBJECT

public:
    explicit ShoppingCartWindow(QWidget *parent = 0, int customerId = 0);
    void closeEvent(QCloseEvent *event);
    ~ShoppingCartWindow();

private slots:

    void on_pushButton_clicked();

    void on_ShoppingCartWindow_destroyed();

    void on_cancelPushButton_clicked();

    void on_checkoutPushButton_clicked();



private:
    Ui::ShoppingCartWindow *ui;
    int userId;

};

#endif // SHOPPINGCARTWINDOW_H
