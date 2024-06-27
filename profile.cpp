#include "profile.h"
#include "ui_profile.h"

extern int Registering_State;
void (*CallBackChangeInfo)(void);

Profile::Profile(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Profile)
{
    ui->setupUi(this);
    qDebug()<< "Current player is" << currentPlayer->username;
    ui->Header->setText("Welcome " + currentPlayer->username);
}

Profile::~Profile()
{
    delete ui;
}

void Profile::on_ToWelcome_clicked()
{
    QMessageBox::StandardButton reply =(QMessageBox::StandardButton) QMessageBox::warning(this, "Take Care",
    "You will need to sign in or sign up again",
    QMessageBox::Ok, QMessageBox::Cancel);
    if(reply == QMessageBox::Ok){
        hide();
        MainWindow* ptr_1;
        ptr_1 = new MainWindow(this);
        ptr_1->show();
    }
}


void Profile::on_ToNextGame_clicked()
{
    hide();
    nextgamesettings* ptr_2;
    ptr_2 = new nextgamesettings(this);
    ptr_2->show();

}


void Profile::on_EditAccountData_clicked()
{
    Registering_State = CHANGE_INFO;
    close();
    CallBackChangeInfo();
}
void SetCallBackChangeInfo(void (*Copy_PtrCallBackInfo)(void))
{
    CallBackChangeInfo = Copy_PtrCallBackInfo;
}

#include <QDir>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QTableView>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>

void Profile::on_game_history_clicked()
{
    QString username = currentPlayer->username ;
    QString sanitizedUsername = username;
    sanitizedUsername.replace(" ", "_");
    QString dbPath = QDir::currentPath() + "/" + sanitizedUsername + "_games.db";

    // Check if the database connection exists
    if (!QSqlDatabase::contains(sanitizedUsername)) {
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", sanitizedUsername);
        db.setDatabaseName(dbPath);

        if (!db.open()) {
            qDebug() << "Error: connection with database failed for user" << username;
            QMessageBox::critical(this, "Database Error", "Failed to open the database for user " + username);
            return;
        }
    }

    QSqlDatabase db = QSqlDatabase::database(sanitizedUsername);

    // Ensure the database is open
    if (!db.isOpen()) {
        if (!db.open()) {
            qDebug() << "Error: unable to open database for user" << username;
            QMessageBox::critical(this, "Database Error", "Failed to open the database for user " + username);
            return;
        }
    }

    // Set up the model
    QSqlTableModel *model = new QSqlTableModel(this, db);
    model->setTable("Games");
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);

    // Debug statement to check if the table has columns
    qDebug() << "Columns in 'Games' table: " << model->columnCount();
    for (int i = 0; i < model->columnCount(); ++i) {
        qDebug() << "Column " << i << ": " << model->headerData(i, Qt::Horizontal).toString();
    }

    if (!model->select()) {
        qDebug() << "Error: Unable to select data from table 'Games' for user" << username;
        qDebug() << model->lastError().text();
        QMessageBox::critical(this, "Database Error", "Failed to retrieve data for user " + username);
        return;
    }

    // Debug statement to check if data is retrieved
    qDebug() << "Rows retrieved: " << model->rowCount();

    // Set up the view
    QTableView *view = ui->games_history; // Assuming games_history is the name of your QTableView in the UI
    view->setModel(model);
    view->resizeColumnsToContents();
    view->show();
}
