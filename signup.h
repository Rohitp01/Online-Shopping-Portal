#ifndef SIGNUP_H
#define SIGNUP_H

#include <QDialog>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QString>

namespace Ui {
class SignUp;
}

class SignUp : public QDialog
{
    Q_OBJECT

public:
    explicit SignUp(QWidget *parent = 0, QSqlDatabase *dbP = 0, bool isLog = false);
    ~SignUp();

private slots:
    void on_buttonBox_accepted();

private:
    Ui::SignUp *ui;
    QSqlDatabase *db;
};

#endif // SIGNUP_H
