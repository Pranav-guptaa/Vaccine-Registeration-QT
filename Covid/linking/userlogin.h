#ifndef USERLOGIN_H
#define USERLOGIN_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>


namespace Ui {
class UserLogin;
}

class UserLogin : public QDialog
{
    Q_OBJECT

public:
    explicit UserLogin(QWidget *parent = nullptr);
    ~UserLogin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::UserLogin *ui;
     QSqlDatabase mydb;
};

#endif // USERLOGIN_H
