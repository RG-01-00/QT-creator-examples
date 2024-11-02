#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingsdialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->parametresButton, &QPushButton::clicked, this, &MainWindow::openSettingsDialog);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::openSettingsDialog() {
    SettingsDialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        QString inputValue = dialog.getInputValue();
        bool ok;
        int value = inputValue.toInt(&ok); // Convert to integer
        if (ok) {
            // Adjust the QLabel size based on the input value
            ui->adjustableLabel->resize(value, value); // Resize QLabel (width, height)
            ui->adjustableLabel->setText(QString("Size: %1").arg(value)); // Update text to show size
        }
    }
}
