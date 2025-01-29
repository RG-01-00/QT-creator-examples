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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QGroupBox *VBoxLayout;
    QSpinBox *lengthSpinBox;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QPushButton *generateButton;
    QLabel *label_3;
    QLineEdit *usernameInput;
    QLineEdit *passwordInput;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuWelcom_to_our_site;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1299, 849);
        MainWindow->setStyleSheet(QString::fromUtf8(" background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 0, 0); \n"
"font: 700 16pt \"Sans\";"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        VBoxLayout = new QGroupBox(centralwidget);
        VBoxLayout->setObjectName(QString::fromUtf8("VBoxLayout"));
        VBoxLayout->setGeometry(QRect(220, 270, 691, 351));
        VBoxLayout->setStyleSheet(QString::fromUtf8(""));
        lengthSpinBox = new QSpinBox(VBoxLayout);
        lengthSpinBox->setObjectName(QString::fromUtf8("lengthSpinBox"));
        lengthSpinBox->setGeometry(QRect(270, 230, 51, 41));
        loginButton = new QPushButton(VBoxLayout);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(250, 300, 171, 41));
        loginButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"    border: 1px solid #2980B9;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"    border: 1px solid #1E5A85;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1E5A85;\n"
"    border: 1px solid #103F59;\n"
"}"));
        label = new QLabel(VBoxLayout);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 250, 221, 31));
        label_2 = new QLabel(VBoxLayout);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 171, 41));
        generateButton = new QPushButton(VBoxLayout);
        generateButton->setObjectName(QString::fromUtf8("generateButton"));
        generateButton->setGeometry(QRect(350, 230, 291, 41));
        generateButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #3498DB;\n"
"    color: white;\n"
"    border: 1px solid #2980B9;\n"
"    border-radius: 4px;\n"
"    padding: 6px 12px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: #2980B9;\n"
"    border: 1px solid #1E5A85;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #1E5A85;\n"
"    border: 1px solid #103F59;\n"
"}"));
        label_3 = new QLabel(VBoxLayout);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 60, 201, 41));
        usernameInput = new QLineEdit(VBoxLayout);
        usernameInput->setObjectName(QString::fromUtf8("usernameInput"));
        usernameInput->setGeometry(QRect(260, 60, 381, 41));
        usernameInput->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        passwordInput = new QLineEdit(VBoxLayout);
        passwordInput->setObjectName(QString::fromUtf8("passwordInput"));
        passwordInput->setGeometry(QRect(260, 140, 381, 41));
        passwordInput->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(200, 100, 621, 51));
        label_4->setStyleSheet(QString::fromUtf8(" \n"
"font: 700 29pt \"Sans\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1299, 34));
        menuWelcom_to_our_site = new QMenu(menubar);
        menuWelcom_to_our_site->setObjectName(QString::fromUtf8("menuWelcom_to_our_site"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuWelcom_to_our_site->menuAction());
        menuWelcom_to_our_site->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        VBoxLayout->setTitle(QString());
        loginButton->setText(QCoreApplication::translate("MainWindow", "se connecter", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Longueur du mot de passe", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Mot de passe", nullptr));
        generateButton->setText(QCoreApplication::translate("MainWindow", "generer un mot de passe", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Nom d'utilisateur ", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "                        Login Page", nullptr));
        menuWelcom_to_our_site->setTitle(QCoreApplication::translate("MainWindow", "Welcome to our site", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
