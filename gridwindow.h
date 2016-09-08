#ifndef GRIDWINDOW_H
#define GRIDWINDOW_H

#include <QMainWindow>

namespace Ui {
class GridWindow;
}

class GridWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GridWindow(QWidget *parent = 0);
    ~GridWindow();

private:
    Ui::GridWindow *ui;
};

#endif // GRIDWINDOW_H
