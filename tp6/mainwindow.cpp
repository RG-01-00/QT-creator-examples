#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QColor>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), progressTimer(nullptr) {
    ui->setupUi(this);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_pushButton_clicked() {
    if (!progressTimer) { // Check if the timer is not already running
        progressTimer = new QTimer(this);
        connect(progressTimer, &QTimer::timeout, this, [=]() {
            int value = ui->progressBar->value();
            if (value < 100) {
                ui->progressBar->setValue(value + 10); // Increment progress
            } else {
                progressTimer->stop(); // Stop if 100% reached
                delete progressTimer; // Clean up
                progressTimer = nullptr; // Reset pointer
            }
        });
        ui->progressBar->setValue(0); // Reset progress bar to 0
        progressTimer->start(1000); // Start timer (1 second interval)
    }
}

void MainWindow::on_pushButton_2_clicked() {
    if (progressTimer) {
        progressTimer->stop(); // Stop the timer
        delete progressTimer; // Clean up
        progressTimer = nullptr; // Reset pointer
    }
}

// Using the original implementation for color change
void MainWindow::on_comboBox_currentIndexChanged(int index) {
    QString color = ui->comboBox->currentText(); // Get the current text
    ui->label->setText(color); // Set the label text to the selected color
    ui->label->setStyleSheet("background-color: " + color.toLower()); // Change background color
}
