#include "sign_in_up.h"
#include "ui_sign_in_up.h"
QString Amir="\0";
int Registering_State = SIGN_IN;
QString user_name = "\0";
QString pass_word = "\0";
playerlinkedlist horiz;
playerlinkedlist::player* currentPlayer = nullptr;
QString PlDatabaseName = "playerdatabase.db";
QString PlTableName = "pl_username_pass_table";
QString PlConnection = "PLConnect";
QSqlDatabase playerdatabase;
/**********************************************************/
#include <QObject>

class MyCppClass : public QObject {
    Q_OBJECT
public:
    explicit MyCppClass(QObject *parent = nullptr){}


public slots:
    bool cppSlotFunction(){return 1;}

    Q_INVOKABLE bool cppInvokableFunction(){return 1;}

signals:
    void cppSignal();

};
/**********************************************************/
Sign_In_Up::Sign_In_Up(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Sign_In_Up)
{
    ui->setupUi(this);
    if(Registering_State != CHANGE_INFO){
        if(Registering_State == SIGN_UP)
            ui->PB_Login->setText("Sign up!");
        else if(Registering_State == SIGN_IN)
            ui->PB_Login->setText("Sign in!");
        currentPlayer = nullptr;
        int reply = DatabaseManager::checkDatabase(PlDatabaseName, playerdatabase, PlConnection);
        if(reply == DatabaseNotFound){
            DatabaseManager::createDatabaseConnection(PlDatabaseName, playerdatabase, PlConnection);
            DatabaseManager::openDatabase(playerdatabase);
            QString tableDefinition = "id INTEGER PRIMARY KEY AUTOINCREMENT, "
                                      "username TEXT NOT NULL, "
                                      "password TEXT NOT NULL";
            DatabaseManager::createTable(playerdatabase, PlTableName, tableDefinition);
        }
        else if(reply == DatabaseNotEmpty){
            DatabaseManager::retrievePlayerData(PlDatabaseName, playerdatabase,PlTableName, horiz);
        }
    }
    else if(Registering_State == CHANGE_INFO){
        ui->Username->setText("New username");
        ui->label_2->setText("New password");
        ui->PB_Login->setText("Update");
    }
}

Sign_In_Up::~Sign_In_Up()
{
    delete ui;
}

void Sign_In_Up::on_pushButton_clicked()
{
    hide();
    MainWindow* ptr_3;
    ptr_3 = new MainWindow(this);
    ptr_3->show();
}

void Sign_In_Up::on_PB_Login_clicked()
{
    if(ui->UsernameInput->text().isEmpty() || ui->passwordinput->text().isEmpty())
        QMessageBox::warning(this, "Sign Up Fault", "The username or password fields are empty");
    else
    {
        qDebug() << "Here we go!";
        int reply = checkaccount();
        //qDebug()<< "Current player is" << currentPlayer->username;
        if(reply == SIGN_IN_Completed || reply == SIGN_UP_Completed || reply == CHANGE_INFO_Completed){
            hide();
            qDebug() << "Heading to profile window";
            Profile* ptr_4;
            ptr_4 = new Profile(this);
            ptr_4->show();
        }
        else if(reply == SIGN_IN_FAILED)
            QMessageBox::warning(this, "Sign In Fault", "No such account with both this username and password");
        else if(reply == CHANGE_USER_PASS)
            QMessageBox::warning(this, "Sign Up Fault", "The username and password are already used");

    }
}


void Sign_In_Up::on_UsernameInput_textChanged(const QString &arg1)
{
    user_name = ui->UsernameInput->text();
}

void Sign_In_Up::on_passwordinput_textChanged(const QString &arg1)
{
    pass_word = ui->passwordinput->text();
}


int checkaccount(){
    // Create a QWidget object
    int Return_State = 0;
    if(Registering_State == SIGN_IN){
        if(horiz.isfound(user_name, pass_word, &currentPlayer)){
            Amir=currentPlayer->username;
            qDebug() << "Sign in successfully";
            Return_State = SIGN_IN_Completed;
        }
        else{
            qDebug() << "No such account with both this username and password";
            Return_State = SIGN_IN_FAILED;
        }
    }
    else if(Registering_State == SIGN_UP){
        if(horiz.isfound(user_name, pass_word, &currentPlayer)){
            qDebug() << "Repeated username and password";
            Return_State = CHANGE_USER_PASS;
        }
        else{
            qDebug() << "Sign up in progress";
            horiz.push_back(user_name, pass_word, &currentPlayer);//horiz linkedlist updated
            Amir=currentPlayer->username;
            qDebug() << "LinkedList Updated";
            uploadUserDataTodatabase(user_name, pass_word, PlDatabaseName, PlTableName);//database updated
            Return_State = SIGN_UP_Completed;
            qDebug() << "Sign up successfully";
        }
    }
    else if(Registering_State == CHANGE_INFO){
        qDebug()<< "New username is" << user_name;
        qDebug()<< "New password is" << pass_word;
        DatabaseManager::updatePlayerData( playerdatabase, PlTableName, currentPlayer->username, currentPlayer->password, user_name, pass_word);
        currentPlayer->username = user_name;
        Amir=currentPlayer->username;
        currentPlayer->password = pass_word;
        Return_State = CHANGE_INFO_Completed;
    }
    return Return_State;
}

bool uploadUserDataTodatabase(QString& username, QString& password, QString& dbName, QString& tableName) {
    if (!playerdatabase.isValid()) {
        qDebug() << "Database connection is not valid";
        return false;
    }

    // Prepare the query to insert data into the specified table
    QSqlQuery query(playerdatabase);
    query.prepare("INSERT INTO " + tableName + " (username, password) VALUES (:username, :password)");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    // Execute the query
    if (!query.exec()) {
        qDebug() << "Error inserting data into table:" << query.lastError().text();
        return false;
    }
    qDebug() << "DataBase Updated";
    return true;
}
int checkaccountTest(int Registering_StateTest)
{
    int Return_State = 0;
    if(Registering_StateTest == SIGN_IN){
        if(true){
            Amir=currentPlayer->username;
            qDebug() << "Sign in successfully";
            Return_State = SIGN_IN_Completed;
        }
        else{
            qDebug() << "No such account with both this username and password";
            Return_State = SIGN_IN_FAILED;
        }
    }
    else if(Registering_StateTest == SIGN_UP){
        if(true){
            qDebug() << "Repeated username and password";
            Return_State = CHANGE_USER_PASS;
        }
        else{
            qDebug() << "Sign up in progress";
            horiz.push_back(user_name, pass_word, &currentPlayer);//horiz linkedlist updated
            Amir=currentPlayer->username;
            qDebug() << "LinkedList Updated";
            uploadUserDataTodatabase(user_name, pass_word, PlDatabaseName, PlTableName);//database updated
            Return_State = SIGN_UP_Completed;
            qDebug() << "Sign up successfully";
        }
    }
    else if(Registering_StateTest == CHANGE_INFO){
        qDebug()<< "New username is" << user_name;
        qDebug()<< "New password is" << pass_word;
        DatabaseManager::updatePlayerData( playerdatabase, PlTableName, currentPlayer->username, currentPlayer->password, user_name, pass_word);
        currentPlayer->username = user_name;
        Amir=currentPlayer->username;
        currentPlayer->password = pass_word;
        Return_State = CHANGE_INFO_Completed;
    }
    return Return_State;
}
