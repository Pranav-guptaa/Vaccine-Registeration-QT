#include "admin_login.h"
#include "ui_admin_login.h"
#include <QDesktopServices>
#include <QUrl>
Admin_login::Admin_login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin_login)
{
    ui->setupUi(this);
    ui->label_2->setAlignment(Qt::AlignCenter);
}

Admin_login::~Admin_login()
{
    delete ui;
}
QString Ausername = "admin", Apassword = "admin@123",Aaadhar = "123456789";
void Admin_login::on_pushButton_clicked()
{
   QString username , password,aadhar;
   username = ui->USERNAME->text();
   password=ui->PASSWORD->text();
   aadhar = ui->ADHAAR->text();

   if(username == Ausername && Apassword == password && aadhar== Aaadhar){
    ui->label_2->setText("Welcome admin...!");

    QString link = "https://extendsclass.com/sqlite-browser.html#";
    QDesktopServices::openUrl(QUrl(link));
   }
   else{
       ui->label_2->setText("No such data found...!");
   }
}

