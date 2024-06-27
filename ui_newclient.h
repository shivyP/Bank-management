/********************************************************************************
** Form generated from reading UI file 'newclient.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCLIENT_H
#define UI_NEWCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_newClient
{
public:
    QLabel *welcome_label;
    QPushButton *cancel;
    QPushButton *newAccount_Save;
    QGroupBox *groupBox;
    QLineEdit *firstname;
    QLineEdit *lastname;
    QLineEdit *accNum;
    QLineEdit *newUsername;
    QLineEdit *newPassword;
    QRadioButton *current;
    QRadioButton *saving;
    QLineEdit *balance;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLabel *label_7;

    void setupUi(QDialog *newClient)
    {
        if (newClient->objectName().isEmpty())
            newClient->setObjectName(QString::fromUtf8("newClient"));
        newClient->resize(375, 358);
        newClient->setMaximumSize(QSize(16777215, 16777215));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(10);
        newClient->setFont(font);
        newClient->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"    background-color:	#3b3b3b;\n"
"\n"
"	color: #fff;\n"
"	selection-background-color: #fff;\n"
"	selection-color: #000;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QLabel-----*/\n"
"QLabel\n"
"{\n"
"	background-color: transparent;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"/*-----QPushButton-----*/\n"
"QPushButton\n"
"{\n"
"	background-color: #00aae4;\n"
"	color: #fff;\n"
"	min-width: 80px;\n"
"	border-radius: 4px;\n"
"	padding: 5px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color: #0486b2;\n"
"	border: 1px solid #0486b2;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"/*-----QLineEdit-----*/\n"
"QLineEdit\n"
"{\n"
"	background-color: #242424;\n"
"	color : #fff;\n"
"	border: 1px solid #1d1d1d;\n"
"	padding: 3px;\n"
"	padding-left: 5px;\n"
"	border-radius: 4px;\n"
"   font-weight: bold;\n"
"}\n"
"\n"
"/*-----QRadioButton-----*/\n"
"QRadioButton \n"
"{\n"
"	color: #fff;\n"
"	background-color: transparent;\n"
"\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::unchecked:hover \n"
"{\n"
"	background-c"
                        "olor: #d3d3d3;\n"
"	border: 2px solid #002b2b;\n"
"	border-radius: 6px;\n"
"}\n"
"\n"
"\n"
"QRadioButton::indicator::checked \n"
"{\n"
"	border: 2px solid  #d3d3d3;\n"
"	border-radius: 6px;\n"
"	background-color:  #0486b2;  \n"
"	width: 9px; \n"
"	height: 9px; \n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        welcome_label = new QLabel(newClient);
        welcome_label->setObjectName(QString::fromUtf8("welcome_label"));
        welcome_label->setGeometry(QRect(90, 10, 181, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        welcome_label->setFont(font1);
        welcome_label->setStyleSheet(QString::fromUtf8(""));
        cancel = new QPushButton(newClient);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(230, 300, 90, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Sans Serif"));
        font2.setPointSize(8);
        font2.setBold(true);
        cancel->setFont(font2);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        newAccount_Save = new QPushButton(newClient);
        newAccount_Save->setObjectName(QString::fromUtf8("newAccount_Save"));
        newAccount_Save->setGeometry(QRect(130, 300, 90, 30));
        newAccount_Save->setFont(font2);
        newAccount_Save->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox = new QGroupBox(newClient);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 289, 260));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox \n"
"{\n"
"   background-color:#838996;\n"
"    border: 1px solid;\n"
"    border-color: #1d1d1d;\n"
"	border-radius: 4px;\n"
"    margin-top: 23px;\n"
"\n"
"}"));
        firstname = new QLineEdit(groupBox);
        firstname->setObjectName(QString::fromUtf8("firstname"));
        firstname->setGeometry(QRect(140, 61, 129, 24));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        firstname->setFont(font3);
        lastname = new QLineEdit(groupBox);
        lastname->setObjectName(QString::fromUtf8("lastname"));
        lastname->setGeometry(QRect(140, 91, 129, 24));
        lastname->setFont(font3);
        accNum = new QLineEdit(groupBox);
        accNum->setObjectName(QString::fromUtf8("accNum"));
        accNum->setGeometry(QRect(140, 31, 129, 24));
        accNum->setFont(font3);
        accNum->setReadOnly(true);
        newUsername = new QLineEdit(groupBox);
        newUsername->setObjectName(QString::fromUtf8("newUsername"));
        newUsername->setGeometry(QRect(140, 175, 129, 24));
        newUsername->setFont(font3);
        newPassword = new QLineEdit(groupBox);
        newPassword->setObjectName(QString::fromUtf8("newPassword"));
        newPassword->setGeometry(QRect(140, 205, 129, 24));
        newPassword->setFont(font3);
        current = new QRadioButton(groupBox);
        current->setObjectName(QString::fromUtf8("current"));
        current->setGeometry(QRect(140, 123, 60, 16));
        QFont font4;
        font4.setPointSize(9);
        current->setFont(font4);
        saving = new QRadioButton(groupBox);
        saving->setObjectName(QString::fromUtf8("saving"));
        saving->setGeometry(QRect(210, 123, 59, 16));
        saving->setFont(font4);
        balance = new QLineEdit(groupBox);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setGeometry(QRect(140, 145, 129, 24));
        balance->setFont(font3);
        balance->setInputMethodHints(Qt::ImhDigitsOnly);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 33, 151, 21));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Open Sans"));
        font5.setPointSize(10);
        font5.setBold(true);
        label->setFont(font5);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 63, 92, 21));
        label_3->setFont(font5);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 92, 90, 21));
        label_4->setFont(font5);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 120, 121, 21));
        label_5->setFont(font5);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 149, 72, 21));
        label_6->setFont(font5);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(20, 177, 86, 21));
        label_8->setFont(font5);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(20, 206, 83, 21));
        label_7->setFont(font5);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        label_8->raise();
        label_7->raise();
        label->raise();
        firstname->raise();
        lastname->raise();
        accNum->raise();
        newUsername->raise();
        newPassword->raise();
        current->raise();
        saving->raise();
        balance->raise();

        retranslateUi(newClient);

        QMetaObject::connectSlotsByName(newClient);
    } // setupUi

    void retranslateUi(QDialog *newClient)
    {
        newClient->setWindowTitle(QCoreApplication::translate("newClient", "Registration for New Customers ", nullptr));
        welcome_label->setText(QCoreApplication::translate("newClient", "Registration Form", nullptr));
        cancel->setText(QCoreApplication::translate("newClient", "Cancel", nullptr));
        newAccount_Save->setText(QCoreApplication::translate("newClient", "Save ", nullptr));
        groupBox->setTitle(QString());
        accNum->setText(QString());
        current->setText(QCoreApplication::translate("newClient", "Current", nullptr));
        saving->setText(QCoreApplication::translate("newClient", "Savings", nullptr));
        label->setText(QCoreApplication::translate("newClient", "Account Number         ", nullptr));
        label_3->setText(QCoreApplication::translate("newClient", "First Name", nullptr));
        label_4->setText(QCoreApplication::translate("newClient", "Last Name", nullptr));
        label_5->setText(QCoreApplication::translate("newClient", "Account Type ", nullptr));
        label_6->setText(QCoreApplication::translate("newClient", "Balance ", nullptr));
        label_8->setText(QCoreApplication::translate("newClient", "Username", nullptr));
        label_7->setText(QCoreApplication::translate("newClient", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class newClient: public Ui_newClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCLIENT_H
