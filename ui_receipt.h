/********************************************************************************
** Form generated from reading UI file 'receipt.ui'
**
** Created by: Qt User Interface Compiler version 6.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIPT_H
#define UI_RECEIPT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_receipt
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *aNumber;
    QLabel *label_4;
    QLabel *preBalance;
    QLabel *label_3;
    QLabel *newBalance;
    QLabel *label_5;
    QLabel *label_2;
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *receipt)
    {
        if (receipt->objectName().isEmpty())
            receipt->setObjectName(QString::fromUtf8("receipt"));
        receipt->resize(302, 211);
        receipt->setStyleSheet(QString::fromUtf8("QWidget\n"
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
""));
        layoutWidget = new QWidget(receipt);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 251, 99));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        aNumber = new QLabel(layoutWidget);
        aNumber->setObjectName(QString::fromUtf8("aNumber"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans"));
        font.setPointSize(10);
        font.setBold(true);
        aNumber->setFont(font);

        gridLayout->addWidget(aNumber, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        preBalance = new QLabel(layoutWidget);
        preBalance->setObjectName(QString::fromUtf8("preBalance"));
        preBalance->setFont(font);

        gridLayout->addWidget(preBalance, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        newBalance = new QLabel(layoutWidget);
        newBalance->setObjectName(QString::fromUtf8("newBalance"));
        newBalance->setFont(font);

        gridLayout->addWidget(newBalance, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_2 = new QLabel(receipt);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(12, 40, 271, 21));
        buttonBox = new QDialogButtonBox(receipt);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(180, 170, 91, 33));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS PGothic"));
        font1.setPointSize(13);
        buttonBox->setFont(font1);
        buttonBox->setCursor(QCursor(Qt::PointingHandCursor));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        label = new QLabel(receipt);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(50, 10, 231, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(18);
        font2.setBold(true);
        label->setFont(font2);

        retranslateUi(receipt);

        QMetaObject::connectSlotsByName(receipt);
    } // setupUi

    void retranslateUi(QDialog *receipt)
    {
        receipt->setWindowTitle(QCoreApplication::translate("receipt", "Transaction Recipt", nullptr));
        aNumber->setText(QString());
        label_4->setText(QCoreApplication::translate("receipt", "Previous Balance:", nullptr));
        preBalance->setText(QString());
        label_3->setText(QCoreApplication::translate("receipt", "Account Number:", nullptr));
        newBalance->setText(QString());
        label_5->setText(QCoreApplication::translate("receipt", "Current Balance:", nullptr));
        label_2->setText(QCoreApplication::translate("receipt", "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - --", nullptr));
        label->setText(QCoreApplication::translate("receipt", "Transaction Receipt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class receipt: public Ui_receipt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIPT_H
