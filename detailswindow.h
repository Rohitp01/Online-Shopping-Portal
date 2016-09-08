#ifndef DETAILSWINDOW_H
#define DETAILSWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QFont>
#include <QSpinBox>
#include <QSqlQuery>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class DetailsWindow;
}


struct Details{
     QString name, category, available, stock, price, description;
};

class DetailsWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit DetailsWindow(QWidget *parent = 0, Details *d = 0);
    ~DetailsWindow();

private slots:
    void on_addCartPushButton_clicked();

private:
    Ui::DetailsWindow *ui;
    QLabel *nameLabel, *categoryLabel, *availableInLabel, *stockQuantityLabel, *pricePerUnitLabel, *descriptionLabel;
    QLabel *nameValueLabel, *categoryValueLabel, *availableInValueLabel, *stockQuantityValueLabel, *pricePerUnitValueLabel, *descriptionValueLabel;
    QLabel *enterQuantityLabel;
    QSpinBox *quantitySpinBox;
    Details *onCartDetails;
};


#endif // DETAILSWINDOW_H
