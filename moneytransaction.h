#ifndef MONEYTRANSACTION_H
#define MONEYTRANSACTION_H

#include <QDialog>

namespace Ui {
class moneyTransaction;
}

class moneyTransaction : public QDialog
{
    Q_OBJECT

public:
    explicit moneyTransaction(QWidget *parent = nullptr);
    ~moneyTransaction();

private slots:
    //for buttons
    void on_cancel_pressed();
    void on_save_pressed();

signals:
   // to pass the type of transaction and the amount to main menu
    void sendData(QString,QString);

private:
    Ui::moneyTransaction *ui;
};

#endif // MONEYTRANSACTION_H
