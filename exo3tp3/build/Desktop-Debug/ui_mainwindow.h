/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.13
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *voteButton;
    QGroupBox *groupBoxOptions;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QRadioButton *option1;
    QRadioButton *option2;
    QRadioButton *option3;
    QLabel *contestantImage1;
    QLabel *contestantImage2;
    QLabel *contestantImage3;
    QLabel *labelResult;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(622, 657);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 700 19pt \"Ubuntu\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        voteButton = new QPushButton(centralwidget);
        voteButton->setObjectName(QString::fromUtf8("voteButton"));
        voteButton->setGeometry(QRect(230, 580, 131, 41));
        voteButton->setStyleSheet(QString::fromUtf8(" QPushButton {\n"
"    background-color: rgb(94, 143, 225); /* Button background */\n"
"    color: white; /* White text */\n"
"    border: none;\n"
"    border-radius: 10px; /* Rounded corners */\n"
"    padding: 10px 20px; /* Padding */\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(55, 109, 200); /* Darker shade on hover */\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(94, 143, 225); /* Background when pressed */\n"
"    border: 1px solid #1c5985; /* Subtle border when pressed */\n"
"}\n"
"\n"
"QPushButton:disabled {\n"
"    background-color: rgb(200, 200, 200); /* Light gray background when disabled */\n"
"    color: rgb(150, 150, 150); /* Gray text when disabled */\n"
"}\n"
""));
        groupBoxOptions = new QGroupBox(centralwidget);
        groupBoxOptions->setObjectName(QString::fromUtf8("groupBoxOptions"));
        groupBoxOptions->setGeometry(QRect(50, 120, 511, 391));
        groupBoxOptions->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"      background-color: white;\n"
"  border: 3px solid black;\n"
"       border-radius: 10px;\n"
"      padding: 10px;\n"
"       font-size: 18px;\n"
"      font-weight: bold;\n"
"\n"
"       color: #333;\n"
"    }\n"
""));
        scrollArea = new QScrollArea(groupBoxOptions);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 30, 471, 341));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(36, 31, 49);\n"
"  border-radius: 10px;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 471, 341));
        option1 = new QRadioButton(scrollAreaWidgetContents);
        option1->setObjectName(QString::fromUtf8("option1"));
        option1->setGeometry(QRect(160, 40, 249, 35));
        option2 = new QRadioButton(scrollAreaWidgetContents);
        option2->setObjectName(QString::fromUtf8("option2"));
        option2->setGeometry(QRect(170, 150, 261, 35));
        option3 = new QRadioButton(scrollAreaWidgetContents);
        option3->setObjectName(QString::fromUtf8("option3"));
        option3->setGeometry(QRect(170, 260, 211, 35));
        contestantImage1 = new QLabel(scrollAreaWidgetContents);
        contestantImage1->setObjectName(QString::fromUtf8("contestantImage1"));
        contestantImage1->setGeometry(QRect(40, 10, 91, 91));
        contestantImage1->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border-radius: 49%;  /* Creates a perfect circle */\n"
"    border: 3px solid black;  /* Optional: Border for visibility */\n"
"    padding: 0px;  /* Remove padding */\n"
"    background-color:  rgb(0, 0, 0) ;/* Transparent background */\n"
"    overflow: hidden;  /* Clips anything outside the circle */\n"
"}\n"
""));
        contestantImage2 = new QLabel(scrollAreaWidgetContents);
        contestantImage2->setObjectName(QString::fromUtf8("contestantImage2"));
        contestantImage2->setGeometry(QRect(40, 120, 91, 91));
        contestantImage2->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border-radius: 49%;  /* Creates a perfect circle */\n"
"    border: 3px solid black;  /* Optional: Border for visibility */\n"
"    padding: 0px;  /* Remove padding */\n"
"    background-color:  rgb(0, 0, 0) ;/* Transparent background */\n"
"    overflow: hidden;  /* Clips anything outside the circle */\n"
"}\n"
""));
        contestantImage3 = new QLabel(scrollAreaWidgetContents);
        contestantImage3->setObjectName(QString::fromUtf8("contestantImage3"));
        contestantImage3->setGeometry(QRect(40, 230, 91, 91));
        contestantImage3->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    border-radius: 49%;  /* Creates a perfect circle */\n"
"    border: 3px solid black;  /* Optional: Border for visibility */\n"
"    padding: 0px;  /* Remove padding */\n"
"    background-color:  rgb(0, 0, 0) ;/* Transparent background */\n"
"    overflow: hidden;  /* Clips anything outside the circle */\n"
"}"));
        scrollArea->setWidget(scrollAreaWidgetContents);
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(150, 530, 281, 41));
        labelResult->setStyleSheet(QString::fromUtf8(" font: 800 21pt \"Ubuntu Sans\";\n"
"color:    rgb(23, 52, 103)\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 20, 281, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(94, 143, 225)"));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        voteButton->setText(QCoreApplication::translate("MainWindow", "voter", nullptr));
        groupBoxOptions->setTitle(QCoreApplication::translate("MainWindow", "     list of contestants", nullptr));
        option1->setText(QCoreApplication::translate("MainWindow", "Gheraibia Roufaida", nullptr));
        option2->setText(QCoreApplication::translate("MainWindow", "Barak Obama", nullptr));
        option3->setText(QCoreApplication::translate("MainWindow", "Vladimir Putin", nullptr));
        contestantImage1->setText(QString());
        contestantImage2->setText(QString());
        contestantImage3->setText(QString());
        labelResult->setText(QCoreApplication::translate("MainWindow", " Your Voice Matters", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " World president 2047", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
