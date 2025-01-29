#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

#include <QRandomGenerator>
    QString baseStyle =
        "QLabel {"
        "  color: rgb(0, 0, 0);"
        "  padding: 10px;"
        "  border: 2px solid #2980b9;"
        "  border-radius: 110px;"
         "  background-color: %1;"
        "}";
     ui->label->setFixedSize(231, 221);

    // Add more buttons for colors
    connect(ui->buttonRouge, &QPushButton::clicked, this, [=]() {
        ui->label->setStyleSheet("background-color: red;");
        ui->label->setText("                   Red");
        ui->buttonRouge->setEnabled(false);
        ui->buttonBleu->setEnabled(true);
        ui->buttonGreen->setEnabled(true);
        ui->buttonYellow->setEnabled(true);
    });

    connect(ui->buttonBleu, &QPushButton::clicked, this, [=]() {
        ui->label->setStyleSheet("background-color: blue;");
        ui->label->setText("                  Blue");
        ui->buttonRouge->setEnabled(true);
        ui->buttonBleu->setEnabled(false);
        ui->buttonGreen->setEnabled(true);
        ui->buttonYellow->setEnabled(true);
    });

    connect(ui->buttonGreen, &QPushButton::clicked, this, [=]() {
        ui->label->setStyleSheet("background-color: green;");
        ui->label->setText("                 Green");
        ui->buttonRouge->setEnabled(true);
        ui->buttonBleu->setEnabled(true);
        ui->buttonGreen->setEnabled(false);
        ui->buttonYellow->setEnabled(true);
    });

    connect(ui->buttonYellow, &QPushButton::clicked, this, [=]() {
        ui->label->setStyleSheet("background-color: yellow;");
        ui->label->setText("                 Yellow");
        ui->buttonRouge->setEnabled(true);
        ui->buttonBleu->setEnabled(true);
        ui->buttonGreen->setEnabled(true);
        ui->buttonYellow->setEnabled(false);
    });

    // Add a reset button
    connect(ui->buttonReset, &QPushButton::clicked, this, [=]() {
        ui->label->setStyleSheet("");
        ui->label->setText("              Default");
        ui->buttonRouge->setEnabled(true);
        ui->buttonBleu->setEnabled(true);
        ui->buttonGreen->setEnabled(true);
        ui->buttonYellow->setEnabled(true);
    });

    // Add a "Surprise Me" button for a random color
    connect(ui->buttonSurprise, &QPushButton::clicked, this, [=]() {
        QStringList colors = {"                   Red", "                 blue", "                 Green", "                yellow", "               purple", "              orange", "                 cyan"};
        QString randomColor = colors.at(QRandomGenerator::global()->bounded(colors.size()));
        ui->label->setStyleSheet("background-color: " + randomColor + ";");
        ui->label->setText(randomColor.toUpper());
    });


};

MainWindow::~MainWindow()
{
    delete ui;
}

