#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_3_clicked()
{
    close();
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->setText("c'est mon 1 er tp");
    ui->pushButton->setEnabled(1);
    ui->pushButton->setEnabled(0);
}


void MainWindow::on_pushButton_clicked()
{
    ui->textEdit->clear();
    ui->pushButton->setEnabled(0);
    ui->pushButton->setEnabled(1);
}

