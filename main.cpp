#include <QApplication>

#include "mainwindow.h"
#include "game_window.h"
#include "sign_in_up.h"
#include "ai.h"

void return_to_profile_from_game();
void return_to_change_info();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    SetCallBackGame(return_to_profile_from_game);
    SetCallBackAIGame(return_to_profile_from_game);
    SetCallBackChangeInfo(return_to_change_info);
    w.show();
    return a.exec();
}

void return_to_change_info(){
    Sign_In_Up* newChangeInfo;
    newChangeInfo = new Sign_In_Up();
    newChangeInfo->show();
}

void return_to_profile_from_game(){
    Profile* newprofwind;
    newprofwind = new Profile();
    newprofwind->show();
}
