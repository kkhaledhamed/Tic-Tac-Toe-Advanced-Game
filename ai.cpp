#include "ai.h"
#include "ui_game_window.h"
#include "nextgamesettings.h"
#include <QDebug>
#include <QMessageBox>
#include <QTimer>
#include "database.h"
#include "sign_in_up.h"
void (*CallBackAIGame)(void);

ai::ai(QWidget *parent)
    : game_window(parent)
    , ui(new Ui::game_window)
{
    ui->setupUi(this);
    initializeBoard();
    printBoard();
    connect(ui->RESET, &QPushButton::clicked, this, &ai::on_RESET_clicked);
    connect(ui->Return_Prof, &QPushButton::clicked, this, on_Return_Prof_clicked);

    this->setStyleSheet(
        ".ai {"
        "background-image: url(file:///C:/Users/Spectra/Desktop/main.jpg);"
        "opacity: 0.5;"
        "background-size: cover;"
        "background-position: center;"
        "background-repeat: no-repeat;"
        "}"
        );

    // Assuming currenttoken is defined and accessible
    if (currenttoken == 'X' || currenttoken == 'O') {
        playerToken = QString(currenttoken);
        aiToken = (playerToken == "X") ? "O" : "X"; // Set AI token to the opposite of player token
    } else {
        playerToken = "X"; // Default to 'X' if currenttoken is invalid
        aiToken = "O"; // AI plays with 'O'
    }
    currentPlayer = playerToken; // Start with the player's token

    // Start the game with AI's move if the player is 'O'
    if (playerToken == "O") {
        QTimer::singleShot(500, this, &ai::makeAIMove); // Delay AI move for 500ms (optional)
    }
}

ai::~ai()
{
    delete ui;
}

void ai::initializeBoard()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cells[i][j] = new QPushButton("", this);
            cells[i][j]->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
            cells[i][j]->setProperty("row", i);
            cells[i][j]->setProperty("col", j);
            cells[i][j]->setStyleSheet("background-color: rgb(255, 0, 127); color: white;"); // Set button color
            ui->gridLayout->addWidget(cells[i][j], i, j);
            connect(cells[i][j], &QPushButton::clicked, this, &ai::cellClicked);
            board[i][j] = ' ';
        }
    }
}

void ai::printBoard()
{
    QFont font;
    font.setPointSize(26);  // Set the font size for X and O
    font.setBold(true);     // Make the font bold
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cells[i][j]->setText(board[i][j] == ' ' ? "" : QString(board[i][j]));
            cells[i][j]->setFont(font);  // Set the font for the cells
        }
    }
}

void ai::cellClicked()
{
    QPushButton *clickedButton = qobject_cast<QPushButton*>(sender());
    int row = clickedButton->property("row").toInt();
    int col = clickedButton->property("col").toInt();

    // Ensure player can only make moves if it's their turn
    if (currentPlayer == playerToken && board[row][col] == ' ' && !checkWin(playerToken) && !checkWin(aiToken) && !isBoardFull()) {
        board[row][col] = playerToken.at(0).toLatin1();
        printBoard();
        QFont font = clickedButton->font();
        font.setPointSize(26);  // Adjust the font size as needed
        font.setBold(true);     // Make the font bold
        clickedButton->setFont(font);  // Set the font for the clicked button
        if(doesUserDatabaseExist(Amir));

        else
            createUserDatabase(Amir);

        if (checkWin(playerToken)) {
            QMessageBox::information(this, "Game Over", playerToken + " wins!");
            saveGameToUserDatabase(Amir, "You Won");
            resetGame();
        } else if (isBoardFull()) {
            QMessageBox::information(this, "Game Over", "It's a draw!");

          saveGameToUserDatabase(Amir, "Draw");
            resetGame();
        } else {
            currentPlayer = aiToken;
            // After player's move, check if it's AI's turn
            if (currentPlayer == aiToken) {
                QTimer::singleShot(500, this, &ai::makeAIMove); // Delay AI move for 500ms (optional)
            }
        }
    }
}

void ai::resetGame()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            board[i][j] = ' ';
        }
    }
    currentPlayer = playerToken; // Reset to starting player
    printBoard();

    // If AI starts, make the first move
    if (currentPlayer == aiToken) {
        QTimer::singleShot(500, this, &ai::makeAIMove); // Delay AI move for 500ms (optional)
    }
}

bool ai::isBoardFull()
{
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (board[i][j] == ' ') {
                return false;
            }
        }
    }
    return true;
}

bool ai::checkWin(QString player)
{
    char token = player.at(0).toLatin1();
    // Check rows and columns
    for (int i = 0; i < 3; ++i) {
        if ((board[i][0] == token && board[i][1] == token && board[i][2] == token) ||
            (board[0][i] == token && board[1][i] == token && board[2][i] == token)) {
            return true;
        }
    }
    // Check diagonals
    if ((board[0][0] == token && board[1][1] == token && board[2][2] == token) ||
        (board[0][2] == token && board[1][1] == token && board[2][0] == token)) {
        return true;
    }
    return false;
}

int ai::minimax(char board[3][3], int depth, bool isMaximizing)
{
    int score = evaluate(board);

    // If AI wins the game
    if (score == 10) {
        return score;
    }
    // If player wins the game
    if (score == -10) {
        return score;
    }
    // If there are no more moves and no winner, it's a draw
    if (isBoardFull()) {
        return 0;
    }

    // Maximizing player (AI)
    if (isMaximizing) {
        int best = -1000;

        // Traverse all cells, evaluate minimax function for all empty cells
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    // Make the move
                    board[i][j] = aiToken.at(0).toLatin1();

                    // Call minimax recursively and choose the maximum value
                    best = std::max(best, minimax(board, depth + 1, !isMaximizing));

                    // Undo the move
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
    // Minimizing player (Player)
    else {
        int best = 1000;

        // Traverse all cells, evaluate minimax function for all empty cells
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] == ' ') {
                    // Make the move
                    board[i][j] = playerToken.at(0).toLatin1();

                    // Call minimax recursively and choose the minimum value
                    best = std::min(best, minimax(board, depth + 1, !isMaximizing));

                    // Undo the move
                    board[i][j] = ' ';
                }
            }
        }
        return best;
    }
}

int ai::evaluate(char board[3][3])
{
    // Check rows and columns for a win
    for (int row = 0; row < 3; row++) {
        if (board[row][0] == board[row][1] && board[row][1] == board[row][2]) {
            if (board[row][0] == aiToken.at(0).toLatin1()) return 10; // AI wins
            else if (board[row][0] == playerToken.at(0).toLatin1()) return -10; // Player wins
        }
        if (board[0][row] == board[1][row] && board[1][row] == board[2][row]) {
            if (board[0][row] == aiToken.at(0).toLatin1()) return 10; // AI wins
            else if (board[0][row] == playerToken.at(0).toLatin1()) return -10; // Player wins
        }
    }

    // Check diagonals for a win
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) {
        if (board[0][0] == aiToken.at(0).toLatin1()) return 10; // AI wins
        else if (board[0][0] == playerToken.at(0).toLatin1()) return -10; // Player wins
    }
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) {
        if (board[0][2] == aiToken.at(0).toLatin1()) return 10; // AI wins
        else if (board[0][2] == playerToken.at(0).toLatin1()) return -10; // Player wins
    }

    // If no one wins
    return 0;
}

void ai::makeAIMove()
{
    int bestMoveVal = -1000;
    int bestMoveRow = -1;
    int bestMoveCol = -1;

    // Traverse all cells, evaluate minimax function for all empty cells
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // Check if cell is empty
            if (board[i][j] == ' ') {
                // Make the move
                board[i][j] = aiToken.at(0).toLatin1();

                // Compute evaluation function for this move
                int moveVal = minimax(board, 0, false);

                // Undo the move
                board[i][j] = ' ';

                // If the value of the current move is more than the best value, update best
                if (moveVal > bestMoveVal) {
                    bestMoveRow = i;
                    bestMoveCol = j;
                    bestMoveVal = moveVal;
                }
            }
        }
    }
    QFont font;
    font.setPointSize(26);  // Adjust the font size as needed
    font.setBold(true);     // Make the font bold
    cells[bestMoveRow][bestMoveCol]->setFont(font);
    // Make the best move
    if (bestMoveRow != -1 && bestMoveCol != -1) {
        board[bestMoveRow][bestMoveCol] = aiToken.at(0).toLatin1();
        printBoard();
        if(doesUserDatabaseExist(Amir));

        else
            createUserDatabase(Amir);

        if (checkWin(aiToken)) {
            QMessageBox::information(this, "Game Over", aiToken + " wins!");
          saveGameToUserDatabase(Amir, "AI Won");
            resetGame();
        } else if (isBoardFull()) {
            QMessageBox::information(this, "Game Over", "It's a draw!");
           saveGameToUserDatabase(Amir, "Draw");
            resetGame();
        } else {
            currentPlayer = playerToken; // Switch back to player's turn
        }
    }
}


void SetCallBackAIGame(void (*Copy_ptr)(void)){
    CallBackAIGame = Copy_ptr;
}
void ai::on_RESET_clicked()
{
    ResetGameScreen();
    resetGame();
}

void ai::on_Return_Prof_clicked()
{




     resetGame();
    close();
     CallBackAIGame();
}
