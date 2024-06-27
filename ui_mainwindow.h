/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Quit_PB;
    QLabel *label_3;
    QPushButton *Sign_Up_PB;
    QLabel *label_4;
    QPushButton *Sign_In_PB;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(836, 538);
        MainWindow->setStyleSheet(QString::fromUtf8(".MainWindow {\n"
"    background-image:url(C:/Users/Spectra/Desktop/63148.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Quit_PB = new QPushButton(centralwidget);
        Quit_PB->setObjectName("Quit_PB");
        Quit_PB->setGeometry(QRect(340, 360, 141, 51));
        Quit_PB->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  #7566D5; /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: rgb(85, 0, 127); /* Text color */\n"
"    font-size: 30px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: rgb(255, 255, 255); /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(430, 250, 349, 42));
        label_3->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: rgb(255, 0, 127); /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  rgb(170, 0, 127); /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        Sign_Up_PB = new QPushButton(centralwidget);
        Sign_Up_PB->setObjectName("Sign_Up_PB");
        Sign_Up_PB->setGeometry(QRect(430, 300, 349, 40));
        Sign_Up_PB->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: rgb(255, 0, 127); /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  rgb(255, 0, 255); /* Background color */\n"
"qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color:rgb(85, 0, 127); /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 110, 201, 91));
        label_4->setAutoFillBackground(false);
        label_4->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 700 42pt \"Segoe UI\";\n"
"label {\n"
"colour:#ffffff;\n"
"}"));
        Sign_In_PB = new QPushButton(centralwidget);
        Sign_In_PB->setObjectName("Sign_In_PB");
        Sign_In_PB->setGeometry(QRect(40, 300, 359, 40));
        Sign_In_PB->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: #f0f0f0; /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color: #ffffff; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:  rgb(255, 0, 255); /* Background color */\n"
"qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: rgb(85, 0, 127); /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(330, 440, 441, 71));
        label_5->setToolTipDuration(-1);
        label_5->setStyleSheet(QString::fromUtf8("font: 18pt \"Segoe UI\";\n"
"color:rgb(255, 0, 127);\n"
"label_5 {\n"
"color:#ff66ff;\n"
"}"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 250, 361, 42));
        label_6->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background-color: rgb(255, 0, 127); /* Background color */\n"
"}\n"
"\n"
"QLabel {\n"
"    color:rgb(255, 255, 255); /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the label */\n"
"    padding: 10px; /* Padding */\n"
"    background-color:rgb(170, 0, 127); /* Background color */\n"
"	qproperty-alignment: AlignCenter; /* Text alignment */\n"
"}\n"
"\n"
"QPushButton {\n"
"    color: white; /* Text color */\n"
"    font-size: 18px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: #007bff; /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(230, 50, 441, 91));
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);\n"
"font: 700 36pt \"Segoe UI\";\n"
"label {\n"
"colour:#ffffff;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 836, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(Quit_PB, &QPushButton::clicked, MainWindow, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Quit_PB->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "If it's your first time to play :", nullptr));
        Sign_Up_PB->setText(QCoreApplication::translate("MainWindow", "Sign up!", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Game", nullptr));
        Sign_In_PB->setText(QCoreApplication::translate("MainWindow", "Sign in :)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Snap Dragons\302\251", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "If you have an account already :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "TIC - TAC - TOE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
