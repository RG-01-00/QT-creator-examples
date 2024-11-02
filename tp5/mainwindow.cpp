#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QComboBox>
#include <QLabel>


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

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    QString color = ui->comboBox->currentText();
    ui->label->setText(color);
    ui->label->setStyleSheet("background-color: " + color.toLower());

}

