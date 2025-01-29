#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;  // Forward declaration of the UI class
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_activerButton_clicked();
    void on_desactiverButton_clicked();

private:
    Ui::MainWindow *ui;  // Pointer to the UI object
};

#endif // MAINWINDOW_H
