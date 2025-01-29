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
    QPushButton *buttonAfficher;
    QPushButton *buttonMasquer;
    QLabel *labelText;
    QLabel *labelVisibility;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Sans\";\n"
"background-color: rgb(212, 222, 235);\n"
"color: rgb(0, 0, 0);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonAfficher = new QPushButton(centralwidget);
        buttonAfficher->setObjectName(QString::fromUtf8("buttonAfficher"));
        buttonAfficher->setGeometry(QRect(150, 450, 121, 41));
        buttonAfficher->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"    border-radius: 8px;\n"
"    background-color: #4CAF50;\n"
"    color: white;\n"
"}"));
        buttonMasquer = new QPushButton(centralwidget);
        buttonMasquer->setObjectName(QString::fromUtf8("buttonMasquer"));
        buttonMasquer->setGeometry(QRect(490, 450, 121, 41));
        buttonMasquer->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    font-size: 16px;\n"
"    padding: 10px;\n"
"    border-radius: 8px;\n"
"    background-color: rgb(36, 31, 49);\n"
"    color: white;\n"
"}"));
        labelText = new QLabel(centralwidget);
        labelText->setObjectName(QString::fromUtf8("labelText"));
        labelText->setGeometry(QRect(330, 90, 161, 31));
        labelVisibility = new QLabel(centralwidget);
        labelVisibility->setObjectName(QString::fromUtf8("labelVisibility"));
        labelVisibility->setGeometry(QRect(270, 210, 271, 221));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 31));
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
        buttonAfficher->setText(QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        buttonMasquer->setText(QCoreApplication::translate("MainWindow", "Masquer", nullptr));
        labelText->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        labelVisibility->setText(QCoreApplication::translate("MainWindow", "                  textLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
