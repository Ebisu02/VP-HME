#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "authors.h"
#include "ui_authors.h"
#include "QFileDialog"
#include "QTextDocumentWriter"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->action, SIGNAL(triggered()), this, SLOT(About_lab1()));
// Open File
    QAction* pactOpen = new QAction("file open action", 0);
    pactOpen->setText("&Открыть");
    pactOpen->setShortcut(QKeySequence("CTRL+D"));
    pactOpen->setToolTip("Открытие документа");
    pactOpen->setStatusTip("Открыть файл");
    pactOpen->setWhatsThis("Открыть файл");
    pactOpen->setIcon(QPixmap("load.png"));
    connect(pactOpen, SIGNAL(triggered(bool)), SLOT(slotOpen()));
    QMenu* pmnuFile = new QMenu("&Файл");
    pmnuFile->addAction(pactOpen);
    menuBar()->addMenu(pmnuFile);
// Save File
    QAction* pactSave = new QAction("file save action", 0);
    pactSave->setText("&Сохранить");
    pactSave->setShortcut(QKeySequence("CTRL+S"));
    pactSave->setToolTip("Сохранение документа");
    pactSave->setStatusTip("Сохранить файл");
    pactSave->setWhatsThis("Сохранить файл");
    pactSave->setIcon(QPixmap("1.png"));
    connect(pactSave, SIGNAL(triggered(bool)), SLOT(slotSave()));
    pmnuFile->addAction(pactSave);
    menuBar()->addMenu(pmnuFile);
// Clear Text Edit
    QAction* pactClear = new QAction("clear textEdit action", 0);
    pactClear->setText("&Очистить");
    pactClear->setShortcut(QKeySequence("CTRL+L"));
    pactClear->setToolTip("Очистка Текста");
    pactClear->setStatusTip("Очистить");
    pactClear->setWhatsThis("Очистить");
    pactClear->setIcon(QPixmap("clear.png"));
    connect(pactClear, SIGNAL(triggered(bool)), SLOT(slotClear()));
    pmnuFile->addAction(pactClear);
    menuBar()->addMenu(pmnuFile);

    ui->toolBar->addAction(pactOpen);
    ui->toolBar->addAction(pactSave);
    ui->toolBar->addAction(pactClear);
}

void MainWindow::slotClear() {
    ui->textEdit->clear();
}

void MainWindow::slotOpen()
{
    QString filename = QFileDialog::getOpenFileName(0, "Открыть файл", "", "*.txt");
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        ui->textEdit->setPlainText(file.readAll());
    }
}

void MainWindow::slotSave()
{
    QString filename = QFileDialog::getSaveFileName(0, "Сохранить файл", "", "*.txt");
    QTextDocumentWriter writer;
    writer.setFileName(filename);
    writer.write(ui->textEdit->document());
}

void MainWindow::About_lab1()
{
    Authors *dg = new Authors();
    dg->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
