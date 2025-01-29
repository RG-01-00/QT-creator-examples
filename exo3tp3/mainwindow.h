#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRadioButton>
#include <QPushButton>
#include <QLabel>
#include <QMap>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
        // Slot for the vote button
    void onAnnulerClicked();
    void onVoteClicked();
    void showResults();


protected:
    void resizeEvent(QResizeEvent *event) override;

private:

    void saveVotes();
    void loadVotes();

    QLabel *backgroundLabel;
    Ui::MainWindow *ui;
    QMap<QString, int> voteCount;
    QString selectedOption;
    void setBackgroundImage();
    void setCircularImage(QLabel *label, const QString &imagePath);
};

#endif // MAINWINDOW_H
