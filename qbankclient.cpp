#include "qbankclient.h"
#include "ui_qbankclient.h"
using namespace std;


//to use string in switch case for strings
namespace transactionTypes
{
 enum Options{
     deposit,
     loanPayment,
     withdraw
 };
}

transactionTypes::Options passOption(string choice)
{
    if (choice =="Deposit") return transactionTypes::Options::deposit;
    if (choice =="Loan Re-payment") return transactionTypes::Options::loanPayment;
    return transactionTypes::Options::withdraw;

}//end of function





//cunstructor

qbankClient::qbankClient(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::qbankClient)
{
    ui->setupUi(this);

    /*----------------------------------------------------------*
        Set the icon of the page and insert the logo of the bank
     *----------------------------------------------------------*/
    setWindowIcon(QIcon("logo.png")); //set window icon
    QPixmap image("logo.png"); //load image(logo)
    ui->icon->setPixmap(image); //set image
    ui->icon->setScaledContents(true);
    ui->icon->setSizePolicy( QSizePolicy::Ignored, QSizePolicy::Ignored );

    /*----------------------------------------------------------*
        Load the Vector from file-call the function
     *----------------------------------------------------------*/
    loggedUser=0;
    loadFromFile();

    /*----------------------------------------------------------*
       Creator connection between main form and secondary forms
     *----------------------------------------------------------*/

   //To open other window
    regForm = new newClient;
    userProfile = new userAcc;
    moneyT= new moneyTransaction;
    receipt = new class receipt;
    loanApply= new loanApplication;
    myAccount = new accDetails;

    //connect singals
    //to retrun back to menu
    QObject::connect(regForm, &newClient::passSignal, this, &qbankClient::showWindow);
    QObject::connect(userProfile,&userAcc::passSignal,this,&qbankClient::showWindow);
    QObject::connect(myAccount,&accDetails::passSignal,this,&qbankClient::showWindow);

    // to get data from the registration form
    QObject::connect(regForm,SIGNAL(mySignal(QString,int)),this,SLOT(addNewClient(QString,int)));
    QObject::connect(moneyT,SIGNAL(sendData(QString,QString)),this,SLOT(amountUpdate(QString,QString)));
    QObject::connect(loanApply, SIGNAL(amount(QString)),this,SLOT(loanApp(QString)));


}//end of function

//--------------load from file -----------------------------------

void qbankClient::loadFromFile(){
    //loading the vector with data from file
    string details;
    QBank temp;
    ifstream clientFile("clientData.csv");
    if (!clientFile) {
        cout << "\n\n-> Error, no file found!" << endl;
        exit(1);
    }
    else {
        getline(clientFile, details);// discard the first line of the file as its just heading
        while (!clientFile.eof()) {
            getline(clientFile, details);//gets the next line
            if (!details.size()) continue;// prevents enmpty lines from being loaded into the vector
            else {
                temp.loadData(details);
                vecClients.push_back(temp);// add the client into the vecotor
                 }
         }//end of while
      }//end of else
       // cout<<"Vec Size: "<<vecClients.size()<<endl;
        clientFile.close();


}//end of function



//--------------Fuction to call other dialog(windows)--------------

void qbankClient::showWindow(int fucID)
{
    //data to pass when calling other windows
    string fname, lname;
    fname = vecClients[loggedUser].getUserDetails().firstName;
    lname= vecClients[loggedUser].getUserDetails().lastName;

    switch (fucID){
    case 0:
        //call userAcc, the window that shows all the options(services)
        userProfile->pageSetup(fname,lname,accNumber);
        userProfile->setModal(true);
        userProfile->show();
        break;
    case 1:
        //call the moneyTransaction fucntion
        moneyT->setModal(true);
        moneyT->show();
        break;
    case 2:
        //call the loan application form
        //pass user detials to fill up the form
        loanApply->userInfo(accNumber,fname,lname);
        loanApply->setModal(true);
        loanApply->show();
        break;
   case 3:
        //call the accDetails which display user details
        myAccount->userInfo(getUserDeatils());// pass user infromation as string
        myAccount->setModal(true);
        myAccount->show();
        break;
   case 4:
        //call the funstion to delete user account
        deleteAccount();
        break;
   case 5:
        // call the newClient form( this time to edit infromation)
        // pass details than cannot be changed
        regForm->makeChanges(fname,lname,vecClients[loggedUser].getUserDetails().balance,1);
        regForm->getAcc(accNumber); // pass account number
        myAccount->close();//close the account details page
        regForm->setModal(true);
        regForm->show();// show the form to allow editing
        break;
   case 6:
        regForm->resetPage();
        loggedUser=0;// reset the index, so if diffrent user wants to login
        this->show();
        break;
    }//end of switch


}//end of function



//--------------Update the client database (records)--------------
void qbankClient::saveInFile()
{
    //save all the data into file
    ofstream allClients("clientData.csv");
    //set the first line which contains only headings
    allClients << "Account Number" << ',' << "Username" << ',' << "Password" << ',';
    allClients << "First Name" << ',' << "Last Name" << ',' << "Type of Account" << ',';
    allClients << "Balance" << ',' << "Loan" << ',' << "Loan Amount" << '\n';

    for (unsigned int i = 0; i < vecClients.size(); i++) {
        //load in the file (all data has been validated)
        vecClients[i].updateRecordFile(allClients);
    }


}//end of function


//--------------Get user details to pass to other window--------------
string qbankClient::getUserDeatils(){
    // all the inormation willbe combined in a coma seperated string
    //so it can be passed at once
    string info;
    info=accNumber;
    info+=(","+string(vecClients[loggedUser].getUserDetails().firstName));
    info+=(","+string(vecClients[loggedUser].getUserDetails().lastName)+",");
    info.push_back(vecClients[loggedUser].getUserDetails().typeAccount);
    info+=(","+vecClients[loggedUser].getUserDetails().balance);
    info+=(","+ to_string(vecClients[loggedUser].getLoanState().existLoan));
    info+=(","+ to_string(vecClients[loggedUser].getLoanState().loanAmount));
    info+=(","+vecClients[loggedUser].getLoginDetails().username);
    info+=(","+vecClients[loggedUser].getLoginDetails().password);

    return info;
}//end of function



//--------------New Client functions-------------------
void qbankClient::on_newAccount_pressed()
{

    QBank newCustomer;
    accNumber=newCustomer.accountNumber();// get the new account number

    this->hide();//close the current window(login page)
    //clear fileds with username and password
    foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>()){
       lineEdit->clear();
    }
   // regForm->resetPage();
    regForm->getAcc(accNumber);
    regForm->setModal(true);// the firt window cannot be edited until the second one is closed
    regForm->exec();

}//end of funtion



/* the function is linked with the newclient page and it will receive data
   entered by user in the fields*/

void qbankClient::addNewClient(QString name, int ID){
    QBank newCustomer;
    data=accNumber+name.toStdString(); //combine the account number with info from user
    if (ID==1){
        data+=to_string(vecClients[loggedUser].getLoanState().existLoan);
        data+=(","+to_string(vecClients[loggedUser].getLoanState().loanAmount));
    }

    if (!newCustomer.validateUserDetails(data)){
        //the data has been validated
        // if the account number exist, thna just upadate infromation of that client
        if(isClient(accNumber)) upDateAcc(data);
        else{
        //is a new client
            vecClients.push_back(newCustomer);//add the new customer to the list
            saveInFile();
            QMessageBox::information(this,"Confirmation","Account Created!");

            loggedUser= vecClients.size()-1;// the new user will be the last added to the list
            this->close();
            regForm->resetPage();
            regForm->close();
            showWindow(0); //display the main menu
        }//end of else
     }//end of if
    else {
        //worng data entered so diaply error message
       QMessageBox::critical(this, "Error","Enterted Data has been rejected!");
       data.clear();// discard all details;
        }

}//end of function



//--------------Login function-----------------------------
//----gets the username and password entered by users------
void qbankClient::on_login_pressed()
{
   string uName, pass;
   uName=ui->username->text().toStdString();//gets the entered username
   pass=ui->password->text().toStdString();//gets the entered password

   //look for the given credentilas in the record
   if (!isClient(uName, pass, &loggedUser)) {
      QMessageBox::critical(this,"Access Denied","Invalid Username or Password! ");
   }
   else{
     // QMessageBox::information(this,"Access","Access Guaranteed!");
      accNumber=vecClients[loggedUser].getUserDetails().accountNum;
      //clear all the lines
      foreach(QLineEdit* lineEdit, findChildren<QLineEdit*>())
         lineEdit->clear();

      this->hide();
      showWindow(0);//display main menu
   }


}//end of function




//--------------find the user in the records-----------------------
bool qbankClient::isClient(std::string name, std::string password, int* inUser)
{
    // the login credatails are requested by the main class (QBank)
    // than compared with the user input
    // for each element of in the vector, gets the login details and compare them
    for (auto it = vecClients.begin(); it < vecClients.end(); it++) {

        if (name == it[0].getLoginDetails().username &&
            password == it[0].getLoginDetails().password)
        {
           // cout << "\n\n\t\t\tThe login has been successful!\n";
            return true;
            break; //stop searching when the match found
        }
        (*inUser)++;// get the index of the user in the record list
    }
    *inUser = 0; // will return the index of the logged user

    return false;// when no match found
}//end of funtion




bool qbankClient::isClient(std::string aN){
    //if the account number exist than only other infromation need to updated
    for (auto it = vecClients.begin(); it < vecClients.end(); it++) {

        //for each element of the vector finds the account number and compare
        //it with current one
        if (aN == it[0].getUserDetails().accountNum)
        {
            return true;
            break;
        }
      }//end of for
    return false;

}//end of funtion


//------------------Deposite,withdraw,loan re-payment--------------------------

//function linked with moneytransaction page
//gets the data from the dialog
void qbankClient::amountUpdate(QString transaction,QString amount)
{
   double aValue; //convert amount in double

   //validate the amount
   if(isCorrect(amount.toStdString()) || amount==""){
       QMessageBox::critical(this, "Error","Invalid Amount!");
   }
   else {
       //amount is all digits change it to double
       aValue=amount.toDouble();
       switch (passOption(transaction.toStdString())){
             case transactionTypes::Options::deposit:
                   //call deposit function
                   deposit(&aValue);
                   break;
             case transactionTypes::Options::withdraw:
                   //call withdraw function
                   withdraw(&aValue);
                   break;
             case transactionTypes::Options::loanPayment:
                   // call loan Function
                   loanPayment(&aValue);
                   break;
       }
       saveInFile();//update the records
   }

}//end of function



//-------------------deposit---------------------------------------
void qbankClient::deposit(double* value)
{

    double currentAmount;
    string preBalance=vecClients[loggedUser].getUserDetails().balance;// balance is stored as string
    currentAmount=stod(preBalance);//convert it to double from strings
    currentAmount+=(*value);

    vecClients[loggedUser].updateBalance(currentAmount);//update balance

    QMessageBox::information(this,"Confrimation", "Transaction Successful!");

    //display the recipt of the transaction
    receipt->setupData(1,accNumber,preBalance, to_string(currentAmount));
    receipt->setModal(true);
    receipt->exec();
    moneyT->close();
    showWindow(0);//back to main menu


}//end of function

//-------------------withdraw------------------------------------
void qbankClient::withdraw(double* value)
{
    //withdraw money
    double currentBalance, newBalance;
    currentBalance =stod(vecClients[loggedUser].getUserDetails().balance);

    //check if user has sufficient balance to withdraw requetsed amount
    if (currentBalance == 0 || currentBalance < *value) {
        QMessageBox::critical(this,"Erorr","Insufficient balance!");
    }
    else {
        //if sufficinet balance
        newBalance= currentBalance-(*value); //reduce current balance
        vecClients[loggedUser].updateBalance(newBalance);
        QMessageBox::information(this,"Confrimation", "Transaction Successful!");
        // show receipt
        receipt->setupData(1,accNumber,to_string(currentBalance), to_string(newBalance));
        receipt->setModal(true);
        receipt->exec();
        moneyT->close();
        showWindow(0);//back to menu

    }//end of else

}//end of function


//-------------------Loan Repayment----------------------------------
void qbankClient::loanPayment(double* value){

    double loanAmount, pendingAmount;
    bool loanExist=vecClients[loggedUser].getLoanState().existLoan;
    loanAmount = vecClients[loggedUser].getLoanState().loanAmount;
    pendingAmount=loanAmount;

    //check if user has any approved loan and what is the pending amount
    if (loanExist == 1 && loanAmount>=(*value)){
        pendingAmount=loanAmount-(*value);// reduce the pending amount
        //if full amount re-paid, than no more existing loans
        loanExist = (pendingAmount == 0) ? false:true;
        //update records
        vecClients[loggedUser].loanApplication(loanExist,pendingAmount);

        QMessageBox::information(this,"Confrimation", "Transaction Successful!");
        //print receipt
        receipt->setupData(2,accNumber,to_string(loanAmount),to_string(pendingAmount));
        receipt->setModal(true);
        receipt->exec();
        moneyT->close();

        showWindow(0);//back to menu

    }//end of if

    else if (loanExist == 0){
        //in case there is no pending payment
        QMessageBox::critical(this, "Error", "NO PENDING PAYMENT!");
    }
    else {
        //when a greater amount is entred to what is pending
        QString msg=QString("Transaction failed!\nPending amount is: £%1").arg(QString::number(loanAmount));
        QMessageBox::critical(this, "Failed Transaction",msg);
    }

}//end of function




//-------------------Loan Application-----------------------------------------
//function linked with loanApplication page which will pass the amount entered
void qbankClient::loanApp(QString amount)
{
    if (isCorrect(amount.toStdString())){
        QMessageBox::critical(this,"Invalid Information","Invalid Data!");
    }
    //if a loan has already been approved , no further application can be made
    else if (vecClients[loggedUser].getLoanState().existLoan==1){
        QMessageBox::critical(this,"Application Denied","Application failed!");
        receipt->setupData(3);
        receipt->setModal(true);
        receipt->exec();
    }
    else {
        QMessageBox::information(this,"Confirmation","Application Approved!");
        vecClients[loggedUser].loanApplication(true,amount.toDouble());
        //show the receipt
        receipt->setupData(2,accNumber,"0",amount.toStdString());
        receipt->setModal(true);
        receipt->exec();

    }
    loanApply->close();//close the page as no more needed
    saveInFile(); // update the file

}//end of function


//-------------------Delete account----------------------------------
void qbankClient::deleteAccount()
{
    //the accoutn will be deleted
    for (unsigned int i = loggedUser; i < vecClients.size()- 1; i++)
        vecClients[i] = vecClients[i + 1];

    vecClients.pop_back(); // deletes the last value to srink the size of the vector
    saveInFile();
    QMessageBox::critical(this,"Account Changes","The Account has been deleted!");
    userProfile->close();
    this->show();

}//end of function


//-------------------upDateAcc----------------------------------

void qbankClient::upDateAcc(std::string info){
    vecClients[loggedUser].loadData(info);//update user details
    QMessageBox::information(this, "Confirmation","Account Details Updated!");
    saveInFile();
    regForm->resetPage();
    regForm->close();
    showWindow(0);//back to main menu

}//end of function




qbankClient::~qbankClient()
{
    delete ui;
}



