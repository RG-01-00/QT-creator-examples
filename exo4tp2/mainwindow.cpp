#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPropertyAnimation>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Load images
    QPixmap eyeClosed(":/images/eyeclose.png");
    QPixmap eyeOpen(":/images/eyeopen.png");

    // Set default image to "closed eye"
    ui->labelVisibility->setPixmap(eyeClosed.scaled(200, 200, Qt::KeepAspectRatio));
    ui->labelText->setText("I don't see you"); // Set initial text

    // Initial states
    ui->buttonMasquer->setEnabled(false); // Disable "Masquer" initially

    // Anchor QLabel to its starting position
    QRect originalGeometry = ui->labelVisibility->geometry();

    // Animation function
    auto animateEye = [=](bool open) {
        QPixmap targetImage = open ? eyeOpen : eyeClosed;

        // Set the target image and text
        ui->labelVisibility->setPixmap(targetImage.scaled(200, 200, Qt::KeepAspectRatio));
        ui->labelText->setText(open ? "I see you" : "I don't see you");

        // Reset QLabel to its original geometry before animation
        ui->labelVisibility->setGeometry(originalGeometry);

        // Create and configure the animation for QLabel's geometry
        QPropertyAnimation *animation = new QPropertyAnimation(ui->labelVisibility, "geometry");
        animation->setDuration(500); // Animation duration
        animation->setEasingCurve(QEasingCurve::InOutQuad); // Smooth easing

        QRect targetGeometry = open
                                   ? originalGeometry.adjusted(0, 0, 0, 0) // Full size for open eye
                                   : originalGeometry.adjusted(0, 10, 0, -10); // Slight compression for closed eye

        animation->setStartValue(originalGeometry);
        animation->setEndValue(targetGeometry);

        // Ensure no lingering animations
        connect(animation, &QPropertyAnimation::finished, animation, &QPropertyAnimation::deleteLater);

        animation->start();
    };

    // Connect "Afficher" button (Open eye)
    connect(ui->buttonAfficher, &QPushButton::clicked, this, [=]() {
        animateEye(true);
        ui->buttonAfficher->setEnabled(false);
        ui->buttonMasquer->setEnabled(true);
    });

    // Connect "Masquer" button (Close eye)
    connect(ui->buttonMasquer, &QPushButton::clicked, this, [=]() {
        animateEye(false);
        ui->buttonAfficher->setEnabled(true);
        ui->buttonMasquer->setEnabled(false);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

