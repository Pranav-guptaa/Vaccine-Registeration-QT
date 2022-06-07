#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include<QtSql>
#include<QtDebug>
#include<QFileInfo>

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SecDialog *ui;
     QSqlDatabase mydb;
};

#endif // SECDIALOG_H
