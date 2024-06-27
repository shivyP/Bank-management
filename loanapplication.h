#ifndef LOANAPPLICATION_H
#define LOANAPPLICATION_H

#include <QDialog>

namespace Ui {
class loanApplication;
}

class loanApplication : public QDialog
{
    Q_OBJECT

public:
    explicit loanApplication(QWidget *parent = nullptr);
    ~loanApplication();
    //get infromation about user , to display on screen
    void userInfo(std::string accNumber, std::string fname, std::string lname);

private slots:
    //button slots
    void on_save_clicked();
    void on_cancel_pressed();

signals:
    //signal required to pass the entered amount to the main menu
    void amount(QString);
private:
    Ui::loanApplication *ui;
};

#endif // LOANAPPLICATION_H
