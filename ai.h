#ifndef AI_H
#define AI_H

#include <QMainWindow>
#include <QPushButton>
#include <QMessageBox>
#include <QTimer>
#include "game_window.h"
void SetCallBackAIGame(void (*Copy_ptr)(void));

QT_BEGIN_NAMESPACE
namespace Ui { class game_window; }
QT_END_NAMESPACE

class ai : public game_window
{
    Q_OBJECT

public:
    ai(QWidget *parent = nullptr);
    ~ai();

private slots:
    void on_RESET_clicked();
    void on_Return_Prof_clicked();
    void cellClicked();
    void resetGame();
    void makeAIMove();

private:
    Ui::game_window *ui;
    QPushButton *cells[3][3];
    char board[3][3];
    QString currentPlayer;
    QString aiToken ;
    QString playerToken ;
    void initializeBoard();
    void printBoard();
    bool isBoardFull();
    bool checkWin(QString player);
    int minimax(char board[3][3], int depth, bool isMaximizing);
    int evaluate(char board[3][3]);
};

#endif // AI_H
