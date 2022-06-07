/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Registration;
    QPushButton *Admin_login;
    QPushButton *Admin_login_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1112, 709);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(254, 154, 153);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 501, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font.setPointSize(21);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 100, 441, 281));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/cor.png);"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 380, 511, 151));
        QFont font1;
        font1.setPointSize(72);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("letter-spacing: 15px;\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 530, 651, 161));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setWeight(75);
        label_4->setFont(font2);
        label_4->setStyleSheet(QString::fromUtf8("#label_4{letter-spacing: 1px;\n"
"  line-height: 25px;\n"
"\n"
"}"));
        label_4->setTextFormat(Qt::PlainText);
        label_4->setWordWrap(true);
        label_4->setIndent(0);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(520, 190, 591, 211));
        label_5->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/img src.jpeg);\n"
"  height: 40px;\n"
"  \n"
"  border-radius: 20px;\n"
"  filter: contrast(150%);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8("img src.jpeg")));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(490, 10, 601, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Registration = new QPushButton(layoutWidget);
        Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->setCursor(QCursor(Qt::PointingHandCursor));
        Registration->setStyleSheet(QString::fromUtf8("#Registration{\n"
"  text-decoration: none;\n"
"  color: black;\n"
"  font-family: 'Pirata One', cursive;\n"
"  font-weight: bold;\n"
"  font-size: 19px;\n"
"  border-radius: 10px;\n"
"}\n"
"#Registration:hover{\n"
"color:yellow;\n"
"}\n"
"\n"
"\n"
""));

        horizontalLayout->addWidget(Registration);

        Admin_login = new QPushButton(layoutWidget);
        Admin_login->setObjectName(QString::fromUtf8("Admin_login"));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Pirata One"));
        font3.setBold(true);
        font3.setUnderline(false);
        font3.setWeight(75);
        font3.setStrikeOut(false);
        Admin_login->setFont(font3);
        Admin_login->setCursor(QCursor(Qt::PointingHandCursor));
        Admin_login->setStyleSheet(QString::fromUtf8("#Admin_login{\n"
"  text-decoration: none;\n"
"  color: black;\n"
"  font-family: 'Pirata One', cursive;\n"
"  font-weight: bold;\n"
"  font-size: 19px;\n"
"  border-radius: 10px;\n"
"}\n"
"#Admin_login:hover{\n"
"color:yellow;\n"
"}\n"
""));

        horizontalLayout->addWidget(Admin_login);

        Admin_login_2 = new QPushButton(centralwidget);
        Admin_login_2->setObjectName(QString::fromUtf8("Admin_login_2"));
        Admin_login_2->setGeometry(QRect(810, 610, 296, 23));
        Admin_login_2->setFont(font3);
        Admin_login_2->setCursor(QCursor(Qt::PointingHandCursor));
        Admin_login_2->setStyleSheet(QString::fromUtf8("#Admin_login{\n"
"  text-decoration: none;\n"
"  color: black;\n"
"  font-family: 'Pirata One', cursive;\n"
"  font-weight: bold;\n"
"  font-size: 19px;\n"
"  border-radius: 10px;\n"
"}\n"
"#Admin_login:hover{\n"
"color:yellow;\n"
"}\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1112, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "COVID-19 Dashboard", nullptr));
        label_2->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "COVID", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Coronavirus disease 2019 (COVID-19) is a contagious disease caused by severe acute respiratory syndrome coronavirus 2 (SARS-CoV-2). The first known case was identified in Wuhan, China, in December 2019.The disease has since spread worldwide, leading to an ongoing pandemic.", nullptr));
        label_5->setText(QString());
        Registration->setText(QApplication::translate("MainWindow", "Register Here !!", nullptr));
        Admin_login->setText(QApplication::translate("MainWindow", "Login Here !!", nullptr));
        Admin_login_2->setText(QApplication::translate("MainWindow", "Admin Login Here !!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
