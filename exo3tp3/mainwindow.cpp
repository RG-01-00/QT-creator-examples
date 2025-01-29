#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QDialog>
#include <QVBoxLayout>
#include <QDebug>
#include <QLabel>
#include <QPixmap>
#include <QResizeEvent>
#include <QGraphicsOpacityEffect>
#include <QMessageBox>
#include <QPushButton>
#include <QFont>
#include <QImage>
#include <QPainterPath>
#include <QBitmap>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QLabel *contestantImage1 = ui->contestantImage1;
    QLabel *contestantImage2 = ui->contestantImage2;
    QLabel *contestantImage3 = ui->contestantImage3;

    // Set the size of the QLabel to make it square
    contestantImage1->setFixedSize(99, 99);  // Set both width and height to be the same
    contestantImage2->setFixedSize(99, 99);
    contestantImage3->setFixedSize(99, 99);

    // Set images to labels using the function
    setCircularImage(contestantImage1, ":/images/contestant5.jpg");
    setCircularImage(contestantImage2, ":/images/contestant1.jpg");
    setCircularImage(contestantImage3, ":/images/contestant9.jpg");


    //buton style  // Apply the global stylesheet
    QString buttonStyle =
        "QPushButton {"
        "    background-color: rgb(94, 143, 225);" /* Button background */
        "    color: white;" /* White text */
        "    border: none;"
        "    border-radius: 10px;" /* Rounded corners */
        "    padding: 10px 20px;" /* Padding */
        "}"

        "QPushButton:hover {"
        "    background-color: rgb(55, 109, 200);" /* Darker shade on hover */
        "}"

        "QPushButton:pressed {"
        "    background-color: rgb(94, 143, 225);" /* Background when pressed */
        "    border: 1px solid #1c5985;" /* Subtle border when pressed */
        "}";

    // Apply to all widgets, including buttons
    qApp->setStyleSheet(buttonStyle);


    QFont appFont("Ubuntu", 19, QFont::Bold); // 700 weight is equivalent to QFont::Bold
    appFont.setStyleHint(QFont::AnyStyle);
    qApp->setFont(appFont);
    setBackgroundImage();
    setWindowTitle("Système de vote");

    // Initialize vote counts
    loadVotes();

    // Connect the "Voter" button to the slot
    connect(ui->voteButton, &QPushButton::clicked, this, &MainWindow::onVoteClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setCircularImage(QLabel *label, const QString &imagePath)
{
    // Set size of QLabel to make it larger than the image
    label->setFixedSize(100, 100);  // Make the label slightly larger than the image (e.g., 120x120)

    // Load the image
    QPixmap pixmap(imagePath);

    // Make the image circular by creating a round mask
    QImage image = pixmap.toImage();
    QPainterPath path;
    path.addEllipse(0, 0, image.width(), image.height());  // Creates a round mask

    // Convert to bitmap mask
    QBitmap mask(image.size());
    mask.fill(Qt::color0);  // Make it transparent
    QPainter painter(&mask);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(Qt::color1);
    painter.setPen(Qt::NoPen);
    painter.drawPath(path);  // Apply the circular path to the mask
    painter.end();

    // Set the mask on the QPixmap to make it circular
    pixmap.setMask(mask);

    // Scale the image to fit the label, but leave some margin for the "border"
    pixmap = pixmap.scaled(label->size() - QSize(9, 9), Qt::KeepAspectRatio);  // Reduce the image size to fit within label with margin

    // Set the image on the label and center it
    label->setPixmap(pixmap);
    label->setAlignment(Qt::AlignCenter);  // Center the image inside the label
}

void MainWindow::setBackgroundImage()
{
    // Create a QLabel to display the background image
    backgroundLabel = new QLabel(this);  // Add QLabel as a child of the MainWindow
    backgroundLabel->setPixmap(QPixmap(":/images/vote2.jpg").scaled(this->size(), Qt::KeepAspectRatioByExpanding));
    backgroundLabel->setGeometry(0, 0, this->width(), this->height()); // Position and size the QLabel

    // Send the background label to the back
    backgroundLabel->lower();

    // Create and set the opacity effect
    QGraphicsOpacityEffect *opacityEffect = new QGraphicsOpacityEffect(this);
    opacityEffect->setOpacity(0.5);  // Adjust the opacity here (0 is fully transparent, 1 is fully opaque)
    backgroundLabel->setGraphicsEffect(opacityEffect);
}

// Override the resizeEvent to resize the background image when the window is resized
void MainWindow::resizeEvent(QResizeEvent *event)
{
    // Resize the background image when the window is resized
    if (backgroundLabel) {
        QPixmap pixmap(":/images/vote2.jpg");
        backgroundLabel->setPixmap(pixmap.scaled(event->size(), Qt::KeepAspectRatioByExpanding));
        backgroundLabel->setGeometry(0, 0, event->size().width(), event->size().height());
    }

    // Always call the base class's resizeEvent
    QMainWindow::resizeEvent(event);
}



void MainWindow::onVoteClicked()
{
    // Check which option is selected
    if (ui->option1->isChecked()) {
        voteCount["Option 1"]++;
        selectedOption = "Option 1";
    } else if (ui->option2->isChecked()) {
        voteCount["Option 2"]++;
        selectedOption = "Option 2";
    } else if (ui->option3->isChecked()) {
        voteCount["Option 3"]++;
        selectedOption = "Option 3";
    } else {
        QMessageBox::warning(this, "Erreur", "Veuillez sélectionner une option.");
        return;
    }

    ui->voteButton->setEnabled(false);  // Disable voting button after voting

    // Show a message box with "Annuler" and "OK" buttons
    QMessageBox msgBox(this);
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setWindowTitle("Vote enregistré");
    msgBox.setText("Vous avez voté pour " + selectedOption + ".");

    // Add an "Annuler" button
    QPushButton *annulerButton = msgBox.addButton("Annuler", QMessageBox::RejectRole);
    QPushButton *okButton = msgBox.addButton("OK", QMessageBox::AcceptRole);

    // Connect the buttons
    connect(annulerButton, &QPushButton::clicked, this, &MainWindow::onAnnulerClicked);

    // Execute the message box
    msgBox.exec();

    // If OK is pressed, save the votes
    if (msgBox.clickedButton() == okButton) {
        showResults();
        saveVotes();
    }
}

void MainWindow::onAnnulerClicked()
{
    // If "Annuler" button is clicked, just close the message box
    qDebug() << "Vote action cancelled!";
    ui->voteButton->setEnabled(true);  // Re-enable the voting button in case of cancellation
}


void MainWindow::showResults()
{
    // Create a custom dialog
    QDialog resultDialog(this);
    resultDialog.setWindowTitle("Merci Pour Voter");

    // Set up the layout
    QVBoxLayout *layout = new QVBoxLayout(&resultDialog);

    // Add a label with the "Congrats" image
    QLabel *imageLabel = new QLabel(&resultDialog);
    QPixmap congratsImage(":/images/congrats.gif");
    // Update with your image path
    if (!congratsImage.isNull()) {
        imageLabel->setPixmap(congratsImage.scaled(200, 200, Qt::KeepAspectRatio));
    } else {
        imageLabel->setText("Félicitations!");  // Fallback text in case the image is missing
    }
    layout->addWidget(imageLabel, 0, Qt::AlignCenter);

    // Add a button to show results
    QPushButton *showResultsButton = new QPushButton("Voir les résultats", &resultDialog);
    layout->addWidget(showResultsButton, 0, Qt::AlignCenter);

    // Connect the button to display the results
    connect(showResultsButton, &QPushButton::clicked, [&]() {
        QString result = QString("Résultats du vote :\n"
                                 "Gheraibia Roufaida: %1 votes\n"
                                 "Barak Obama: %2 votes\n"
                                 "Vladimir Putin: %3 votes")
                             .arg(voteCount["Option 1"])
                             .arg(voteCount["Option 2"])
                             .arg(voteCount["Option 3"]);
        QMessageBox::information(this, "Résultats", result);
    });

    // Set the layout and execute the dialog
    resultDialog.setLayout(layout);
    resultDialog.exec();
}


void MainWindow::saveVotes()
{
    QJsonObject json;
    json["Option 1"] = voteCount["Option 1"];
    json["Option 2"] = voteCount["Option 2"];
    json["Option 3"] = voteCount["Option 3"];

    QJsonDocument doc(json);
    QFile file("votes.json");
    if (file.open(QIODevice::WriteOnly)) {
        file.write(doc.toJson());
        file.close();
    }
}


void MainWindow::loadVotes()
{
    QFile file("votes.json");
    if (file.open(QIODevice::ReadOnly)) {
        QByteArray data = file.readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data);
        QJsonObject json = doc.object();

        voteCount["Option 1"] = json["Option 1"].toInt();
        voteCount["Option 2"] = json["Option 2"].toInt();
        voteCount["Option 3"] = json["Option 3"].toInt();

    } else {
        voteCount["Option 1"] = 0;
        voteCount["Option 2"] = 0;
        voteCount["Option 3"] = 0;

    }
}


