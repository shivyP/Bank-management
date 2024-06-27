#include "newclient.h"
#include "ui_newclient.h"

using namespace std;
newClient::newClient(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newClient)
{
    ui->setupUi(this);
    setWindowIcon(QIcon("logo.png"));


}

//function to rest the content of the page
void newClient::resetPage(){

     ui->welcome_label->setText("Registration Form");// title changed back to original
     //clear all the fileds

     foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>()) {
        lineEdit->clear();
     }
     //reset the radio buttons if checked;
     foreach (QRadioButton* rB,findChildren<QRadioButton*>()){
         rB->setAutoExclusive(false);
         rB->setChecked(false);
     }
     // the readonly fileds are rest to normal to allow user input
     ui->firstname->setReadOnly(false);
     ui->lastname->setReadOnly(false);
     ui->balance->setReadOnly(false);

}

//get the account number to display in the form
void newClient::getAcc(std::string ac){

    ui->accNum->setText(QString::fromStdString(ac));
    ui->accNum->setCursor(Qt::ForbiddenCursor);
}

//to display the user information when the form is used to edit user information
void newClient::makeChanges(std::string fname,std::string lname,std::string balance, int ID){
    functionID= ID;
    //the form is now used to allow user to change details
    ui->welcome_label->setText("Account Settings");
    ui->firstname->setText(QString::fromStdString(fname));
    ui->lastname->setText(QString::fromStdString(lname));
    ui->balance->setText(QString::number(std::stod(balance),'f',2));

    //set the non editable fields to readonly
    ui->firstname->setReadOnly(true);
    ui->lastname->setReadOnly(true);
    ui->balance->setReadOnly(true);
   //change the cursor to let user know that it cannot be edited
    foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>()) {
            if(lineEdit->isReadOnly())
                lineEdit->setCursor(Qt::ForbiddenCursor);
            else
                lineEdit->setCursor(Qt::IBeamCursor);
     }


}//end of fuction


//for save button
void newClient::on_newAccount_Save_pressed()
{


    //check if any field is empty and display error message
    if (ui->newUsername->text()=="" || ui->newPassword->text()=="" ||
        ui->firstname->text()==""   || ui->lastname->text()==""   ||
        ui->balance->text()== "" )
    {

       QMessageBox::critical(this,"Invalid Information","Invalid Data!");
    }
    else {
          dataClient=NULL;//rest the variable

          //check if radio button are checked, if not display error message
          if (!ui->current->isChecked() && !ui->saving->isChecked()){
              QMessageBox::critical(this,"Invalid Information","Please Choose Type of Account");
          }
          else {
              //merge the data in a string saperated by coma
             dataClient.append(","+ui->newUsername->text());
             dataClient.append(","+ui->newPassword->text());
             dataClient.append(","+ui->firstname->text());
             dataClient.append(","+ui->lastname->text());


             if (ui->current->isChecked())
                   dataClient.append(",c");

             else if (ui->saving->isChecked())
                   dataClient.append(",s");
             //when the save button is pressed from accout setting page
             //than the no need of 0,0 for loan and loan amout
             //as the user might have existing loan
             if(functionID==1){
                 dataClient.append(","+ui->balance->text()+",");
             }
             else
                 dataClient.append(","+ui->balance->text()+",0,0");
             emit mySignal(dataClient,1);// pass the string to the main menu

            // resetPage();// reset all the fileds
        }//end of else

      }//end of main else


}//end of function








void newClient::on_cancel_pressed()
{


   resetPage();//reset the page

  // this->close();
  // cout<<"fuc:"<<functionID;
   if (functionID == 1)
        this->close();
   else{
       emit passSignal(6); //pass signal to main menu
       this->close();
   }
}//end of fucntion






newClient::~newClient()
{
    delete ui;
}
