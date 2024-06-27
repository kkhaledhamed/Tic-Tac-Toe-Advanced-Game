/********************************************************************************
** Form generated from reading UI file 'profile.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROFILE_H
#define UI_PROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_Profile
{
public:
    QLabel *Header;
    QPushButton *ToWelcome;
    QGroupBox *groupBox;
    QTableView *games_history;
    QPushButton *game_history;
    QPushButton *EditAccountData;
    QPushButton *ToNextGame;

    void setupUi(QDialog *Profile)
    {
        if (Profile->objectName().isEmpty())
            Profile->setObjectName("Profile");
        Profile->resize(1007, 706);
        QFont font;
        font.setBold(true);
        Profile->setFont(font);
        Profile->setStyleSheet(QString::fromUtf8(".Profile {\n"
"    background-image:url(C:/Users/Spectra/Desktop/63148.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}\n"
""));
        Header = new QLabel(Profile);
        Header->setObjectName("Header");
        Header->setGeometry(QRect(90, 30, 541, 71));
        QFont font1;
        font1.setPointSize(30);
        font1.setBold(true);
        Header->setFont(font1);
        Header->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 127);"));
        ToWelcome = new QPushButton(Profile);
        ToWelcome->setObjectName("ToWelcome");
        ToWelcome->setGeometry(QRect(170, 550, 241, 71));
        ToWelcome->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(170, 0, 127) ;\n"
"    color: rgb(255, 255, 255);\n"
"  \n"
"	font: 700 12pt \"Segoe UI\";\n"
"    border: 0px solid black;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}"));
        groupBox = new QGroupBox(Profile);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(130, 130, 651, 391));
        games_history = new QTableView(groupBox);
        games_history->setObjectName("games_history");
        games_history->setGeometry(QRect(100, 30, 451, 271));
        game_history = new QPushButton(groupBox);
        game_history->setObjectName("game_history");
        game_history->setGeometry(QRect(190, 330, 271, 51));
        EditAccountData = new QPushButton(Profile);
        EditAccountData->setObjectName("EditAccountData");
        EditAccountData->setGeometry(QRect(710, 40, 181, 51));
        EditAccountData->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 12pt \"Segoe UI\";\n"
"    border: 0px solid black;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}"));
        ToNextGame = new QPushButton(Profile);
        ToNextGame->setObjectName("ToNextGame");
        ToNextGame->setGeometry(QRect(530, 550, 211, 71));
        ToNextGame->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 170, 255) ;\n"
"    color: rgb(170, 0, 127);\n"
"  \n"
"	font: 700 14pt \"Segoe UI\";\n"
"    border: 0px solid black;\n"
"    border-radius: 0px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}"));

        retranslateUi(Profile);

        QMetaObject::connectSlotsByName(Profile);
    } // setupUi

    void retranslateUi(QDialog *Profile)
    {
        Profile->setWindowTitle(QCoreApplication::translate("Profile", "Dialog", nullptr));
        Header->setText(QCoreApplication::translate("Profile", "Welcome", nullptr));
        ToWelcome->setText(QCoreApplication::translate("Profile", "Return to wlecome window", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Profile", "History", nullptr));
        game_history->setText(QCoreApplication::translate("Profile", "See the game history", nullptr));
        EditAccountData->setText(QCoreApplication::translate("Profile", "Edit account data", nullptr));
        ToNextGame->setText(QCoreApplication::translate("Profile", "To the next game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Profile: public Ui_Profile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROFILE_H
