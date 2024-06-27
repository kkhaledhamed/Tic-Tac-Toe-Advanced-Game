/********************************************************************************
** Form generated from reading UI file 'game_window.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_WINDOW_H
#define UI_GAME_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_window
{
public:
    QPushButton *RESET;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *PB_2_2;
    QPushButton *PB_2_1;
    QPushButton *PB_1_0;
    QPushButton *PB_0_2;
    QPushButton *PB_0_1;
    QPushButton *PB_0_0;
    QPushButton *PB_2_0;
    QPushButton *PB_1_1;
    QPushButton *PB_1_2;
    QPushButton *Return_Prof;

    void setupUi(QDialog *game_window)
    {
        if (game_window->objectName().isEmpty())
            game_window->setObjectName("game_window");
        game_window->resize(870, 646);
        game_window->setStyleSheet(QString::fromUtf8(".game_window {\n"
"    background-image:url(C:/Users/Spectra/Desktop/63148.jpg);\n"
"    opacity: 0.5; /* Adjust the opacity value as needed (0.0 to 1.0) */\n"
"    /* Other background properties */\n"
"    background-size: cover; /* Ensure the background image covers the entire element */\n"
"    background-position: center; /* Center the background image */\n"
"    /* Add more background properties as needed */\n"
"	background-repeat: no-repeat;\n"
"}\n"
""));
        RESET = new QPushButton(game_window);
        RESET->setObjectName("RESET");
        RESET->setGeometry(QRect(190, 460, 161, 51));
        RESET->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 170, 255) ;\n"
"    color: rgb(170, 0, 127);\n"
"  \n"
"	font: 700 20pt \"Segoe UI\";\n"
"\n"
"    border: 0px solid black;\n"
"    border-radius: 0px;\n"
"    padding: 0px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: lightblue;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: navy;\n"
"    color: lightblue;\n"
"}"));
        gridLayoutWidget = new QWidget(game_window);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(210, 130, 391, 281));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gridLayoutWidget->sizePolicy().hasHeightForWidth());
        gridLayoutWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        PB_2_2 = new QPushButton(gridLayoutWidget);
        PB_2_2->setObjectName("PB_2_2");
        sizePolicy.setHeightForWidth(PB_2_2->sizePolicy().hasHeightForWidth());
        PB_2_2->setSizePolicy(sizePolicy);
        PB_2_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_2_2, 2, 2, 1, 1);

        PB_2_1 = new QPushButton(gridLayoutWidget);
        PB_2_1->setObjectName("PB_2_1");
        sizePolicy.setHeightForWidth(PB_2_1->sizePolicy().hasHeightForWidth());
        PB_2_1->setSizePolicy(sizePolicy);
        PB_2_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_2_1, 2, 1, 1, 1);

        PB_1_0 = new QPushButton(gridLayoutWidget);
        PB_1_0->setObjectName("PB_1_0");
        sizePolicy.setHeightForWidth(PB_1_0->sizePolicy().hasHeightForWidth());
        PB_1_0->setSizePolicy(sizePolicy);
        PB_1_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_1_0, 1, 0, 1, 1);

        PB_0_2 = new QPushButton(gridLayoutWidget);
        PB_0_2->setObjectName("PB_0_2");
        sizePolicy.setHeightForWidth(PB_0_2->sizePolicy().hasHeightForWidth());
        PB_0_2->setSizePolicy(sizePolicy);
        PB_0_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_0_2, 0, 2, 1, 1);

        PB_0_1 = new QPushButton(gridLayoutWidget);
        PB_0_1->setObjectName("PB_0_1");
        sizePolicy.setHeightForWidth(PB_0_1->sizePolicy().hasHeightForWidth());
        PB_0_1->setSizePolicy(sizePolicy);
        PB_0_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_0_1, 0, 1, 1, 1);

        PB_0_0 = new QPushButton(gridLayoutWidget);
        PB_0_0->setObjectName("PB_0_0");
        sizePolicy.setHeightForWidth(PB_0_0->sizePolicy().hasHeightForWidth());
        PB_0_0->setSizePolicy(sizePolicy);
        PB_0_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_0_0, 0, 0, 1, 1);

        PB_2_0 = new QPushButton(gridLayoutWidget);
        PB_2_0->setObjectName("PB_2_0");
        sizePolicy.setHeightForWidth(PB_2_0->sizePolicy().hasHeightForWidth());
        PB_2_0->setSizePolicy(sizePolicy);
        PB_2_0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_2_0, 2, 0, 1, 1);

        PB_1_1 = new QPushButton(gridLayoutWidget);
        PB_1_1->setObjectName("PB_1_1");
        sizePolicy.setHeightForWidth(PB_1_1->sizePolicy().hasHeightForWidth());
        PB_1_1->setSizePolicy(sizePolicy);
        PB_1_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_1_1, 1, 1, 1, 1);

        PB_1_2 = new QPushButton(gridLayoutWidget);
        PB_1_2->setObjectName("PB_1_2");
        sizePolicy.setHeightForWidth(PB_1_2->sizePolicy().hasHeightForWidth());
        PB_1_2->setSizePolicy(sizePolicy);
        PB_1_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:rgb(255, 0, 127) ;\n"
"    color: white;\n"
"font: 700 26pt \"Segoe UI\";\n"
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

        gridLayout->addWidget(PB_1_2, 1, 2, 1, 1);

        Return_Prof = new QPushButton(game_window);
        Return_Prof->setObjectName("Return_Prof");
        Return_Prof->setGeometry(QRect(440, 460, 201, 51));
        Return_Prof->setStyleSheet(QString::fromUtf8("QWidget {\n"
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
"    font-size: 20px; /* Font size */\n"
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

        retranslateUi(game_window);

        QMetaObject::connectSlotsByName(game_window);
    } // setupUi

    void retranslateUi(QDialog *game_window)
    {
        game_window->setWindowTitle(QCoreApplication::translate("game_window", "Dialog", nullptr));
        RESET->setText(QCoreApplication::translate("game_window", "Reset", nullptr));
        PB_2_2->setText(QString());
        PB_2_1->setText(QString());
        PB_1_0->setText(QString());
        PB_0_2->setText(QString());
        PB_0_1->setText(QString());
        PB_0_0->setText(QString());
        PB_2_0->setText(QString());
        PB_1_1->setText(QString());
        PB_1_2->setText(QString());
        Return_Prof->setText(QCoreApplication::translate("game_window", "Return to profile", nullptr));
    } // retranslateUi

};

namespace Ui {
    class game_window: public Ui_game_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_WINDOW_H
