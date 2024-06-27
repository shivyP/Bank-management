QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    accdetails.cpp \
    datValidationFunctions.cpp \
    loanapplication.cpp \
    main.cpp \
    moneytransaction.cpp \
    newclient.cpp \
    qBank.cpp \
    qbankclient.cpp \
    receipt.cpp \
    useracc.cpp

HEADERS += \
    accdetails.h \
    datValidationFunctions.h \
    loanapplication.h \
    moneytransaction.h \
    newclient.h \
    qBank.h \
    qbankclient.h \
    receipt.h \
    useracc.h

FORMS += \
    accdetails.ui \
    loanapplication.ui \
    moneytransaction.ui \
    newclient.ui \
    qbankclient.ui \
    receipt.ui \
    useracc.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
