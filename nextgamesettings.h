#ifndef NEXTGAMESETTINGS_H
#define NEXTGAMESETTINGS_H

#include <QDialog>
#include <QMessageBox>
#include "mainwindow.h"
#include "game_window.h"

extern char NextGameToken;


namespace Ui {
class nextgamesettings;
}

class nextgamesettings : public QDialog
{
    Q_OBJECT

public:
    explicit nextgamesettings(QWidget *parent = nullptr);
    ~nextgamesettings();

private slots:
    void on_ToWelcome_clicked();

    void on_next_game_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::nextgamesettings *ui;
};

#endif // NEXTGAMESETTINGS_H
