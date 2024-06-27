/********************************************************************************
** Form generated from reading UI file 'loanapplication.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOANAPPLICATION_H
#define UI_LOANAPPLICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loanApplication
{
public:
    QPushButton *cancel;
    QPushButton *save;
    QLabel *label;
    QLabel *label_4;
    QGroupBox *groupBox;
    QLineEdit *lastname;
    QLineEdit *amount;
    QLineEdit *accountN;
    QLineEdit *firstname;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QDialog *loanApplication)
    {
        if (loanApplication->objectName().isEmpty())
            loanApplication->setObjectName(QString::fromUtf8("loanApplication"));
        loanApplication->resize(352, 277);
        loanApplication->setStyleSheet(QString::fromUtf8("QWidget\n"
"{\n"
"    background-color:	#3b3b3b;\n"
"\n"
"	color: #fff;\n"
"	selection-background-color: #fff;\n"
"	selection-color: #000;\n"
"\n"
"}\n"
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
"   \n"
"	font-weight: bold;\n"
"   \n"
"}\n"
"\n"
"\n"
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
""
                        "    margin-top: 23px;\n"
"\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
"\n"
"\n"
""));
        cancel = new QPushButton(loanApplication);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(210, 220, 90, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Sans Serif"));
        font.setPointSize(8);
        font.setBold(true);
        cancel->setFont(font);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        save = new QPushButton(loanApplication);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(100, 220, 90, 30));
        save->setFont(font);
        save->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(loanApplication);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 10, 171, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(17);
        font1.setBold(true);
        label->setFont(font1);
        label_4 = new QLabel(loanApplication);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 130, 101, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Open Sans"));
        font2.setPointSize(10);
        font2.setBold(true);
        label_4->setFont(font2);
        groupBox = new QGroupBox(loanApplication);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 30, 271, 171));
        lastname = new QLineEdit(groupBox);
        lastname->setObjectName(QString::fromUtf8("lastname"));
        lastname->setGeometry(QRect(140, 97, 116, 24));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setItalic(false);
        lastname->setFont(font3);
        lastname->setReadOnly(true);
        amount = new QLineEdit(groupBox);
        amount->setObjectName(QString::fromUtf8("amount"));
        amount->setGeometry(QRect(140, 127, 116, 24));
        amount->setFont(font3);
        accountN = new QLineEdit(groupBox);
        accountN->setObjectName(QString::fromUtf8("accountN"));
        accountN->setGeometry(QRect(140, 37, 116, 24));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(3);
        sizePolicy.setVerticalStretch(4);
        sizePolicy.setHeightForWidth(accountN->sizePolicy().hasHeightForWidth());
        accountN->setSizePolicy(sizePolicy);
        accountN->setFont(font3);
        accountN->setReadOnly(true);
        firstname = new QLineEdit(groupBox);
        firstname->setObjectName(QString::fromUtf8("firstname"));
        firstname->setGeometry(QRect(140, 67, 116, 24));
        firstname->setFont(font3);
        firstname->setReadOnly(true);
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(13, 100, 91, 16));
        label_5->setFont(font2);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(13, 130, 101, 18));
        label_6->setFont(font2);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(13, 70, 101, 16));
        label_3->setFont(font2);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(13, 40, 121, 18));
        label_2->setFont(font2);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
" background-color:#838996;\n"
"}"));

        retranslateUi(loanApplication);

        QMetaObject::connectSlotsByName(loanApplication);
    } // setupUi

    void retranslateUi(QDialog *loanApplication)
    {
        loanApplication->setWindowTitle(QCoreApplication::translate("loanApplication", "Loan Application Form", nullptr));
        cancel->setText(QCoreApplication::translate("loanApplication", "Cancel", nullptr));
        save->setText(QCoreApplication::translate("loanApplication", "Save ", nullptr));
        label->setText(QCoreApplication::translate("loanApplication", "Loan Application", nullptr));
        label_4->setText(QString());
        groupBox->setTitle(QString());
        label_5->setText(QCoreApplication::translate("loanApplication", "Last Name", nullptr));
        label_6->setText(QCoreApplication::translate("loanApplication", "Loan Amount", nullptr));
        label_3->setText(QCoreApplication::translate("loanApplication", "First Name", nullptr));
        label_2->setText(QCoreApplication::translate("loanApplication", "Account Number", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loanApplication: public Ui_loanApplication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOANAPPLICATION_H
