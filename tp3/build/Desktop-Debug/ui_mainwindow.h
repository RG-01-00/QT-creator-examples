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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAfficher;
    QAction *actioncopier;
    QAction *actioncoller;
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QMenuBar *menubar;
    QMenu *menuedition;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionAfficher = new QAction(MainWindow);
        actionAfficher->setObjectName(QString::fromUtf8("actionAfficher"));
        actioncopier = new QAction(MainWindow);
        actioncopier->setObjectName(QString::fromUtf8("actioncopier"));
        actioncoller = new QAction(MainWindow);
        actioncoller->setObjectName(QString::fromUtf8("actioncoller"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 70, 113, 26));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(80, 120, 113, 26));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menuedition = new QMenu(menubar);
        menuedition->setObjectName(QString::fromUtf8("menuedition"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuedition->menuAction());
        menuedition->addAction(actionAfficher);
        menuedition->addAction(actioncopier);
        menuedition->addAction(actioncoller);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAfficher->setText(QCoreApplication::translate("MainWindow", "Afficher", nullptr));
        actioncopier->setText(QCoreApplication::translate("MainWindow", "copier", nullptr));
        actioncoller->setText(QCoreApplication::translate("MainWindow", "coller", nullptr));
        menuedition->setTitle(QCoreApplication::translate("MainWindow", "edition", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
