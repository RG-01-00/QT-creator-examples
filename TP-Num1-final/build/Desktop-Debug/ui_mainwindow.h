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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNouveau;
    QAction *actionEnregistrer;
    QAction *actionQuitter;
    QAction *actionGris;
    QAction *actionBlanc;
    QAction *actiona_propos;
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menufichier;
    QMenu *menuEdition;
    QMenu *menuA_propos;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("backgroundcolor: rgb(26, 95, 180);\n"
"font: 14pt \"Cantarell\";"));
        actionNouveau = new QAction(MainWindow);
        actionNouveau->setObjectName(QString::fromUtf8("actionNouveau"));
        actionEnregistrer = new QAction(MainWindow);
        actionEnregistrer->setObjectName(QString::fromUtf8("actionEnregistrer"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionGris = new QAction(MainWindow);
        actionGris->setObjectName(QString::fromUtf8("actionGris"));
        actionBlanc = new QAction(MainWindow);
        actionBlanc->setObjectName(QString::fromUtf8("actionBlanc"));
        actiona_propos = new QAction(MainWindow);
        actiona_propos->setObjectName(QString::fromUtf8("actiona_propos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 100, 231, 141));
        label->setTextFormat(Qt::RichText);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        menufichier = new QMenu(menubar);
        menufichier->setObjectName(QString::fromUtf8("menufichier"));
        menuEdition = new QMenu(menubar);
        menuEdition->setObjectName(QString::fromUtf8("menuEdition"));
        menuA_propos = new QMenu(menubar);
        menuA_propos->setObjectName(QString::fromUtf8("menuA_propos"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufichier->menuAction());
        menubar->addAction(menuEdition->menuAction());
        menubar->addAction(menuA_propos->menuAction());
        menufichier->addAction(actionNouveau);
        menufichier->addAction(actionEnregistrer);
        menufichier->addAction(actionQuitter);
        menuEdition->addAction(actionGris);
        menuEdition->addAction(actionBlanc);
        menuA_propos->addAction(actiona_propos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionNouveau->setText(QCoreApplication::translate("MainWindow", "Nouveau", nullptr));
        actionEnregistrer->setText(QCoreApplication::translate("MainWindow", "Enregistrer", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionGris->setText(QCoreApplication::translate("MainWindow", "Gris", nullptr));
        actionBlanc->setText(QCoreApplication::translate("MainWindow", "Blanc", nullptr));
        actiona_propos->setText(QCoreApplication::translate("MainWindow", "a propos", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        menufichier->setTitle(QCoreApplication::translate("MainWindow", "fichier", nullptr));
        menuEdition->setTitle(QCoreApplication::translate("MainWindow", "Edition", nullptr));
        menuA_propos->setTitle(QCoreApplication::translate("MainWindow", "A propos...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
