#include "userlogin.h"
#include "ui_userlogin.h"
#include <QDesktopServices>
#include <QUrl>
UserLogin::UserLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UserLogin)
{
    ui->setupUi(this);
    ui->label_5->setAlignment(Qt::AlignCenter);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("F:/SQL lite/register.db");
    if(!mydb.open())
        ui->label_5->setText("Database failed connection");
    else
        ui->label_5->setText("Database connected...!");
}

UserLogin::~UserLogin()
{
    delete ui;
}

void UserLogin::on_pushButton_clicked()
{
    QString username , password;
    username = ui->lineEdit_2->text();
    password= ui->lineEdit_3->text();
    if(!mydb.isOpen()){
        qDebug()<<"Database failed...!";
        return;
    }

    QSqlQuery qry;
    if(qry.exec("select * from register where username = '"+username+"'and password = '"+password+"'")){
        int count =0;
        while(qry.next()){
            count++;
        }
        if(count==1){
            ui->label_5->setText("Log in sucessfully..!");
            QString link = "https://www.mygov.in/covid-19/";
            QDesktopServices::openUrl(QUrl(link));
        }
        if(count<1){
            ui->label_5->setText("Deatails are Required..! or Username or password not correct...!");
        }
    }


}

