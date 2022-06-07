/********************************************************************************
** Form generated from reading UI file 'admin_login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_LOGIN_H
#define UI_ADMIN_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Admin_login
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *PASSWORD;
    QLineEdit *USERNAME;
    QLineEdit *ADHAAR;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Admin_login)
    {
        if (Admin_login->objectName().isEmpty())
            Admin_login->setObjectName(QString::fromUtf8("Admin_login"));
        Admin_login->resize(1045, 542);
        QFont font;
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        Admin_login->setFont(font);
        Admin_login->setAutoFillBackground(false);
        Admin_login->setStyleSheet(QString::fromUtf8("#Admin_login{\n"
"	color: rgb(255, 255, 255);\n"
"	\n"
"\n"
"border-image: url(:/new/prefix1/ORGBACK.jpg);\n"
"\n"
"}"));
        groupBox = new QGroupBox(Admin_login);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(160, 180, 311, 321));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"	background-color: transparent;	\n"
"	border-radius: 20px;	\n"
"}"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 260, 130, 30));
        QFont font1;
        font1.setPointSize(6);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border: 1.5px solid rgb(35, 67, 103);\n"
"border-radius: 40px;\n"
"colo:rgb(78, 220, 230);\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"background-color: rgb(25, 65, 117);\n"
"}\n"
"\n"
"#pushButton:hover{\n"
"border: 1px solid rgb(73, 115, 212);\n"
"color:rgb(44, 190, 235);\n"
"}\n"
"\n"
""));
        PASSWORD = new QLineEdit(groupBox);
        PASSWORD->setObjectName(QString::fromUtf8("PASSWORD"));
        PASSWORD->setGeometry(QRect(20, 190, 270, 30));
        QFont font2;
        font2.setPointSize(9);
        PASSWORD->setFont(font2);
        PASSWORD->setStyleSheet(QString::fromUtf8("#PASSWORD{\n"
"border: 1.5px solid rgb(35, 67, 103);\n"
"border-radius: 40px;\n"
"color:rgb(78, 220, 230);\n"
"padding-left:40px;\n"
"padding-right:20px;\n"
"background-color: rgb(25, 65, 117);\n"
"}\n"
"#PASSWORD:hover{\n"
"border: 1px solid rgb(73, 115, 212);\n"
"color:rgb(44, 190, 235);\n"
"}\n"
"#PASSWORD:focus{\n"
"border: 1.2px solid rgb(85, 255, 255);\n"
"}\n"
""));
        USERNAME = new QLineEdit(groupBox);
        USERNAME->setObjectName(QString::fromUtf8("USERNAME"));
        USERNAME->setGeometry(QRect(20, 120, 270, 30));
        USERNAME->setFont(font2);
        USERNAME->setStyleSheet(QString::fromUtf8("#USERNAME{\n"
"border: 1.5px solid rgb(35, 67, 103);\n"
"border-radius: 40px;\n"
"color:rgb(78, 220, 230);\n"
"padding-left:40px;\n"
"padding-right:20px;\n"
"background-color: rgb(25, 65, 117);\n"
"}\n"
"#USERNAME:hover{\n"
"border: 1px solid rgb(73, 115, 212);\n"
"}\n"
"#USERNAME:focus{\n"
"border: 1.2px solid rgb(85, 255, 255);\n"
"}\n"
""));
        ADHAAR = new QLineEdit(groupBox);
        ADHAAR->setObjectName(QString::fromUtf8("ADHAAR"));
        ADHAAR->setGeometry(QRect(20, 50, 270, 30));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        ADHAAR->setFont(font3);
        ADHAAR->setStyleSheet(QString::fromUtf8("#ADHAAR{\n"
"border: 1.5px solid rgb(35, 67, 103);\n"
"border-radius: 20px;\n"
"color:rgb(78, 220, 230);\n"
"padding-left:40px;\n"
"padding-right:20px;\n"
"background-color: rgb(25, 65, 117);\n"
"}\n"
"#ADHAAR:hover{\n"
"border: 1px solid rgb(73, 115, 212);\n"
"}\n"
"\n"
"#ADHAAR:focus{\n"
"border: 1.2px solid rgb(85, 255, 255);\n"
"}\n"
"\n"
"\n"
""));
        label = new QLabel(Admin_login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 90, 441, 71));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Swis721 BlkOul BT"));
        font4.setPointSize(34);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"	color: rgb(255, 255, 255);\n"
"}"));
        label_2 = new QLabel(Admin_login);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 490, 431, 41));
        QFont font5;
        font5.setPointSize(13);
        font5.setBold(true);
        font5.setWeight(75);
        label_2->setFont(font5);
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent;"));

        retranslateUi(Admin_login);

        QMetaObject::connectSlotsByName(Admin_login);
    } // setupUi

    void retranslateUi(QDialog *Admin_login)
    {
        Admin_login->setWindowTitle(QApplication::translate("Admin_login", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("Admin_login", "LET ME IN!!!", nullptr));
        PASSWORD->setPlaceholderText(QApplication::translate("Admin_login", "Enter Your Password", nullptr));
        USERNAME->setPlaceholderText(QApplication::translate("Admin_login", "Enter Your Username", nullptr));
        ADHAAR->setText(QString());
        ADHAAR->setPlaceholderText(QApplication::translate("Admin_login", "Enter  Adhaar Card ", nullptr));
        label->setText(QApplication::translate("Admin_login", "LOGIN HERE", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin_login: public Ui_Admin_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_LOGIN_H
