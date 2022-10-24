#include "ososov.h"
#include "ui_ososov.h"
#include "QAbstractButton"
#include <QFileDialog>
#include <QTextStream>
#include <QTextEdit>
#include <QException>

Ososov::Ososov(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ososov)
{
    ui->setupUi(this);
}

void Ososov::recieveData(QString str)
{
    QStringList lst = str.split("*");
    ui->textEdit->setText(lst.at(1) + "\n" + lst.at(0));
    if (lst.size() > 1) {
        QImage image1(lst.at(0));
        ui->label->setPixmap(QPixmap::fromImage(image1));
    }
}

Ososov::~Ososov()
{
    delete ui;
}

void Ososov::on_buttonBox_clicked(QAbstractButton *button)
{
    if (button->text() == "Reset") {
        ui->label->clear();
        ui->textEdit->clear();
    }
    else if (button->text() == "Open") {
        openFile();
    }
    else if (button->text() == "Save") {
        saveFile();
    }
}

void Ososov::saveFile() {
    // Getting data
    QString t = ui->textEdit->toPlainText();
    QStringList lst = t.split("\n");
    QString str = "";
    str = QFileDialog::getSaveFileName(0, str, "", "*.txt");
    if (!str.isEmpty()) {
        QFile file(str);
        if (file.open(QIODevice::WriteOnly)) {
            int i = 0;
            for (QStringList::iterator it = lst.begin(); it != lst.end(); ++it, ++i) {
                QTextStream(&file) << *it << "\n";
                if (i == 3) {
                    QTextStream(&file) << "*";
                }
            }
            file.close();
        }
    }
}

void Ososov::openFile() {
    QString path = QFileDialog::getOpenFileName(0, "Открыть файл", "", "*.txt");
    if (path.isEmpty()) {
        return;
    }
    QFile file(path);
    if (file.open(QIODevice::ReadOnly)) {
        try {
            QTextStream stream(&file);
            QStringList lst = stream.readAll().split("*");
            if (lst.size() != 2)
            {
                throw("Error: incorrect file");
            }
            ui->textEdit->setText(lst.at(0) + lst.at(1));
            QString path = lst.at(1);
            path.remove(path.length() - 1, path.length());
            if (lst.size() > 1) {
                QImage image1(path);
                ui->label->setPixmap(QPixmap::fromImage(image1));
            }
            else {
                ui->label->clear();
            }
        }
        catch (...) {
            ui->textEdit->setText("Error: Maybe ur file incorrect, if it's correct u need to call ur sysadmin");
        }
        file.close();
    }
}
