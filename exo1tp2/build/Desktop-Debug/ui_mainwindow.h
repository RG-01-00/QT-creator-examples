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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *QVBoxLayout;
    QTextEdit *textWidget;
    QPushButton *activerButton;
    QPushButton *desactiverButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(984, 716);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(149, 185, 252);\n"
"font: 700 13pt \"Sans\";"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QVBoxLayout = new QGroupBox(centralwidget);
        QVBoxLayout->setObjectName(QString::fromUtf8("QVBoxLayout"));
        QVBoxLayout->setGeometry(QRect(240, 160, 531, 361));
        QVBoxLayout->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(118, 176, 215);"));
        textWidget = new QTextEdit(QVBoxLayout);
        textWidget->setObjectName(QString::fromUtf8("textWidget"));
        textWidget->setGeometry(QRect(53, 110, 421, 121));
        textWidget->setStyleSheet(QString::fromUtf8(" \n"
"background-color: rgb(255, 255, 255)"));
        activerButton = new QPushButton(QVBoxLayout);
        activerButton->setObjectName(QString::fromUtf8("activerButton"));
        activerButton->setGeometry(QRect(50, 240, 111, 41));
        activerButton->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color:rgb(0, 0, 0);\n"
"font: 700 12pt \"Sans\";"));
        desactiverButton = new QPushButton(QVBoxLayout);
        desactiverButton->setObjectName(QString::fromUtf8("desactiverButton"));
        desactiverButton->setEnabled(false);
        desactiverButton->setGeometry(QRect(360, 240, 111, 41));
        desactiverButton->setStyleSheet(QString::fromUtf8("background-color:qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(255, 255, 0, 69), stop:0.375 rgba(255, 255, 0, 69), stop:0.423533 rgba(251, 255, 0, 145), stop:0.45 rgba(247, 255, 0, 208), stop:0.477581 rgba(255, 244, 71, 130), stop:0.518717 rgba(255, 218, 71, 130), stop:0.55 rgba(255, 255, 0, 255), stop:0.57754 rgba(255, 203, 0, 130), stop:0.625 rgba(255, 255, 0, 69), stop:1 rgba(255, 255, 0, 69));\n"
"color:rgb(0, 0, 0);\n"
"font: 700 12pt \"Sans\";"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 984, 29));
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
        QVBoxLayout->setTitle(QCoreApplication::translate("MainWindow", "textEditor", nullptr));
        activerButton->setText(QCoreApplication::translate("MainWindow", "activer", nullptr));
        desactiverButton->setText(QCoreApplication::translate("MainWindow", "descativer", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
