#ifndef CHECKOUTWINDOW_H
#define CHECKOUTWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QLineEdit>

namespace Ui {
class CheckoutWindow;
}

class CheckoutWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CheckoutWindow(QWidget *parent = 0);
    ~CheckoutWindow();

private slots:
    void on_donePushButton_clicked();

private:
    Ui::CheckoutWindow *ui;
    QLabel *addressLabel;
    QLineEdit *addressLineEdit;
};

#endif // CHECKOUTWINDOW_H
