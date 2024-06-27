#ifndef RECEIPT_H
#define RECEIPT_H

#include <QDialog>
#include <QWizard>
#include <QtWidgets>

namespace Ui {
class receipt;
}

class receipt : public QDialog
{
    Q_OBJECT

public:
    explicit receipt(QWidget *parent = nullptr);
    ~receipt();
    //for initial values on screen
    void setupData(int funcID,std::string account="",std::string preBalance="0", std::string curBalance="");

    void loan(int funcID); // for loan related receipts

private slots:
    //for buttons
    void on_buttonBox_accepted();


private:
    Ui::receipt *ui;
    QLabel *msg;
};

#endif // RECEIPT_H
