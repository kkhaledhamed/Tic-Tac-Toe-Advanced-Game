#include "game_window.h"
#include "ui_game_window.h"
// #include "game_window.h"
// #include <QtSql/QSqlDatabase>
// #include <QtSql/QSqlQuery>
// #include <QtSql/QSqlError>
// #include <QDebug>

void (*CallBack)(void);
char winToken = '\0';

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
void saveGameToDatabase(const QString &username) {
    // Determine the winner
    QString winner;
    if (winToken == account_owner_token) {
        winner = "you won";
    }
    else if(winToken=='N') {
        winner = "Draw";
    }
    else {
        if (PlayingMode == "AI") {
            winner = "AI won";
        } else {
            winner = "Player 2 won";
        }
    }
    if(doesUserDatabaseExist(username));

    else
        createUserDatabase(username);

    // Save the game result to the user's database
    saveGameToUserDatabase(username, winner);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

game_window::game_window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::game_window)
{
    ui->setupUi(this);
    account_owner_token = currenttoken ;
    connect(ui->PB_0_0, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_0_1, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_0_2, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_1_0, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_1_1, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_1_2, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_2_0, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_2_1, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
    connect(ui->PB_2_2, &QPushButton::clicked, [&]() {
        OnClick(winToken);
        if(winToken == 'X')
            QMessageBox::information(this, "Result of the game", "Horay, player X have just win :>");
        else if(winToken == 'O')
            QMessageBox::information(this, "Result of the game", "Horay, player O have just win :>");
        else if(winToken == 'N')
            QMessageBox::about(this, "Result of the game", "It's a draw");
        if(winToken == 'X' || winToken == 'O'|| winToken == 'N'){
            saveGameToDatabase(currentPlayer->username);
            winToken = '\0';
            DisableButtons();
        }
    });
}

game_window::~game_window()
{
    delete ui;
}

void game_window::EnableButtons(){
    ui->PB_0_0->setEnabled(true);
    ui->PB_0_1->setEnabled(true);
    ui->PB_0_2->setEnabled(true);
    ui->PB_1_0->setEnabled(true);
    ui->PB_1_1->setEnabled(true);
    ui->PB_1_2->setEnabled(true);
    ui->PB_2_0->setEnabled(true);
    ui->PB_2_1->setEnabled(true);
    ui->PB_2_2->setEnabled(true);
}

void game_window::DisableButtons(){
    ui->PB_0_0->setEnabled(false);
    ui->PB_0_1->setEnabled(false);
    ui->PB_0_2->setEnabled(false);
    ui->PB_1_0->setEnabled(false);
    ui->PB_1_1->setEnabled(false);
    ui->PB_1_2->setEnabled(false);
    ui->PB_2_0->setEnabled(false);
    ui->PB_2_1->setEnabled(false);
    ui->PB_2_2->setEnabled(false);
}
void game_window::ResetGameScreen(){
    //Reset the screen
    EnableButtons();
    ui->PB_0_0->setText((QString)"\0");
    ui->PB_0_1->setText((QString)"\0");
    ui->PB_0_2->setText((QString)"\0");
    ui->PB_1_0->setText((QString)"\0");
    ui->PB_1_1->setText((QString)"\0");
    ui->PB_1_2->setText((QString)"\0");
    ui->PB_2_0->setText((QString)"\0");
    ui->PB_2_1->setText((QString)"\0");
    ui->PB_2_2->setText((QString)"\0");
}


void game_window::on_PB_0_0_clicked()
{
    if(ui->PB_0_0->text() == "X" || ui->PB_0_0->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_0_0->setText((QString)&currenttoken);
        Entered_Row = 0;
        Entered_Col = 0;
        movesLeft--;
    }
}


void game_window::on_PB_0_1_clicked()
{
    if(ui->PB_0_1->text() == "X" || ui->PB_0_1->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_0_1->setText((QString)&currenttoken);
        Entered_Row = 0;
        Entered_Col = 1;
        movesLeft--;
    }
}


void game_window::on_PB_0_2_clicked()
{
    if(ui->PB_0_2->text() == "X" || ui->PB_0_2->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_0_2->setText((QString)&currenttoken);
        Entered_Row = 0;
        Entered_Col = 2;
        movesLeft--;

    }
}


void game_window::on_PB_1_0_clicked()
{
    if(ui->PB_1_0->text() == "X" || ui->PB_1_0->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_1_0->setText((QString)&currenttoken);
        Entered_Row = 1;
        Entered_Col = 0;
        movesLeft--;
    }
}


void game_window::on_PB_1_1_clicked()
{
    if(ui->PB_1_1->text() == "X" || ui->PB_1_1->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_1_1->setText((QString)&currenttoken);
        Entered_Row = 1;
        Entered_Col = 1;
        movesLeft--;
    }
}


void game_window::on_PB_1_2_clicked()
{
    if(ui->PB_1_2->text() == "X" || ui->PB_1_2->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_1_2->setText((QString)&currenttoken);
        Entered_Row = 1;
        Entered_Col = 2;
        movesLeft--;
    }
}


void game_window::on_PB_2_0_clicked()
{
    if(ui->PB_2_0->text() == "X" || ui->PB_2_0->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_2_0->setText((QString)&currenttoken);
        Entered_Row = 2;
        Entered_Col = 0;
        movesLeft--;
    }
}


void game_window::on_PB_2_1_clicked()
{
    if(ui->PB_2_1->text() == "X" || ui->PB_2_1->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_2_1->setText((QString)&currenttoken);
        Entered_Row = 2;
        Entered_Col = 1;
        movesLeft--;
    }
}


void game_window::on_PB_2_2_clicked()
{
    if(ui->PB_2_2->text() == "X" || ui->PB_2_2->text() == "O"){
        winToken = 'S';
    }
    else{
        winToken = '\0';
        ui->PB_2_2->setText((QString)&currenttoken);
        Entered_Row = 2;
        Entered_Col = 2;
        movesLeft--;
    }
}


void game_window::on_RESET_clicked()
{
    ResetGameScreen();
    ResetGame();
}

void SetCallBackGame(void (*copy_ptr)(void)){
    CallBack = copy_ptr;
}


void game_window::on_Return_Prof_clicked()
{
    ResetGame();
    close();
    CallBack();
}

