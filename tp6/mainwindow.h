#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked(); // For "Lancer"
    void on_pushButton_2_clicked(); // For "Arrêter"
    void on_comboBox_currentIndexChanged(int index); // For color change in QLabel

private:
    Ui::MainWindow *ui;
    QTimer *progressTimer; // Timer for controlling progress
};

#endif // MAINWINDOW_H
