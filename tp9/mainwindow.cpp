#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Connect the button to the validation slot
    connect(ui->button_validate, &QPushButton::clicked, this, &MainWindow::validateInput);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::validateInput()
{
    QString name = ui->lineEdit_name->text();
    QString surname = ui->lineEdit_surname->text();
    QString ageText = ui->lineEdit_age->text();

    // Check if all fields are filled
    if (name.isEmpty() || surname.isEmpty() || ageText.isEmpty()) {
        QMessageBox::warning(this, "Validation Error", "Tous les champs doivent être remplis !");
        return;
    }

    // Check if age is a valid number
    bool ok;
    int age = ageText.toInt(&ok);
    if (!ok || age < 0) {
        QMessageBox::warning(this, "Validation Error", "L'âge doit être un nombre valide !");
        return;
    }

    // Show confirmation message
    QMessageBox::information(this, "Validation Successful", "Nom: " + name + "\nPrénom: " + surname + "\nÂge: " + QString::number(age));

    // (Optional) Show summary dialog
    // You can create and show a modal dialog here if needed.
}



