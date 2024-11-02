#include "settingsdialog.h"
#include "ui_settingsdialog.h"

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    connect(ui->applyButton, &QPushButton::clicked, this, &QDialog::accept); // Accept dialog on button click
}

SettingsDialog::~SettingsDialog() {
    delete ui;
}

QString SettingsDialog::getInputValue() const {
    return ui->inputValueLineEdit->text(); // Return the text from QLineEdit
}
