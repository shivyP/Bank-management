#include "qbankclient.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qbankClient w;
    w.show();
    return a.exec();
}
