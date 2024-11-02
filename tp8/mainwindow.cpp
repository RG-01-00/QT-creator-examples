#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QTimer>
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    timer = new QTimer(this);

    // Connexion pour mettre à jour l'heure
    connect(timer, &QTimer::timeout, this, &MainWindow::updateTime);
    timer->start(1000); // Démarre le timer pour mettre à jour toutes les secondes

    // Connexion du bouton "Démarrer"
    connect(ui->button_start, &QPushButton::clicked, this, &MainWindow::startCountdown);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::updateTime() {
    QDateTime currentTime = QDateTime::currentDateTime();
    ui->label_time->setText("Heure actuelle : " + currentTime.toString("hh:mm:ss"));
}

void MainWindow::startCountdown() {
    countdownTime = 10; // Temps de compte à rebours en secondes
    timer->start(1000); // Démarre le timer pour le compte à rebours
    connect(timer, &QTimer::timeout, this, &MainWindow::updateCountdown);
}

void MainWindow::updateCountdown() {
    if (countdownTime >= 0) {
        ui->label_time->setText("Temps restant : " + QString::number(countdownTime) + " secondes");
        countdownTime--;
    } else {
        timer->stop(); // Arrête le timer lorsque le compte à rebours est terminé
        ui->label_time->setText("count down finished");
    }
}

