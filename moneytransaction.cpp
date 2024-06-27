#include "moneytransaction.h"
#include "ui_moneytransaction.h"

moneyTransaction::moneyTransaction(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::moneyTransaction)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.png"));
}



void moneyTransaction::on_cancel_pressed()
{
    this->close();

}

void moneyTransaction::on_save_pressed()
{
   QString typeT=ui->comboBox->currentText();
   //qDebug()<<typeT;
   QString amount=ui->amount->text();
   foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>()) {
      lineEdit->clear();
   }
   emit sendData(typeT,amount);
}//end of function

moneyTransaction::~moneyTransaction()
{
    delete ui;
}



