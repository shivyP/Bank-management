/********************************************************************************
** Form generated from reading UI file 'qbankclient.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QBANKCLIENT_H
#define UI_QBANKCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qbankClient
{
public:
    QWidget *centralwidget;
    QLabel *welcome_label;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *username;
    QLabel *label_2;
    QLineEdit *password;
    QLabel *icon;
    QPushButton *login;
    QPushButton *newAccount;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *qbankClient)
    {
        if (qbankClient->objectName().isEmpty())
            qbankClient->setObjectName(QString::fromUtf8("qbankClient"));
        qbankClient->resize(462, 244);
        qbankClient->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"    border: 1px solid;\n"
"    border-color: #1d1d1d;\n"
"	border-radius: 4px;\n"
"    margin-top: 23px;\n"
"\n"
"}\n"
"\n"
"\n"
""
                        "QGroupBox::title  \n"
"{\n"
"    background-color: #9a4eae;\n"
"    color: #fff;\n"
"	subcontrol-position: top left;\n"
"    subcontrol-origin: margin;\n"
"    padding: 5px;\n"
"	min-width: 100px;\n"
"	border: 1px solid #1d1d1d;\n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
"	border-bottom: none;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(qbankClient);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        welcome_label = new QLabel(centralwidget);
        welcome_label->setObjectName(QString::fromUtf8("welcome_label"));
        welcome_label->setGeometry(QRect(110, 10, 251, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Eras Bold ITC"));
        font.setPointSize(18);
        font.setBold(false);
        font.setItalic(false);
        welcome_label->setFont(font);
        welcome_label->setStyleSheet(QString::fromUtf8(""));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(180, 60, 251, 96));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        font1.setStyleStrategy(QFont::PreferAntialias);
        groupBox->setFont(font1);
        groupBox->setStyleSheet(QString::fromUtf8("/*QGroupBox{\n"
"background-color:#363636;\n"
"}*/"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Open Sans"));
        font2.setPointSize(10);
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        username = new QLineEdit(groupBox);
        username->setObjectName(QString::fromUtf8("username"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        username->setFont(font3);

        gridLayout->addWidget(username, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        password = new QLineEdit(groupBox);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font3);
        password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(password, 1, 1, 1, 1);

        icon = new QLabel(centralwidget);
        icon->setObjectName(QString::fromUtf8("icon"));
        icon->setGeometry(QRect(30, 80, 111, 81));
        icon->setStyleSheet(QString::fromUtf8("/*QLabel{\n"
"background-color:#363636;\n"
"}*/"));
        login = new QPushButton(centralwidget);
        login->setObjectName(QString::fromUtf8("login"));
        login->setGeometry(QRect(340, 170, 90, 30));
        QFont font4;
        font4.setFamily(QString::fromUtf8("MS Sans Serif"));
        font4.setBold(true);
        login->setFont(font4);
        login->setCursor(QCursor(Qt::PointingHandCursor));
        newAccount = new QPushButton(centralwidget);
        newAccount->setObjectName(QString::fromUtf8("newAccount"));
        newAccount->setGeometry(QRect(220, 170, 111, 30));
        newAccount->setFont(font4);
        newAccount->setCursor(QCursor(Qt::PointingHandCursor));
        qbankClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(qbankClient);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 462, 21));
        qbankClient->setMenuBar(menubar);
        statusbar = new QStatusBar(qbankClient);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        qbankClient->setStatusBar(statusbar);

        retranslateUi(qbankClient);

        QMetaObject::connectSlotsByName(qbankClient);
    } // setupUi

    void retranslateUi(QMainWindow *qbankClient)
    {
        qbankClient->setWindowTitle(QCoreApplication::translate("qbankClient", "qbankClient", nullptr));
        welcome_label->setText(QCoreApplication::translate("qbankClient", "Welcome to QBank", nullptr));
        groupBox->setTitle(QCoreApplication::translate("qbankClient", "Login", nullptr));
        label->setText(QCoreApplication::translate("qbankClient", "Username", nullptr));
        username->setText(QString());
        label_2->setText(QCoreApplication::translate("qbankClient", "Password", nullptr));
        icon->setText(QString());
        login->setText(QCoreApplication::translate("qbankClient", "Login", nullptr));
        newAccount->setText(QCoreApplication::translate("qbankClient", "New Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qbankClient: public Ui_qbankClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QBANKCLIENT_H
