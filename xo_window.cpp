#include "xo_window.h"
#include "ui_xo_window.h"

XO_Window::XO_Window(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::XO_Window)
{
    ui->setupUi(this);
}

XO_Window::~XO_Window()
{
    delete ui;
}
