#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "secdialog.h"
#include "admin_login.h"
#include "userlogin.h"
#include <QDesktopServices>
#include <QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Registration_clicked()
{
    SecDialog sec;
    sec.setModal(true);
    sec.exec();
}


void MainWindow::on_Admin_login_clicked()
{
    class UserLogin user;
    user.setModal(true);
    user.exec();
}


void MainWindow::on_Admin_login_2_clicked()
{
    Admin_login admin;
    admin.setModal(true);
    admin.exec();
}

void MainWindow::on_pushButton_clicked()
{
   QString link="http://localhost/training/cpp/api.php";
   QDesktopServices::openUrl(QUrl(link));
}

