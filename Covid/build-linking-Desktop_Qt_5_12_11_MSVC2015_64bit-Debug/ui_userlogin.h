/********************************************************************************
** Form generated from reading UI file 'userlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERLOGIN_H
#define UI_USERLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserLogin
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *label_4;
    QWidget *widget;
    QLabel *label_5;

    void setupUi(QDialog *UserLogin)
    {
        if (UserLogin->objectName().isEmpty())
            UserLogin->setObjectName(QString::fromUtf8("UserLogin"));
        UserLogin->resize(1136, 565);
        UserLogin->setStyleSheet(QString::fromUtf8("#UserLogin{\n"
"	border-image: url(:/new/prefix1/user.png);\n"
"\n"
"}"));
        groupBox = new QGroupBox(UserLogin);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(740, 100, 311, 341));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0099ff, stop:1 #00ff99);\n"
"	background-color: rgb(26, 144, 148);\n"
"}\n"
"#groupBox:hover{\n"
"border: 2px solid rgb(32, 189, 189);\n"
"border-radius: 15px;\n"
"}"));
        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(10, 230, 290, 30));
        lineEdit_3->setStyleSheet(QString::fromUtf8("#lineEdit_3{\n"
"background-color: rgb(19, 98, 107);\n"
"	color: rgb(44, 55, 255);\n"
"border: 1px solid rgb(14, 81, 83);\n"
"border-radius: 19px;\n"
"font-weight:bold;\n"
"\n"
"}\n"
"\n"
"#lineEdit_3:hover{\n"
"border: 1.2px solid rgb(30, 174, 184);\n"
"background-color: rgb(21, 122, 122);\n"
"}\n"
"\n"
"#lineEdit_3:focus{\n"
"border-radius:20px;\n"
"}"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 150, 290, 30));
        lineEdit_2->setStyleSheet(QString::fromUtf8("#lineEdit_2{\n"
"background-color: rgb(19, 98, 107);\n"
"	color: rgb(44, 55, 255);\n"
"border: 1px solid rgb(14, 81, 83);\n"
"border-radius: 19px;\n"
"font-weight:bold;\n"
"\n"
"}\n"
"\n"
"#lineEdit_2:hover{\n"
"border: 1.2px solid rgb(30, 174, 184);\n"
"background-color: rgb(21, 122, 122);\n"
"}\n"
"\n"
"#lineEdit_2:focus{\n"
"border-radius:20px;\n"
"}"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(10, 60, 290, 30));
        lineEdit->setStyleSheet(QString::fromUtf8("#lineEdit{\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #00ff99, stop:1 #00ffff);\n"
"\n"
"background-color: rgb(19, 98, 107);\n"
"	color: rgb(44, 55, 255);\n"
"border: 1px solid rgb(14, 81, 83);\n"
"border-radius: 19px;\n"
"font-weight:bold;\n"
"\n"
"}\n"
"\n"
"#lineEdit:hover{\n"
"border: 1.2px solid rgb(30, 174, 184);\n"
"background-color: rgb(21, 122, 122);\n"
"}\n"
"\n"
"#lineEdit:focus{\n"
"\n"
"border-radius:20px;\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 20, 240, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Eras Demi ITC"));
        font.setPointSize(17);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: Navy;\n"
"\n"
"letter-spacing: 5px"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 190, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Eras Demi ITC"));
        font1.setPointSize(16);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: Navy;\n"
"letter-spacing: 5px"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 200, 180, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"\n"
"\n"
"color: Navy;\n"
"letter-spacing: 5px"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 290, 100, 30));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"background-color:navy;\n"
"color: yellow;\n"
"font: 63 11pt \"Lucida Bright\";\n"
"font-weight:bold;\n"
"font-size: 15px;\n"
"letter-spacing: 5px\n"
"}\n"
"\n"
"#pushButton:hover{\n"
"border: 1px solid rgb(67, 200, 200);\n"
"background-color: green;\n"
"color:white;\n"
"}"));
        label_4 = new QLabel(UserLogin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 300, 620, 70));
        label_4->setStyleSheet(QString::fromUtf8("#label_4{\n"
"font-family: 'Dancing Script', cursive;\n"
"color:white;\n"
"font-size: 60px;\n"
"font-weigth: bold;\n"
"	font: 63 italic 36pt \"Lucida Bright\";\n"
"}"));
        widget = new QWidget(UserLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(560, 300, 120, 80));
        widget->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/right.png);\n"
"background-color: rgb(255, 255, 255);\n"
"border-radius:50px;"));
        label_5 = new QLabel(UserLogin);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(640, 470, 491, 51));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setWeight(75);
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent;"));

        retranslateUi(UserLogin);

        QMetaObject::connectSlotsByName(UserLogin);
    } // setupUi

    void retranslateUi(QDialog *UserLogin)
    {
        UserLogin->setWindowTitle(QApplication::translate("UserLogin", "Dialog", nullptr));
        groupBox->setTitle(QString());
        lineEdit->setText(QString());
        label->setText(QApplication::translate("UserLogin", "Adhaar Card ", nullptr));
        label_2->setText(QApplication::translate("UserLogin", "Username", nullptr));
        label_3->setText(QApplication::translate("UserLogin", "Password", nullptr));
        pushButton->setText(QApplication::translate("UserLogin", "LOGIN", nullptr));
        label_4->setText(QApplication::translate("UserLogin", "Users must login here", nullptr));
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UserLogin: public Ui_UserLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERLOGIN_H
