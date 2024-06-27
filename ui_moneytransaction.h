/********************************************************************************
** Form generated from reading UI file 'moneytransaction.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MONEYTRANSACTION_H
#define UI_MONEYTRANSACTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_moneyTransaction
{
public:
    QLabel *label;
    QPushButton *cancel;
    QPushButton *save;
    QGroupBox *groupBox;
    QLineEdit *amount;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;

    void setupUi(QDialog *moneyTransaction)
    {
        if (moneyTransaction->objectName().isEmpty())
            moneyTransaction->setObjectName(QString::fromUtf8("moneyTransaction"));
        moneyTransaction->resize(353, 201);
        moneyTransaction->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"/*-----QComboBox-----*/\n"
"QComboBox\n"
"{\n"
"    background-color: #4a5157;\n"
"    padding-left: 6px;\n"
"    color: #fff;\n"
"    height: 20px;\n"
"	border-radius: 4px;\n"
"\n"
""
                        "}\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox:on\n"
"{\n"
"    background-color: #4a5157;\n"
"	color: #fff;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"	background-color: #4a5157;\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: top right;\n"
"	border-radius: 4px;\n"
"    width: 15px;\n"
"\n"
"}\n"
"\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(arrow.png);\n"
"    width: 10px;\n"
"    height: 10px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"/*-----QGroupBox-----*/\n"
"QGroupBox \n"
"{\n"
"   background-color:#838996;\n"
"    border: 1px solid;\n"
"    border-color: #1d1d1d;\n"
"	border-radius: 4px;\n"
"    margin-top: 23px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
""));
        label = new QLabel(moneyTransaction);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 10, 201, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        cancel = new QPushButton(moneyTransaction);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(240, 150, 90, 30));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        font1.setPointSize(8);
        font1.setBold(true);
        cancel->setFont(font1);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        save = new QPushButton(moneyTransaction);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(140, 150, 90, 30));
        save->setFont(font1);
        save->setCursor(QCursor(Qt::PointingHandCursor));
        groupBox = new QGroupBox(moneyTransaction);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 311, 101));
        amount = new QLineEdit(groupBox);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(160, 61, 135, 24));
        QFont font2;
        font2.setPointSize(10);
        font2.setBold(true);
        amount->setFont(font2);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 33, 141, 18));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Open Sans"));
        font3.setPointSize(10);
        font3.setBold(true);
        label_2->setFont(font3);
        comboBox = new QComboBox(groupBox);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(160, 33, 135, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(12);
        comboBox->setFont(font4);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(11, 61, 81, 18));
        label_3->setFont(font3);

        retranslateUi(moneyTransaction);

        QMetaObject::connectSlotsByName(moneyTransaction);
    } // setupUi

    void retranslateUi(QDialog *moneyTransaction)
    {
        moneyTransaction->setWindowTitle(QCoreApplication::translate("moneyTransaction", "Money transaction", nullptr));
        label->setText(QCoreApplication::translate("moneyTransaction", "Money Transaction ", nullptr));
        cancel->setText(QCoreApplication::translate("moneyTransaction", "Cancel", nullptr));
        save->setText(QCoreApplication::translate("moneyTransaction", "OK", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("moneyTransaction", "Type of Transaction", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("moneyTransaction", "Deposit", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("moneyTransaction", "Loan Re-payment", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("moneyTransaction", "Withdraw", nullptr));

        label_3->setText(QCoreApplication::translate("moneyTransaction", "Amount", nullptr));
    } // retranslateUi

};

namespace Ui {
    class moneyTransaction: public Ui_moneyTransaction {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MONEYTRANSACTION_H
