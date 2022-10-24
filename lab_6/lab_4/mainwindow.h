#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ososov.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Ososov *myForm;

signals:
    void sendData(QString str);

private slots:
    void onButtonSend();
    void onPushButtonLoadClicked();
};

#endif // MAINWINDOW_H
