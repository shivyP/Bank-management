#ifndef ACCDETAILS_H
#define ACCDETAILS_H

#include <QDialog>
#include <sstream>

namespace Ui {
class accDetails;
}

class accDetails : public QDialog
{
    Q_OBJECT

public:
    explicit accDetails(QWidget *parent = nullptr);
    ~accDetails();
    void userInfo(std::string data); //get the user infromation
private slots:
    //for buttons
    void on_cancel_pressed();
    void on_edit_pressed();
signals:
    void passSignal(int);//pass the signal to the main window
private:
    Ui::accDetails *ui;
};

#endif // ACCDETAILS_H
