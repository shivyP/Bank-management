#include "qBank.h"

using namespace std;


QBank::QBank()
{
    //default values
    //the data will be loaded here
    customers.accountNum = "12345";
    customers.loginCredentials.username = "qbank";
    customers.loginCredentials.password = "qbank";
    customers.balance = 0.00;
    customers.loanState.loanAmount = 0.00;
    customers.loanState.existLoan = false;
}

//------------Load the data--------
void QBank::loadData(std::string infoClient)
{
    //gets the data string as a parameter
    // read from the file

    string proValue;
    stringstream cD(infoClient); //change it from string to sstream
    //separete the line extracted from the file
    getline(cD, customers.accountNum, ',');
    getline(cD, customers.loginCredentials.username, ',');
    getline(cD, customers.loginCredentials.password, ',');

    getline(cD, proValue, ',');
    strcpy_s(customers.firstName, proValue.c_str());// convert the string into a char array

    getline(cD, proValue, ',');
    strcpy_s(customers.lastName, proValue.c_str());

    getline(cD, proValue, ',');
    customers.typeAccount = proValue[0];

    getline(cD,customers.balance, ','); // the balance is read as a string, for validation

    getline(cD, proValue, ',');
    customers.loanState.existLoan = (proValue == "0" ? false : true);

    getline(cD, proValue);
    customers.loanState.loanAmount =std::stod(proValue);

}//end of function


//---------------set accountNumber------------
//generates random acocunt number of 5 digits
string QBank::accountNumber() {
    string acNum;
    int code;
    srand(time(NULL));

    acNum = char(49 + rand() % 9); // generate the first digit to avoid first number to be 0
    for (int i = 0; i < 4; i++) {
        code = rand() % 10 + 48;
        acNum += char(code);
    }
   return acNum;

}//end of function


//---------------Validate information added by user ------------
// get the data from the user when a newClient is added to
//the system
int QBank::validateUserDetails(string userData){

    loadData(userData); //assign it to the struct
    int invalidData=0; //variable to count when incorrect data found

    invalidData+=isCorrect(customers.firstName);
    invalidData+=isCorrect(customers.lastName);
    invalidData+=isCorrect(customers.balance);

    if (customers.loginCredentials.username == " "||customers.loginCredentials.password == " ")
       invalidData+=1;


    return invalidData;


}//end of function



login QBank::getLoginDetails()
{
    //will pass the logindetails (username, password)
    return customers.loginCredentials;
}//end of function



QBank::clientData QBank::getUserDetails()
{
    //return strucct clientData
    return customers;
}//end of function



loan QBank::getLoanState()
{
    //retutn loan class (exist loan, loan amount)
    return customers.loanState;
}//end of function



void QBank::updateBalance(double amount)
{
    customers.balance = to_string(amount);
}//end of function


//update loan class when a application is approved or
//when a loan has been fully re-paied
void QBank::loanApplication(bool loanState, double newAmount)
{
    customers.loanState.existLoan = loanState;
    customers.loanState.loanAmount = newAmount;
}




//save data into file
void QBank::updateRecordFile(std::ofstream& fileName)
{
    //save data into file
    fileName << customers.accountNum << ',' << customers.loginCredentials.username << ',';
    fileName << customers.loginCredentials.password << ',' << customers.firstName << ',';
    fileName << customers.lastName << ',' << customers.typeAccount << ',' << customers.balance << ',';
    fileName << customers.loanState.existLoan << ',' << customers.loanState.loanAmount << '\n';
}



