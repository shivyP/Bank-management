#ifndef NEWCLIENT_H
#define NEWCLIENT_H


#include <iostream>
#include <string>
#include <QWizard>
#include <QtWidgets>
#include <QMessageBox>
#include <QDialog>

namespace Ui {
class newClient;
}

class newClient : public QDialog
{
    Q_OBJECT

public:
    explicit newClient(QWidget *parent = nullptr);
    ~newClient();

    QString dataClient;
    QString getValues();
    void getAcc(std::string);
    void returnToMenu();//for getting back to main menu from other function
    // when user wants to edit account details
    void makeChanges(std::string fname,std::string lname,std::string balance, int ID);
    void resetPage();//to reset the page

private slots:
     void on_newAccount_Save_pressed();
     void on_cancel_pressed();

   //  void on_cancel_clicked();

signals:
     void mySignal(QString,int);//pass the data
     void passSignal(int);//to send signal to main menu, when cancle is clicked
private:

    Ui::newClient *ui;
    int functionID;


};

#endif // NEWCLIENT_H
