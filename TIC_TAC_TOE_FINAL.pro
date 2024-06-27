QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    HandlePB.cpp \
    ai.cpp \
    database.cpp \
    game_window.cpp \
    main.cpp \
    mainwindow.cpp \
    nextgamesettings.cpp \
    profile.cpp \
    sign_in_up.cpp

HEADERS += \
    HandlePB.h \
    History_LinkedList.h \
    Player_LinkedList.h \
    ai.h \
    database.h \
    game_window.h \
    mainwindow.h \
    nextgamesettings.h \
    profile.h \
    sign_in_up.h

FORMS += \
    game_window.ui \
    mainwindow.ui \
    nextgamesettings.ui \
    profile.ui \
    sign_in_up.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    tst_test.qml
