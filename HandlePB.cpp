#include "HandlePB.h"

char account_owner_token= 'X';
int Entered_Row = 0;
int Entered_Col = 0;
char currenttoken = 'X'; // Player X starts
int movesLeft = 9;
QString PlayingMode = "TwoPlayers";/*or AI*/
QVector<QVector<char>> board(3, QVector<char>(3, '.'));
char ARRTestDraw[3][3]={{'X','O','X'},{'X','X','O'},{'O','X','O'}};
char ARRTestXWin[3][3]={{'X','X','X'},{'X','X','O'},{'O','X','O'}};
char ARRTestOWin[3][3]={{'X','X','X'},{'X','X','O'},{'O','O','O'}};
bool checkWin(const QVector<QVector<char>>& board, char playertoken) {
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if (board[i][0] == playertoken && board[i][1] == playertoken && board[i][2] == playertoken)
            return true;
        if (board[0][i] == playertoken && board[1][i] == playertoken && board[2][i] == playertoken)
            return true;
    }
    // Check diagonals
    if (board[0][0] == playertoken && board[1][1] == playertoken && board[2][2] == playertoken)
        return true;
    if (board[0][2] == playertoken && board[1][1] == playertoken && board[2][0] == playertoken)
        return true;
    return false;
}

void ResetGame(){
    movesLeft = 9;
    for(int i = 0; i < 3; ++i){
        for(int j = 0; j < 3; ++j){
            board[i][j] = '.';
        }
    }
}

void OnClick(char& winToken){
    // Main game loop
    if(movesLeft > 0) {
        // Get the row and column for the next move
        int row, col;
        row = Entered_Row;
        col = Entered_Col;

        // Check if the move is valid
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            QMessageBox::warning(nullptr, "Warning", "Invalid move");
        }

        if (winToken != 'S'){
            // Make the move
            board[row][col] = currenttoken;
        }

        // Check if the current player has won
        if (checkWin(board, currenttoken)) {
            for(int i = 0; i < 3; ++i){
                for(int j = 0; j < 3; ++j){
                    board[i][j] = '.';
                }
            }
            if(currenttoken == 'X'){
                winToken = 'X';
                //QMessageBox::information(nullptr, "Result of the game", "Horay, player X have just win :>");
            }
            else{
                winToken = 'O';
                //QMessageBox::information(nullptr, "Result of the game", "Horay, player O have just win :>");
            }
        }
        else if (winToken == 'S'){
            //Do nothing.
        }
        // Switch to the other player
        else{
            currenttoken = (currenttoken == 'X') ? 'O' : 'X';
        }

    }
    // If no one has won, it's a draw
    else if (movesLeft == 0) {
        winToken = 'N';
        //QMessageBox::about(nullptr, "Result of the game", "It's a draw");
    }
}
int OnClickTest(char winTokenTest, int rowTest, int colTest) {
    if (true) {
        int row = rowTest;
        int col = colTest;
        if (row < 0 || row > 2 || col < 0 || col > 2) {
            return -1; // Invalid move
        }

        if (true) { // This condition seems redundant as it always evaluates to true
            if (winTokenTest == 'X') {
                return 10;
            } else {
                winTokenTest = 'O';
                return 11;
            }
        }
    }
    return 0; // Default return value if no condition is met
}
//1 X win , 0 draw , -1 O Win
int checkwintestdraw(char playertokenTest) {
    for (int i = 0; i < 3; ++i) {
        if (!(ARRTestDraw[i][0] == playertokenTest && ARRTestDraw[i][1] == playertokenTest && ARRTestDraw[i][2] == playertokenTest))
            return 0;
    }
 }

int checkwintestX(char playertokenTest) {
    for (int i = 0; i < 3; ++i) {
        if (ARRTestXWin[i][0] == playertokenTest && ARRTestXWin[1][i] == playertokenTest && ARRTestXWin[2][i] == playertokenTest)
            return 1;
    }
}

int checkwintestO(char playertokenTest) {
    for (int i = 0; i < 3; ++i) {
        if (ARRTestOWin[i][0] == playertokenTest && ARRTestOWin[1][i] == playertokenTest && ARRTestOWin[2][i] == playertokenTest)
            return 1;
    }
}
