#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPalette>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the button to the rollDice slot
    connect(ui->button_roll, &QPushButton::clicked, this, &MainWindow::rollDice);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::rollDice()
{
    // Generate a random number between 1 and 6
    int result = QRandomGenerator::global()->bounded(1, 7);

    // Display the result in the QLabel
    ui->label_result->setText("Result : " + QString::number(result));

    // Change the QLabel background color based on the result
    QPalette palette = ui->label_result->palette();
    switch (result) {
    case 1:
        palette.setColor(QPalette::Window, Qt::red);
        break;
    case 2:
        palette.setColor(QPalette::Window, Qt::yellow);
        break;
    case 3:
        palette.setColor(QPalette::Window, Qt::blue);
        break;
    case 4:
        palette.setColor(QPalette::Window, Qt::cyan);
        break;
    case 5:
        palette.setColor(QPalette::Window, Qt::magenta);
        break;
    case 6:
        palette.setColor(QPalette::Window, Qt::green);
        break;
    }
    ui->label_result->setAutoFillBackground(true);
    ui->label_result->setPalette(palette);
}
