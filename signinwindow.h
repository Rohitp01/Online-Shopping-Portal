#ifndef SIGNINWINDOW_H
#define SIGNINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlResult>
#include <QSqlRecord>

namespace Ui {
class SignInWindow;
}

class SignInWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SignInWindow(QWidget *parent = 0, QSqlDatabase *dbP = 0, bool isLog = false);
    ~SignInWindow();

private slots:
    void on_signUpButton_clicked();

    void on_signInPushButton_clicked();

private:
    Ui::SignInWindow *ui;
    QSqlDatabase *db;
};

#endif // SIGNINWINDOW_H
