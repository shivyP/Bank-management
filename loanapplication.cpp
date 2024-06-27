#include "loanapplication.h"
#include "ui_loanapplication.h"

loanApplication::loanApplication(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loanApplication)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.png"));
    foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>()) {
            if(lineEdit->isReadOnly())
                lineEdit->setCursor(Qt::ForbiddenCursor);
            else
                lineEdit->setCursor(Qt::IBeamCursor);


     }

}

void loanApplication::userInfo(std::string accNumber,std::string fname, std::string lname)
{
    //setup inital values
    ui->accountN->setText(QString::fromStdString(accNumber));
    ui->firstname->setText(QString::fromStdString(fname));
    ui->lastname->setText(QString::fromStdString(lname));


}//end of function



void loanApplication::on_save_clicked()
{
   emit amount(ui->amount->text());
   ui->amount->clear();
}//end of function

void loanApplication::on_cancel_pressed()
{
    this->close();
    ui->amount->clear();
}//end of function

loanApplication::~loanApplication()
{
    delete ui;
}
