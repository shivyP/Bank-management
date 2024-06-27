#include "accdetails.h"
#include "ui_accdetails.h"

accDetails::accDetails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::accDetails)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.png"));
}
void accDetails::userInfo(std::string data){
     std::stringstream user(data);
     std::string temp;
     std::getline(user,temp,',');
     ui->accountNumber->setText(QString::fromStdString(temp));
     std::getline(user,temp,',');
     ui->firstname->setText(QString::fromStdString(temp));
     std::getline(user,temp,',');
     ui->lastname->setText(QString::fromStdString(temp));
     std::getline(user,temp,',');
     ui->accType->setText(QString::fromStdString(temp));
     std::getline(user,temp,',');
     ui->balance->setText(QString::number(std::stod(temp),'f',2));
     std::getline(user,temp,',');
     ui->loan->setText(QString::fromStdString(temp));
     std::getline(user,temp,',');
     ui->loanAmount->setText(QString::number(std::stod(temp),'f',2));
     std::getline(user,temp,',');
     ui->username->setText(QString::fromStdString(temp));
     std::getline(user,temp);
     ui->password->setText(QString::fromStdString(temp));


}

void accDetails::on_cancel_pressed()
{
    this->close();
}








void accDetails::on_edit_pressed()
{
    emit passSignal(5);
}

accDetails::~accDetails()
{
    delete ui;
}
