#ifndef SIGN_IN_UP_H
#define SIGN_IN_UP_H

#include <QDialog>
#include <QString>
#include <QMessageBox>
#include <QTimer>
#include "mainwindow.h"
#include "profile.h"
#include "Player_LinkedList.h"
#include "History_LinkedList.h"
#include "database.h"

#define SIGN_IN               0
#define SIGN_UP               1
#define SIGN_IN_Completed     2
#define SIGN_IN_FAILED       -2
#define SIGN_UP_Completed     3
#define CHANGE_USER_PASS      4
#define CHANGE_INFO           5
#define CHANGE_INFO_Completed 6

extern int Registering_State;
extern QString user_name;
extern QString pass_word;
extern playerlinkedlist horiz;
extern playerlinkedlist::player* currentPlayer;
extern QString PlDatabaseName;
extern QSqlDatabase playerdatabase;
extern QString Amir;


namespace Ui {
class Sign_In_Up;
}

class Sign_In_Up : public QDialog
{
    Q_OBJECT

public:
    explicit Sign_In_Up(QWidget *parent = nullptr);
    ~Sign_In_Up();

private slots:
    void on_pushButton_clicked();

    void on_PB_Login_clicked();

    void on_passwordinput_textChanged(const QString &arg1);

    void on_UsernameInput_textChanged(const QString &arg1);

private:
    Ui::Sign_In_Up *ui;

};


/******************************************************APIs*************************************************************************/

int checkaccount();
bool uploadUserDataTodatabase(QString& username, QString& password, QString& dbName, QString& tableName);


#endif // SIGN_IN_UP_H
