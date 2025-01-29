#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QRandomGenerator>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);

  //   this->setStyleSheet("QMainWindow { background-image: url(:/images/background.jpg); }");
        this->setStyleSheet(
            "QMainWindow { "
            "background-image: url(:/images/background.jpg); "
            "background-repeat: no-repeat; "
            "background-position: center; "
            "background-size: cover; "
            "}"
            );

    // Connect signals to slots
    connect(ui->generateButton, &QPushButton::clicked, this, &MainWindow::generatePassword);
    connect(ui->loginButton, &QPushButton::clicked, this, &MainWindow::simulateLogin);
}

MainWindow::~MainWindow() {
    delete ui;
}

// Function to generate a random password of a given length
QString MainWindow::generateRandomPassword(int length) {
    const QString chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*";
    QString password;
    for (int i = 0; i < length; ++i) {
        int index = QRandomGenerator::global()->bounded(chars.length());
        password.append(chars.at(index));
    }
    return password;
}

// Slot for password generation
void MainWindow::generatePassword() {
    // Get length from the spin box
    int length = ui->lengthSpinBox->value();
    QString password = generateRandomPassword(length);

    // Set the generated password in the password input field (passwordInput)
    ui->passwordInput->setText(password);  // Display the password in the password input field
}

// Slot for simulating login
void MainWindow::simulateLogin() {
    QString username = ui->usernameInput->text();
    QString password = ui->passwordInput->text();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Le nom d'utilisateur ou le mot de passe est vide !");
    } else if (username == "admin" && password == "password123") {
        QMessageBox::information(this, "Succès", "Connexion réussie !");
    } else {
        QMessageBox::critical(this, "Erreur", "Nom d'utilisateur ou mot de passe does not exist !");
    }
}

