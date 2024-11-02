#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setVisible(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionQuitter_triggered()
{
  close();
}


void MainWindow::on_actiona_propos_triggered()
{
  ui->label->setVisible(1);
  ui->label->setText("TP du module IHM 2023/2024");
}


void MainWindow::on_actionGris_triggered()
{
  this->setStyleSheet("background-color: rgb(129, 129, 129);");
}


void MainWindow::on_actionBlanc_triggered()
{
 this->setStyleSheet("background-color: rgb(255, 255, 255);");
}

