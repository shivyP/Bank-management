#include "useracc.h"
#include "ui_useracc.h"

userAcc::userAcc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::userAcc)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.png"));
    //the options are displayed as buttons
    // images are added on top for user's better understanding
    ui->moneyTrasaction->setIcon(QIcon("money.png"));
    ui->moneyTrasaction->setIconSize(QSize(131,81));

    ui->LoanApplication->setIcon(QIcon("loan.png"));
    ui->LoanApplication->setIconSize(QSize(131,81));

    ui->viewAccount->setIcon(QIcon("profile.png"));
    ui->viewAccount->setIconSize(QSize(131,81));

    ui->deleteAccount->setIcon(QIcon("delete.png"));
    ui->deleteAccount->setIconSize(QSize(131,81));


   // mTransaction = new moneyTransaction;

}

//to display the accout number and user name on top
void userAcc::pageSetup(std::string name,std::string lname, std::string accNum){
    ui->wMessage->setText("Account Number: "+ QString::fromStdString(accNum));
    ui->uName->setText("Welcome "+ QString::fromStdString(name)+" "+QString::fromStdString(lname)+"!");
}


void userAcc::on_moneyTrasaction_pressed()
{
    // let the qbankClient know that user wants the moneyTransaction page
    emit passSignal(1);

}

void userAcc::on_LoanApplication_clicked()
{
    // let the qbankClient know that user wants the loanApplication page
    emit passSignal(2);
}



void userAcc::on_viewAccount_pressed()
{   // let the qbankClient know that user wants view account details
    emit passSignal(3);
}

void userAcc::on_deleteAccount_pressed()
{
    // let the qbankClient know that user wants delete account
    emit passSignal(4);
}

void userAcc::on_cancel_pressed()
{
    emit passSignal(6); // as once the page is closed, it should take back to login page
    this->close();
}



userAcc::~userAcc()
{
    delete ui;
}


