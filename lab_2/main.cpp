#include "mainwindow.h"
#include "startdialogososov.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    StartDialog startDialog;
    startDialog.show();

    return a.exec();
}
