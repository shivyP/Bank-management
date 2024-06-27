#ifndef USERACC_H
#define USERACC_H

#include <QDialog>
#include <QMessageBox>
#include "moneytransaction.h"
#include "accdetails.h"


namespace Ui {
class userAcc;
}

class userAcc : public QDialog
{
    Q_OBJECT

public:
    explicit userAcc(QWidget *parent = nullptr);
    ~userAcc();
    void pageSetup(std::string name,std::string lname, std::string accNum);

private slots:
    void on_moneyTrasaction_pressed();
    void on_LoanApplication_clicked();
    void on_deleteAccount_pressed();
    void on_viewAccount_pressed();
    void on_cancel_pressed();

signals:
    void passSignal(int);



private:
    Ui::userAcc *ui;
   // moneyTransaction *mTransaction;
};

#endif // USERACC_H
