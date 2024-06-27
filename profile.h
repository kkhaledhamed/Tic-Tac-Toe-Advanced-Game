#ifndef PROFILE_H
#define PROFILE_H

#include <QDialog>
#include <QMessageBox>
#include "Player_LinkedList.h"
#include "mainwindow.h"
#include "nextgamesettings.h"

#define CHANGE_INFO        5

extern playerlinkedlist horiz;
extern playerlinkedlist::player* currentPlayer;

void SetCallBackChangeInfo(void (*Copy_PtrCallBackInfo)(void));


namespace Ui {
class Profile;
}

class Profile : public QDialog
{
    Q_OBJECT

public:
    explicit Profile(QWidget *parent = nullptr);
    ~Profile();

private slots:
    void on_ToWelcome_clicked();

    void on_ToNextGame_clicked();

    void on_EditAccountData_clicked();

    void on_pushButton_clicked();

    void on_game_history_clicked();

private:
    Ui::Profile *ui;
};

#endif // PROFILE_H
