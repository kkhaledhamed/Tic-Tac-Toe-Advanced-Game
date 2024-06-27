/********************************************************************************
** Form generated from reading UI file 'sign_in_up.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_UP_H
#define UI_SIGN_IN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_In_Up
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *Username;
    QLineEdit *UsernameInput;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *passwordinput;
    QPushButton *PB_Login;
    QPushButton *pushButton;

    void setupUi(QDialog *Sign_In_Up)
    {
        if (Sign_In_Up->objectName().isEmpty())
            Sign_In_Up->setObjectName("Sign_In_Up");
        Sign_In_Up->resize(823, 545);
        Sign_In_Up->setStyleSheet(QString::fromUtf8(".Sign_In_Up {\n"
"    background-image:url(C:/Users/Spectra/Desktop/63148.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}\n"
""));
        layoutWidget = new QWidget(Sign_In_Up);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(210, 150, 351, 141));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        Username = new QLabel(layoutWidget);
        Username->setObjectName("Username");
        Username->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:rgb(255, 0, 127);\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        horizontalLayout->addWidget(Username);

        UsernameInput = new QLineEdit(layoutWidget);
        UsernameInput->setObjectName("UsernameInput");
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        UsernameInput->setFont(font);
        UsernameInput->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255)"));

        horizontalLayout->addWidget(UsernameInput);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    color:rgb(255, 0, 127);\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    font-family: Arial, sans-serif; /* Example font family */\n"
"	 qproperty-alignment: AlignCenter;\n"
"}\n"
""));

        horizontalLayout_2->addWidget(label_2);

        passwordinput = new QLineEdit(layoutWidget);
        passwordinput->setObjectName("passwordinput");
        passwordinput->setFont(font);
        passwordinput->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        passwordinput->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(passwordinput);


        verticalLayout_2->addLayout(horizontalLayout_2);

        PB_Login = new QPushButton(Sign_In_Up);
        PB_Login->setObjectName("PB_Login");
        PB_Login->setGeometry(QRect(260, 300, 269, 30));
        PB_Login->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 170, 255);\n"
"    color: rgb(170, 0, 127);\n"
"    border: 2px white;\n"
"    border-radius: 5px;\n"
"    padding: 5px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}\n"
".MainWindow {\n"
"    background-image:url(C:/Users/Spectra/Desktop/63148.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}"));
        pushButton = new QPushButton(Sign_In_Up);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 340, 269, 30));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(170, 0, 127);\n"
"    color: white;\n"
"    border: 0px white;\n"
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

        retranslateUi(Sign_In_Up);

        QMetaObject::connectSlotsByName(Sign_In_Up);
    } // setupUi

    void retranslateUi(QDialog *Sign_In_Up)
    {
        Sign_In_Up->setWindowTitle(QCoreApplication::translate("Sign_In_Up", "Dialog", nullptr));
        Username->setText(QCoreApplication::translate("Sign_In_Up", "Username  :", nullptr));
        label_2->setText(QCoreApplication::translate("Sign_In_Up", "Password  :", nullptr));
        PB_Login->setText(QCoreApplication::translate("Sign_In_Up", "Log in", nullptr));
        pushButton->setText(QCoreApplication::translate("Sign_In_Up", "Return to welcome window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_In_Up: public Ui_Sign_In_Up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_UP_H
