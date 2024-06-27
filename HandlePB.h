#ifndef HANDLEPB_H
#define HANDLEPB_H

#include <QString>
#include <QVector>
#include <QMessageBox>

extern int  Entered_Row;
extern int  Entered_Col;
extern char currenttoken;
extern int  movesLeft;
extern QString PlayingMode;
extern QVector<QVector<char>> board;
extern char account_owner_token;

// Function to check if a player has won
bool checkWin(const QVector<QVector<char>> &board, char player);

void ResetGame();

void OnClick(char& winToken);




#endif // HANDLEPB_H
