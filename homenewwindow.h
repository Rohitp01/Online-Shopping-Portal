#ifndef HOMENEWWINDOW_H
#define HOMENEWWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class HomeNewWindow;
}

class HomeNewWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeNewWindow(QWidget *parent = 0, int id = 0);
    ~HomeNewWindow();

private slots:

    void on_gotocart_clicked();

    void on_electronicpushbutton_clicked();

    void on_bookspushbutton_clicked();

    void on_clothesPushButton_clicked();

    void on_getDetailsPushButton_clicked();

private:
    Ui::HomeNewWindow *ui;
    int productId[6];
    QLabel *labelArray[6];
    QLabel *labelIDArray[6];
    int customerId, displayedItems;
};

#endif // HOMENEWWINDOW_H
