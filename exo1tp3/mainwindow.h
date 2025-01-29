#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void generatePassword();  // Slot for password generation
    void simulateLogin();     // Slot for simulating login

private:
    Ui::MainWindow *ui;

    QString generateRandomPassword(int length);  // Function to generate random password
};

#endif // MAINWINDOW_H
