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
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *buttonEtape1;
    QPushButton *buttonEtape2;
    QPushButton *buttonEtape3;
    QPushButton *buttonStart;
    QLabel *label;
    QProgressBar *progressBar;
    QPushButton *buttonRestart;
    QMenuBar *menubar;
    QMenu *menuDownload;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("font: 700 14pt \"Sans\";\n"
"background-color: rgb(205, 171, 143);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        buttonEtape1 = new QPushButton(centralwidget);
        buttonEtape1->setObjectName(QString::fromUtf8("buttonEtape1"));
        buttonEtape1->setGeometry(QRect(230, 190, 300, 41));
        buttonEtape1->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 49, 27);\n"
"font: 700 14pt \"Sans\";"));
        buttonEtape2 = new QPushButton(centralwidget);
        buttonEtape2->setObjectName(QString::fromUtf8("buttonEtape2"));
        buttonEtape2->setGeometry(QRect(230, 250, 300, 41));
        buttonEtape2->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 49, 27);\n"
"font: 700 14pt \"Sans\";"));
        buttonEtape3 = new QPushButton(centralwidget);
        buttonEtape3->setObjectName(QString::fromUtf8("buttonEtape3"));
        buttonEtape3->setGeometry(QRect(230, 320, 300, 41));
        buttonEtape3->setStyleSheet(QString::fromUtf8("background-color: rgb(76, 49, 27);\n"
"font: 700 14pt \"Sans\";"));
        buttonStart = new QPushButton(centralwidget);
        buttonStart->setObjectName(QString::fromUtf8("buttonStart"));
        buttonStart->setGeometry(QRect(330, 390, 111, 41));
        buttonStart->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
"font: 700 14pt \"Sans\";"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 130, 771, 31));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(70, 60, 661, 24));
        progressBar->setStyleSheet(QString::fromUtf8(" background-color: rgb(36, 31, 49);\n"
" "));
        progressBar->setValue(24);
        buttonRestart = new QPushButton(centralwidget);
        buttonRestart->setObjectName(QString::fromUtf8("buttonRestart"));
        buttonRestart->setGeometry(QRect(340, 450, 97, 30));
        buttonRestart->setStyleSheet(QString::fromUtf8("background-color:  rgb(61, 56, 70)"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 31));
        menuDownload = new QMenu(menubar);
        menuDownload->setObjectName(QString::fromUtf8("menuDownload"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuDownload->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buttonEtape1->setText(QCoreApplication::translate("MainWindow", "Step1 ", nullptr));
        buttonEtape2->setText(QCoreApplication::translate("MainWindow", "Step 2", nullptr));
        buttonEtape3->setText(QCoreApplication::translate("MainWindow", "Step 3", nullptr));
        buttonStart->setText(QCoreApplication::translate("MainWindow", "start", nullptr));
        label->setText(QString());
        buttonRestart->setText(QCoreApplication::translate("MainWindow", "Restart", nullptr));
        menuDownload->setTitle(QCoreApplication::translate("MainWindow", "Download", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
