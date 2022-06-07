/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QLineEdit *Age_3;
    QLineEdit *Password;
    QLineEdit *Username_3;
    QLineEdit *adhaar;
    QLineEdit *date_3;
    QLabel *label_2;
    QWidget *Down;
    QLabel *label;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(1116, 748);
        QFont font;
        font.setFamily(QString::fromUtf8("Sitka Display"));
        font.setPointSize(36);
        font.setBold(true);
        font.setUnderline(true);
        font.setWeight(75);
        SecDialog->setFont(font);
        SecDialog->setStyleSheet(QString::fromUtf8("\n"
"background-image: url(:/ORG1.png);\n"
"background-size: cover;"));
        groupBox = new QGroupBox(SecDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(400, 210, 391, 471));
        groupBox->setStyleSheet(QString::fromUtf8("#groupBox{\n"
"font: 8pt \"Lucida Sans Unicode\";\n"
"border-radius: 10px;\n"
"color: white;\n"
"text-shadow:2px 1px rgb(168, 167, 170);\n"
"font-size: 19px;\n"
"font-weight: bold;\n"
"border-color: rgb(255, 255, 255);\n"
"box-shadow: 0 4px 20px rgba(0,0,0,0.6);\n"
"}\n"
"#groupBox:hover{\n"
"border: 2px solid rgb(194, 174, 146);\n"
"}\n"
"\n"
""));
        groupBox->setFlat(false);
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(110, 410, 160, 40));
        QFont font1;
        font1.setPointSize(11);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"	background-color: rgb(25, 25, 112);\n"
"	border-radius: 15px;\n"
"	color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"#pushButton:hover {\n"
"	background-color: rgb(255, 255, 0);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));
        Age_3 = new QLineEdit(groupBox);
        Age_3->setObjectName(QString::fromUtf8("Age_3"));
        Age_3->setGeometry(QRect(30, 120, 320, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Shell Dlg 2"));
        font2.setPointSize(8);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        Age_3->setFont(font2);
        Age_3->setStyleSheet(QString::fromUtf8("\n"
"#Age_3{\n"
"color: tan;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"border-color: transparent;\n"
"background-color: transparent;\n"
"border: 1.5px solid rgb(66, 66, 77);\n"
"border-radius: 20px;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"\n"
"#Age_3:hover{\n"
"border: 1.5px solid rgb(97, 98, 103);\n"
"}\n"
"\n"
"#Age_3:focus{\n"
"border: 1.2px solid rgb(166, 142, 111);\n"
"}"));
        Password = new QLineEdit(groupBox);
        Password->setObjectName(QString::fromUtf8("Password"));
        Password->setGeometry(QRect(30, 330, 320, 40));
        Password->setFont(font2);
        Password->setStyleSheet(QString::fromUtf8("\n"
"#Password{\n"
"color: tan;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"border-color: transparent;\n"
"background-color: transparent;\n"
"border: 1.5px solid rgb(66, 66, 77);\n"
"border-radius: 20px;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"\n"
"#Password:hover{\n"
"border: 1.5px solid rgb(97, 98, 103);\n"
"}\n"
"\n"
"#Password:focus{\n"
"border: 1.2px solid rgb(166, 142, 111);\n"
"}"));
        Password->setEchoMode(QLineEdit::Password);
        Username_3 = new QLineEdit(groupBox);
        Username_3->setObjectName(QString::fromUtf8("Username_3"));
        Username_3->setGeometry(QRect(30, 190, 320, 40));
        Username_3->setStyleSheet(QString::fromUtf8("#Username_3{\n"
"color: tan;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"border-color: transparent;\n"
"background-color: transparent;\n"
"border: 1.5px solid rgb(66, 66, 77);\n"
"border-radius: 20px;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"\n"
"#Username_3:hover{\n"
"border: 1.5px solid rgb(97, 98, 103);\n"
"}\n"
"\n"
"#Username_3:focus{\n"
"border: 1.2px solid rgb(166, 142, 111);\n"
"}"));
        adhaar = new QLineEdit(groupBox);
        adhaar->setObjectName(QString::fromUtf8("adhaar"));
        adhaar->setGeometry(QRect(30, 50, 320, 40));
        adhaar->setStyleSheet(QString::fromUtf8("#adhaar{\n"
"color: tan;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"border-color: transparent;\n"
"background-color: transparent;\n"
"border: 1.5px solid rgb(66, 66, 77);\n"
"border-radius: 20px;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"\n"
"#adhaar:hover{\n"
"border: 1.5px solid rgb(97, 98, 103);\n"
"}\n"
"\n"
"#adhaar:focus{\n"
"border: 1.2px solid rgb(166, 142, 111);\n"
"}\n"
""));
        date_3 = new QLineEdit(groupBox);
        date_3->setObjectName(QString::fromUtf8("date_3"));
        date_3->setGeometry(QRect(30, 260, 320, 40));
        date_3->setStyleSheet(QString::fromUtf8("\n"
"#date_3{\n"
"color: tan;\n"
"font: 8pt \"MS Shell Dlg 2\";\n"
"border-color: transparent;\n"
"background-color: transparent;\n"
"border: 1.5px solid rgb(66, 66, 77);\n"
"border-radius: 20px;\n"
"padding-left:20px;\n"
"padding-right:20px;\n"
"}\n"
"\n"
"#date_3:hover{\n"
"border: 1.5px solid rgb(97, 98, 103);\n"
"}\n"
"\n"
"#date_3:focus{\n"
"border: 1.2px solid rgb(166, 142, 111);\n"
"}"));
        label_2 = new QLabel(SecDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(260, 690, 661, 51));
        QFont font3;
        font3.setPointSize(14);
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:white;\n"
"background:transparent;"));
        Down = new QWidget(SecDialog);
        Down->setObjectName(QString::fromUtf8("Down"));
        Down->setGeometry(QRect(1, 61, 164, 83));
        Down->setMaximumSize(QSize(164, 16777215));
        Down->setStyleSheet(QString::fromUtf8("border-image: url(:/down.png);\n"
"boder-radius: 40px;"));
        label = new QLabel(SecDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 50, 611, 101));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Nirmala UI"));
        font4.setPointSize(25);
        font4.setBold(true);
        font4.setUnderline(false);
        font4.setWeight(75);
        label->setFont(font4);
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"	color: rgb(255, 255, 255);\n"
"	color: rgb(255, 255, 255);\n"
"	color: tan;\n"
"	border-radius: 10px;\n"
"}"));
        label->setFrameShape(QFrame::Box);
        label->setWordWrap(false);

        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QApplication::translate("SecDialog", "Dialog", nullptr));
        groupBox->setTitle(QString());
        pushButton->setText(QApplication::translate("SecDialog", "Register Me", nullptr));
        label_2->setText(QString());
        label->setText(QApplication::translate("SecDialog", "Register Yourself here !!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
