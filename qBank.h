#ifndef QBANK_H
#define QBANK_H


#include "datValidationFunctions.h"
#include <fstream>
#include <sstream>
#include <vector>
#include <iomanip>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <QString>


class loan {
public:
    bool existLoan = false;
    double loanAmount = 0.0;
};

class login {
public:
    std::string username;
    std::string password;
};

class QBank {
private:
    // data structure
    struct clientData {
        std::string accountNum;
        char firstName[25];
        char lastName[25];
        char typeAccount;
        std::string balance;// is a string so each digit can be chacked
        login loginCredentials;
        loan loanState;
    };
    clientData customers;

public:
    //add value

    QBank();

    void loadData(std::string infoClient);
    int validateUserDetails(std::string userData);// gets new values
    std::string accountNumber();
    void updateRecordFile(std::ofstream& fileName);
    login getLoginDetails();
    clientData getUserDetails();
    loan getLoanState();
    void updateBalance(double amount);
    void loanApplication(bool loanState, double newAmount);

};


#endif // !

