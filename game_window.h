#ifndef GAME_WINDOW_H
#define GAME_WINDOW_H

#include <QDialog>
#include "mainwindow.h"
#include "HandlePB.h"
#include "sign_in_up.h"
#include "History_Linkedlist.h"

void SetCallBackGame(void (*copy_ptr)(void));

namespace Ui {
class game_window;
}

class game_window : public QDialog
{
    Q_OBJECT

public:
    void ResetGameScreen();
    void EnableButtons();
    void DisableButtons();
    explicit game_window(QWidget *parent = nullptr);
    ~game_window();

private slots:
    void on_PB_0_0_clicked();

    void on_PB_0_1_clicked();

    void on_PB_0_2_clicked();

    void on_PB_1_0_clicked();

    void on_PB_1_1_clicked();

    void on_PB_1_2_clicked();

    void on_PB_2_0_clicked();

    void on_PB_2_1_clicked();

    void on_PB_2_2_clicked();

    void on_RESET_clicked();


    void on_Return_Prof_clicked();

private:
    Ui::game_window *ui;
};

#endif // GAME_WINDOW_H
