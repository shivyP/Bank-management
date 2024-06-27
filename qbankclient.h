#ifndef QBANKCLIENT_H
#define QBANKCLIENT_H

#include <QMainWindow>
#include <QObject>
#include "qBank.h"
#include "newclient.h"
#include "useracc.h"
#include "receipt.h"
#include "loanapplication.h"




QT_BEGIN_NAMESPACE
namespace Ui { class qbankClient; }
QT_END_NAMESPACE

class qbankClient : public QMainWindow
{
    Q_OBJECT


public:
    qbankClient(QWidget *parent = nullptr);
    ~qbankClient();

     void menu(); // this will be the same, it will call the load function

     void loadFromFile();
     void saveInFile();
     bool isClient(std::string name, std::string password, int* inUser);
     bool isClient(std::string aN);
     void upDateAcc(std::string info);
    // void userAction(int inUser); // will get the index of the logged user
     void deposit(double* value);
     void withdraw(double* value);
     void loanPayment(double* value);
     void deleteAccount();
     std::string getUserDeatils();

private slots:
     void on_newAccount_pressed();
     void addNewClient(QString,int);
     void on_login_pressed();
     void amountUpdate(QString,QString);
     void showWindow(int fucID);
     void loanApp(QString amount);



signals:
     void displayAcc(std::string);
    // void returnToMenu();
private:
   Ui::qbankClient *ui;
   newClient *regForm;
   userAcc *userProfile;
   moneyTransaction *moneyT;
   receipt * receipt;
   loanApplication *loanApply;
   accDetails *myAccount;

   std:: string data;
   std:: string accNumber;
   int loggedUser;
   std:: vector <QBank> vecClients; // will include all the client data

};
#endif // QBANKCLIENT_H
