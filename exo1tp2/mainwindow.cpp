#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)  // Initialize the UI from the designer
{
    ui->setupUi(this);  // Set up the UI (widgets, layouts, etc.) from the .ui file

    // Initially disable the "Désactiver" button (it should be enabled after clicking "Activer")
    ui->desactiverButton->setEnabled(false);

    // Connect the buttons to their respective slots
    connect(ui->activerButton, &QPushButton::clicked, this, &MainWindow::on_activerButton_clicked);
    connect(ui->desactiverButton, &QPushButton::clicked, this, &MainWindow::on_desactiverButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;  // Clean up the UI object
}

void MainWindow::on_activerButton_clicked()
{
    // When the "Activer" button is clicked:
    // Enable the text widget and disable the "Activer" button
    ui->textWidget->setEnabled(true);
    ui->activerButton->setEnabled(false);  // Disable "Activer" button
    ui->desactiverButton->setEnabled(true);  // Enable "Désactiver" button
}

void MainWindow::on_desactiverButton_clicked()
{
    // When the "Désactiver" button is clicked:
    // Disable the text widget and enable the "Activer" button
    ui->textWidget->setEnabled(false);
    ui->activerButton->setEnabled(true);  // Enable "Activer" button
    ui->desactiverButton->setEnabled(false);  // Disable "Désactiver" button
}

