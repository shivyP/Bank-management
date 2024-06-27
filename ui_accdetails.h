/********************************************************************************
** Form generated from reading UI file 'accdetails.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCDETAILS_H
#define UI_ACCDETAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_accDetails
{
public:
    QPushButton *cancel;
    QLabel *label;
    QLabel *label_2;
    QPushButton *edit;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *balance;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *accountNumber;
    QLabel *loan;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *lastname;
    QLabel *accType;
    QLabel *label_5;
    QLabel *firstname;
    QLabel *loanAmount;
    QLabel *label_3;
    QLabel *label_21;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_12;
    QLabel *password;
    QLabel *label_13;
    QLabel *username;

    void setupUi(QDialog *accDetails)
    {
        if (accDetails->objectName().isEmpty())
            accDetails->setObjectName(QString::fromUtf8("accDetails"));
        accDetails->resize(411, 449);
        accDetails->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"\n"
"}\n"
"\n"
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
"\n"
"\n"
"\n"
"\n"
""
                        "\n"
"\n"
"\n"
"\n"
""));
        cancel = new QPushButton(accDetails);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(280, 390, 90, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(8);
        font.setBold(true);
        cancel->setFont(font);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(accDetails);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(120, 20, 161, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(18);
        font1.setBold(true);
        font1.setItalic(false);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8(""));
        label_2 = new QLabel(accDetails);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 50, 331, 21));
        edit = new QPushButton(accDetails);
        edit->setObjectName(QString::fromUtf8("edit"));
        edit->setGeometry(QRect(180, 390, 90, 30));
        edit->setFont(font);
        edit->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox = new QGroupBox(accDetails);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 50, 331, 311));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 281, 212));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Open Sans"));
        font2.setPointSize(10);
        font2.setBold(true);
        label_4->setFont(font2);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        balance = new QLabel(layoutWidget);
        balance->setObjectName(QString::fromUtf8("balance"));
        balance->setFont(font2);

        gridLayout->addWidget(balance, 4, 1, 1, 1);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font2);

        gridLayout->addWidget(label_9, 6, 0, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font2);

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        accountNumber = new QLabel(layoutWidget);
        accountNumber->setObjectName(QString::fromUtf8("accountNumber"));
        accountNumber->setFont(font2);

        gridLayout->addWidget(accountNumber, 0, 1, 1, 1);

        loan = new QLabel(layoutWidget);
        loan->setObjectName(QString::fromUtf8("loan"));
        loan->setFont(font2);

        gridLayout->addWidget(loan, 5, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font2);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font2);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        lastname = new QLabel(layoutWidget);
        lastname->setObjectName(QString::fromUtf8("lastname"));
        lastname->setFont(font2);

        gridLayout->addWidget(lastname, 2, 1, 1, 1);

        accType = new QLabel(layoutWidget);
        accType->setObjectName(QString::fromUtf8("accType"));
        accType->setFont(font2);

        gridLayout->addWidget(accType, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        firstname = new QLabel(layoutWidget);
        firstname->setObjectName(QString::fromUtf8("firstname"));
        firstname->setFont(font2);

        gridLayout->addWidget(firstname, 1, 1, 1, 1);

        loanAmount = new QLabel(layoutWidget);
        loanAmount->setObjectName(QString::fromUtf8("loanAmount"));
        loanAmount->setFont(font2);

        gridLayout->addWidget(loanAmount, 6, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setEnabled(true);
        label_3->setFont(font2);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(20, 240, 371, 21));
        layoutWidget_2 = new QWidget(groupBox);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(20, 250, 281, 51));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(layoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font2);

        gridLayout_2->addWidget(label_12, 1, 0, 1, 1);

        password = new QLabel(layoutWidget_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font2);

        gridLayout_2->addWidget(password, 1, 1, 1, 1);

        label_13 = new QLabel(layoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font2);

        gridLayout_2->addWidget(label_13, 0, 0, 1, 1);

        username = new QLabel(layoutWidget_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setFont(font2);

        gridLayout_2->addWidget(username, 0, 1, 1, 1);

        layoutWidget->raise();
        layoutWidget_2->raise();
        label_21->raise();
        groupBox->raise();
        cancel->raise();
        label->raise();
        label_2->raise();
        edit->raise();

        retranslateUi(accDetails);

        QMetaObject::connectSlotsByName(accDetails);
    } // setupUi

    void retranslateUi(QDialog *accDetails)
    {
        accDetails->setWindowTitle(QCoreApplication::translate("accDetails", "Account Details", nullptr));
        cancel->setText(QCoreApplication::translate("accDetails", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("accDetails", "Account Details", nullptr));
        label_2->setText(QCoreApplication::translate("accDetails", "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - ", nullptr));
        edit->setText(QCoreApplication::translate("accDetails", "Edit", nullptr));
        groupBox->setTitle(QString());
        label_4->setText(QCoreApplication::translate("accDetails", "   Firstname:", nullptr));
        balance->setText(QCoreApplication::translate("accDetails", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("accDetails", "   Loan Amount:", nullptr));
        label_6->setText(QCoreApplication::translate("accDetails", "   Account Type:", nullptr));
        accountNumber->setText(QCoreApplication::translate("accDetails", "hey", nullptr));
        loan->setText(QCoreApplication::translate("accDetails", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("accDetails", "   Balance:", nullptr));
        label_8->setText(QCoreApplication::translate("accDetails", "   Loan:", nullptr));
        lastname->setText(QCoreApplication::translate("accDetails", "hey", nullptr));
        accType->setText(QCoreApplication::translate("accDetails", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("accDetails", "   Lastname:", nullptr));
        firstname->setText(QCoreApplication::translate("accDetails", "hey", nullptr));
        loanAmount->setText(QCoreApplication::translate("accDetails", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("accDetails", "   Account Number:", nullptr));
        label_21->setText(QCoreApplication::translate("accDetails", "   \302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257\302\257", nullptr));
        label_12->setText(QCoreApplication::translate("accDetails", "   Password:", nullptr));
        password->setText(QCoreApplication::translate("accDetails", "hey", nullptr));
        label_13->setText(QCoreApplication::translate("accDetails", "   Username:", nullptr));
        username->setText(QCoreApplication::translate("accDetails", "hey", nullptr));
    } // retranslateUi

};

namespace Ui {
    class accDetails: public Ui_accDetails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCDETAILS_H
