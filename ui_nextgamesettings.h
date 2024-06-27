/********************************************************************************
** Form generated from reading UI file 'nextgamesettings.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEXTGAMESETTINGS_H
#define UI_NEXTGAMESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_nextgamesettings
{
public:
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *next_game;
    QPushButton *ToWelcome;

    void setupUi(QDialog *nextgamesettings)
    {
        if (nextgamesettings->objectName().isEmpty())
            nextgamesettings->setObjectName("nextgamesettings");
        nextgamesettings->resize(1137, 676);
        nextgamesettings->setStyleSheet(QString::fromUtf8(".nextgamesettings {\n"
"    background-image:url(C:/Users/Spectra/Desktop/63148.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}\n"
""));
        groupBox_2 = new QGroupBox(nextgamesettings);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(120, 150, 881, 311));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(130, 60, 611, 71));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 127);\n"
"font: 11pt \"Segoe UI\";"));

        horizontalLayout->addWidget(label_3);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        pushButton_5->setIconSize(QSize(10, 5));

        horizontalLayout->addWidget(pushButton_5);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 170, 255) ;\n"
"    color: rgb(170, 0, 127);\n"
"  \n"
"	font: 20pt \"Segoe UI\";\n"
"	font: 700 20pt \"Segoe UI\";\n"
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

        horizontalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font);
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 170, 255) ;\n"
"    color: rgb(170, 0, 127);\n"
"  \n"
"	font: 14pt \"Segoe UI\";\n"
"	font: 700 20pt \"Segoe UI\";\n"
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
        pushButton_4->setAutoDefault(false);

        horizontalLayout->addWidget(pushButton_4);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(130, 140, 617, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 0, 127);\n"
"font: 11pt \"Segoe UI\";"));

        horizontalLayout_2->addWidget(label_2);

        pushButton_6 = new QPushButton(layoutWidget1);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color:rgb(255, 255, 255);"));
        pushButton_6->setIconSize(QSize(10, 5));

        horizontalLayout_2->addWidget(pushButton_6);

        pushButton_2 = new QPushButton(layoutWidget1);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setBold(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"    font-size: 22px; /* Font size */\n"
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

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(layoutWidget1);
        pushButton->setObjectName("pushButton");
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"    font-size: 22px; /* Font size */\n"
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
        pushButton->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton);

        next_game = new QPushButton(groupBox_2);
        next_game->setObjectName("next_game");
        next_game->setGeometry(QRect(330, 220, 191, 71));
        next_game->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"    color: rgb(255, 255, 255); /* Text color */\n"
"    font-size: 26px; /* Font size */\n"
"    font-weight: bold; /* Font weight */\n"
"    font-family: Arial, sans-serif; /* Font family */\n"
"    border-radius: 5px; /* No border for the button */\n"
"    padding: 10px 20px; /* Padding */\n"
"    background-color: rgb(255, 0, 127); /* Button background color */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #0056b3; /* Hover background color */\n"
"}\n"
""));
        ToWelcome = new QPushButton(nextgamesettings);
        ToWelcome->setObjectName("ToWelcome");
        ToWelcome->setGeometry(QRect(420, 490, 251, 71));
        ToWelcome->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"    font-size: 16px; /* Font size */\n"
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

        retranslateUi(nextgamesettings);

        QMetaObject::connectSlotsByName(nextgamesettings);
    } // setupUi

    void retranslateUi(QDialog *nextgamesettings)
    {
        nextgamesettings->setWindowTitle(QCoreApplication::translate("nextgamesettings", "Dialog", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("nextgamesettings", "Next Game Settings", nullptr));
        label_3->setText(QCoreApplication::translate("nextgamesettings", "Choose the token :", nullptr));
        pushButton_5->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("nextgamesettings", "X", nullptr));
        pushButton_4->setText(QCoreApplication::translate("nextgamesettings", "O", nullptr));
        label_2->setText(QCoreApplication::translate("nextgamesettings", "Playing mode       :", nullptr));
        pushButton_6->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("nextgamesettings", "AI", nullptr));
        pushButton->setText(QCoreApplication::translate("nextgamesettings", "2 Players", nullptr));
        next_game->setText(QCoreApplication::translate("nextgamesettings", "Next game", nullptr));
        ToWelcome->setText(QCoreApplication::translate("nextgamesettings", "Return to wlecome window", nullptr));
    } // retranslateUi

};

namespace Ui {
    class nextgamesettings: public Ui_nextgamesettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEXTGAMESETTINGS_H
