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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QPushButton *buttonRouge;
    QPushButton *buttonBleu;
    QLabel *label;
    QPushButton *buttonGreen;
    QPushButton *buttonSurprise;
    QPushButton *buttonYellow;
    QPushButton *buttonReset;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1083, 745);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Sans\";\n"
"background-color: rgb(255, 255, 255);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(270, 120, 481, 431));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: rgb(205, 224, 247);\n"
"color:rgb(0, 0, 0);\n"
"border-radius:rgb(0, 0, 0);\n"
"    border-radius: 20px;"));
        buttonRouge = new QPushButton(groupBox);
        buttonRouge->setObjectName(QString::fromUtf8("buttonRouge"));
        buttonRouge->setGeometry(QRect(20, 330, 41, 41));
        buttonRouge->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(224, 27, 36);\n"
"    color: white;\n"
"    border: none;\n"
"    width: 50px;\n"
"    height: 50px;\n"
"    border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"    background-color: rgb(224, 27, 36);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: rgb(165, 29, 45);\n"
"}\n"
""));
        buttonBleu = new QPushButton(groupBox);
        buttonBleu->setObjectName(QString::fromUtf8("buttonBleu"));
        buttonBleu->setGeometry(QRect(410, 330, 41, 41));
        buttonBleu->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(28, 113, 216);\n"
"    color: white;\n"
"    border: none;\n"
"    width: 50px;\n"
"    height: 50px;\n"
"    border-radius: 20px;\n"
"}\n"
" "));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 70, 231, 221));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"         background-color: rgb(255, 255, 255);\n"
"         color: rgb(0, 0, 0);\n"
"          padding: 10px;\n"
"         border: 2px solid #2980b9;\n"
"        \n"
"        }"));
        buttonGreen = new QPushButton(groupBox);
        buttonGreen->setObjectName(QString::fromUtf8("buttonGreen"));
        buttonGreen->setGeometry(QRect(90, 330, 41, 41));
        buttonGreen->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(46, 194, 126);\n"
"    color: white;\n"
"    border: none;\n"
"    width: 50px;\n"
"    height: 50px;\n"
"    border-radius: 20px;\n"
"}"));
        buttonSurprise = new QPushButton(groupBox);
        buttonSurprise->setObjectName(QString::fromUtf8("buttonSurprise"));
        buttonSurprise->setGeometry(QRect(180, 330, 121, 41));
        buttonSurprise->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color:  rgb(0, 0, 0);\n"
"    border: none;\n"
"    width: 50px;\n"
"    height: 50px;\n"
"    border-radius: 20px;\n"
"}"));
        buttonYellow = new QPushButton(groupBox);
        buttonYellow->setObjectName(QString::fromUtf8("buttonYellow"));
        buttonYellow->setGeometry(QRect(350, 330, 41, 41));
        buttonYellow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(246, 211, 45);\n"
"    color: white;\n"
"    border: none;\n"
"    width: 50px;\n"
"    height: 50px;\n"
"    border-radius: 20px;\n"
"}"));
        buttonReset = new QPushButton(groupBox);
        buttonReset->setObjectName(QString::fromUtf8("buttonReset"));
        buttonReset->setGeometry(QRect(200, 390, 81, 30));
        buttonReset->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: rgb(255, 255, 255);\n"
"    color:  rgb(0, 0, 0);\n"
"    border: none;\n"
"    width: 50px;\n"
"    height: 50px;\n"
"    border-radius: 9px;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("QPushButton {"), QSize(), QIcon::Normal, QIcon::Off);
        buttonReset->setIcon(icon);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1083, 31));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "                                   Color Changer ", nullptr));
        buttonRouge->setText(QCoreApplication::translate("MainWindow", "R", nullptr));
        buttonBleu->setText(QCoreApplication::translate("MainWindow", "B", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "             COLOR", nullptr));
        buttonGreen->setText(QCoreApplication::translate("MainWindow", "G", nullptr));
        buttonSurprise->setText(QCoreApplication::translate("MainWindow", "Suprise Me", nullptr));
        buttonYellow->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
        buttonReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
