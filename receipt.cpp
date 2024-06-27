#include "receipt.h"
#include "ui_receipt.h"

receipt::receipt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::receipt)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.png"));
    msg=new QLabel(this);
}

//function to set up initial values on screen
void receipt::setupData(int funcID,std::string account,std::string preBalance, std::string curBalance)
{



   msg->setVisible(false);//hide loan lable
   msg->clear();
   ui->label->setText("Transaction Receipt");
   ui->label_3->setVisible(true);
   ui->label_4->setVisible(true);
   ui->label_4->setText("Previous Balance:");

   ui->label_5->setVisible(true);
   ui->label_5->setText("Current Balance:");



   switch (funcID){
    case 3:
       //loan Application rejected
       //when the user alread has a loan
       loan(funcID);
       break;
    case 2:loan(funcID);//when a loan re-payment has been made
    default: //when is a deposit or withdrawal transaction
             ui->aNumber->setText(QString::fromStdString(account));
             ui->preBalance->setText("£"+QString::number(std::stod(preBalance),'f',2));
             ui->newBalance->setText("£"+QString::number(std::stod(curBalance),'f',2));
            break;
   }//end of switch


}//end of function



void receipt::loan(int funcID)
{
    ui->label->setText("Loan Application");

    if(funcID==2){
     ui->label_4->setText("Previous Payment");
     ui->label_5->setText("Pending Payment");
    }
    else if (funcID==3){
        //hide value lables as no info to display
        ui->label_3->setVisible(false);
        ui->label_4->setVisible(false);
        ui->label_5->setVisible(false);

        //set text to display
        msg->setText("According to the records, the account\n"
                     "holder already has a pending loan.No\n"
                     "new application can be made until, the\n"
                     "previous one is fully paid.");

        //set the font of the label to match with other lables
        QFont font= msg->font();
        font.setPointSize(10);
        font.setFamily("Open sans");
        font.setBold(true);

        //display the message
        msg->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
        msg->setGeometry(30,50,283,100);
        msg->setFont(font);
        msg->show();
    }//end else

}//end of fucntion

void receipt::on_buttonBox_accepted()
{
    //clear labels
    ui->aNumber->clear();
    ui->preBalance->clear();
    ui->newBalance->clear();
    msg->clear();
    this->close();
}


receipt::~receipt()
{
    delete ui;
}


