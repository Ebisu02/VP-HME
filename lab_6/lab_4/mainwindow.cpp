#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFileDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myForm = new Ososov();
    connect(ui->OKPushButton, SIGNAL(clicked()), myForm, SLOT(show()));
    connect(ui->DownloadPushButton, SIGNAL(clicked(bool)), SLOT(onPushButtonLoadClicked()));
    connect(ui->OKPushButton, SIGNAL(clicked(bool)), this, SLOT(onButtonSend()));
    connect(this, SIGNAL(sendData(QString)), myForm, SLOT(recieveData(QString)));
}

void MainWindow::onPushButtonLoadClicked()
{
    QString filename = QFileDialog::getOpenFileName(0, "Выберите изображение", "", "*.png *.jpg *.jpeg");
    ui->PathToImageLineEdit->setText(filename);
    QImage image1(filename);
    ui->PhotoLabel->setPixmap(QPixmap::fromImage(image1));
}

void MainWindow::onButtonSend()
{
    QString fio = ui->FIOLineEdit->text().isEmpty() ? "Default User" : ui->FIOLineEdit->text();
    QString vacancy = ui->VacancyLineEdit->text().isEmpty() ? "Default Vacancy" : ui->VacancyLineEdit->text();
    QString st = ui->PathToImageLineEdit->text() + "*"
            + fio + "\n"
            + vacancy + "\n"
            + ui->BirthDayDateEdit->text();
    if (ui->ManRadioButton->isChecked() == true) {
        st += "\nПол: Мужской";
    }
    else if (ui->WomanRadioButton->isChecked() == true) {
        st += "\nПол: Женский";
    }
    else {
        st += "\nПол: Не был выбран, дать по жопе";
    }
    emit sendData(st);
}

MainWindow::~MainWindow()
{
    delete ui;
}

