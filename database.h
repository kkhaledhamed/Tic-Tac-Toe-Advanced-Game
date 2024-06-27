#ifndef DATABASE_H
#define DATABASE_H


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QSqlDriver>
#include <QFileInfo>
#include "Player_LinkedList.h"

#define DatabaseConnectionNotFound   -1
#define DatabaseNotFound              0
#define DatabaseDidnotOpen            1
#define DatabaseEmpty                 2
#define DatabaseNotEmpty              3


void createUserDatabase(const QString &username);
void saveGameToUserDatabase(const QString &username, const QString &winner);
bool doesUserDatabaseExist(const QString &username);


class DatabaseManager
{
public:
    static void createDatabaseConnection(QString& dbName, QSqlDatabase& db, QString dbConnection);
    static bool openDatabase(QSqlDatabase& db);
    static void closeDatabase(QSqlDatabase& db);
    static bool createTable(QSqlDatabase& db, QString& tableName, QString& tableDefinition);
    static int checkDatabase(QString& dbName, QSqlDatabase& db, QString dbConnection);
    static bool retrievePlayerData(QString& dbName, QSqlDatabase& db, QString& tablename, playerlinkedlist& playerList);
    static bool updatePlayerData(QSqlDatabase& db, const QString& tableName, const QString& oldUsername, const QString& oldPassword, const QString& newUsername, const QString& newPassword);

private:
    static QSqlDatabase Tetra;
};

#endif // DATABASE_H
