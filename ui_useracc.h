/********************************************************************************
** Form generated from reading UI file 'useracc.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERACC_H
#define UI_USERACC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_userAcc
{
public:
    QLabel *wMessage;
    QLabel *uName;
    QPushButton *moneyTrasaction;
    QPushButton *LoanApplication;
    QPushButton *viewAccount;
    QPushButton *deleteAccount;
    QPushButton *cancel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *userAcc)
    {
        if (userAcc->objectName().isEmpty())
            userAcc->setObjectName(QString::fromUtf8("userAcc"));
        userAcc->resize(392, 369);
        userAcc->setStyleSheet(QString::fromUtf8("QWidget\n"
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
"\n"
"\n"
""));
        wMessage = new QLabel(userAcc);
        wMessage->setObjectName(QString::fromUtf8("wMessage"));
        wMessage->setGeometry(QRect(70, 10, 291, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Calibri"));
        font.setPointSize(18);
        font.setBold(true);
        wMessage->setFont(font);
        uName = new QLabel(userAcc);
        uName->setObjectName(QString::fromUtf8("uName"));
        uName->setGeometry(QRect(70, 50, 251, 20));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Open Sans Semibold"));
        font1.setPointSize(11);
        uName->setFont(font1);
        moneyTrasaction = new QPushButton(userAcc);
        moneyTrasaction->setObjectName(QString::fromUtf8("moneyTrasaction"));
        moneyTrasaction->setGeometry(QRect(50, 90, 131, 81));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(229, 228, 226, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush2);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush2);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush2);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        moneyTrasaction->setPalette(palette);
        moneyTrasaction->setCursor(QCursor(Qt::PointingHandCursor));
        moneyTrasaction->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color:#e5e4e2;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color:#cec8ef;\n"
"	border: 1px solid #e5e4e2;\n"
" 	\n"
"}"));
        LoanApplication = new QPushButton(userAcc);
        LoanApplication->setObjectName(QString::fromUtf8("LoanApplication"));
        LoanApplication->setGeometry(QRect(210, 90, 131, 81));
        LoanApplication->setCursor(QCursor(Qt::PointingHandCursor));
        LoanApplication->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color:#e5e4e2;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color:#cec8ef;\n"
"	border: 1px solid #e5e4e2;\n"
" 	\n"
"}"));
        viewAccount = new QPushButton(userAcc);
        viewAccount->setObjectName(QString::fromUtf8("viewAccount"));
        viewAccount->setGeometry(QRect(50, 210, 131, 81));
        viewAccount->setCursor(QCursor(Qt::PointingHandCursor));
        viewAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color:#e5e4e2;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color:#cec8ef;\n"
"	border: 1px solid #e5e4e2;\n"
" 	\n"
"}"));
        deleteAccount = new QPushButton(userAcc);
        deleteAccount->setObjectName(QString::fromUtf8("deleteAccount"));
        deleteAccount->setGeometry(QRect(210, 210, 131, 81));
        deleteAccount->setCursor(QCursor(Qt::PointingHandCursor));
        deleteAccount->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background-color:#e5e4e2;\n"
"}\n"
"\n"
"QPushButton::hover\n"
"{\n"
"	background-color:#cec8ef;\n"
"	border: 1px solid #e5e4e2;\n"
" 	\n"
"}"));
        cancel = new QPushButton(userAcc);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(250, 320, 90, 30));
        QFont font2;
        font2.setFamily(QString::fromUtf8("MS Sans Serif"));
        font2.setPointSize(8);
        font2.setBold(true);
        cancel->setFont(font2);
        cancel->setCursor(QCursor(Qt::PointingHandCursor));
        label = new QLabel(userAcc);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 160, 131, 21));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #b072c0;\n"
"	\n"
"\n"
"}\n"
""));
        label_2 = new QLabel(userAcc);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(210, 160, 131, 21));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #b072c0;\n"
"	\n"
"\n"
"}"));
        label_3 = new QLabel(userAcc);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 280, 131, 21));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #b072c0;\n"
"	\n"
"\n"
"}"));
        label_4 = new QLabel(userAcc);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 280, 131, 21));
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"	background-color: #b072c0;\n"
"	\n"
"\n"
"}"));

        retranslateUi(userAcc);

        QMetaObject::connectSlotsByName(userAcc);
    } // setupUi

    void retranslateUi(QDialog *userAcc)
    {
        userAcc->setWindowTitle(QCoreApplication::translate("userAcc", "User Account", nullptr));
        wMessage->setText(QCoreApplication::translate("userAcc", "Accoun number label", nullptr));
        uName->setText(QCoreApplication::translate("userAcc", "Welcome Back with user name ", nullptr));
        moneyTrasaction->setText(QString());
        LoanApplication->setText(QString());
        viewAccount->setText(QString());
        deleteAccount->setText(QString());
        cancel->setText(QCoreApplication::translate("userAcc", "LogOut", nullptr));
        label->setText(QCoreApplication::translate("userAcc", "  Money Transaction", nullptr));
        label_2->setText(QCoreApplication::translate("userAcc", "   Loan Application", nullptr));
        label_3->setText(QCoreApplication::translate("userAcc", "    Account Details", nullptr));
        label_4->setText(QCoreApplication::translate("userAcc", "     Delete Account", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userAcc: public Ui_userAcc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERACC_H
