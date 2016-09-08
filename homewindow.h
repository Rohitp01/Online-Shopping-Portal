#ifndef HOMEWINDOW_H
#define HOMEWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>

namespace Ui {
class HomeWindow;
}

class HomeWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HomeWindow(QWidget *parent = 0);
    ~HomeWindow();

private slots:
    void on_clothesPushButton_clicked();

private:
    Ui::HomeWindow *ui;
};

#endif // HOMEWINDOW_H
