#include "mainwindow.h"
#include "sign_in_up.h"
#include "profile.h"
#include "game_window.h"
#include "./ui_mainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Sign_In_PB_clicked()
{
    Registering_State = SIGN_IN;
    hide();
    Sign_In_Up* ptr_1;
    ptr_1 = new Sign_In_Up(this);
    ptr_1->show();
}


void MainWindow::on_Sign_Up_PB_clicked()
{
    Registering_State = SIGN_UP;
    hide();
    Sign_In_Up* ptr_2;
    ptr_2 = new Sign_In_Up(this);
    ptr_2->show();
}







