#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QDesktopWidget>
#include<QTextEdit>
#include<QFormLayout>
#include<QLineEdit>
#include<QLabel>
#include<QtSql/QSqlDatabase>
#include<QtGui>
#include<QPushButton>
#include<QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QUrlQuery>
#include <QtSql/QSqlQuery>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_submitButton_clicked();
    void onNetworkResponse(QNetworkReply*);

    void on_signUpPushButton_clicked();

signals:
    void loggedIn(QString name, QString owner, QString address, int balance, int no_of_emp);

private:
    Ui::MainWindow *ui;
    QDesktopWidget *desktopWidget;
    QFormLayout *loginFormLayout;
    QLabel *userNameLabel;
    QLabel *passWordLabel;
    QLineEdit *userNameLineEdit;
    QLineEdit *passwordLineEdit;
    QSqlDatabase db;
    QPushButton *submitPushButton;
    QUrlQuery postData;
    QNetworkAccessManager *qnam;

};

#endif // MAINWINDOW_H
