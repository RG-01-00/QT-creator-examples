#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QClipboard>
#include<QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->actionAfficher,&QAction::triggered,this,&MainWindow::on_actionAfficher_triggered);
    connect(ui->actioncopier,&QAction::triggered,this,&MainWindow::on_actioncopier_triggered );
    connect(ui->actioncoller,&QAction::triggered,this,&MainWindow:: on_actioncoller_triggered);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAfficher_triggered()
{

    ui->lineEdit->setText("bonjour");
}

void MainWindow::on_actioncopier_triggered()
{
    QClipboard*clipboard=QApplication::clipboard();
    clipboard->setText(ui->lineEdit->text());
}


void MainWindow::on_actioncoller_triggered()
{
    QClipboard*clipboard=QApplication::clipboard();
    ui->lineEdit_2->setText(clipboard->text());

}


