#ifndef OSOSOV_H
#define OSOSOV_H

#include <QWidget>
#include <QAbstractButton>

namespace Ui {
class Ososov;
}

class Ososov : public QWidget
{
    Q_OBJECT

public:
    explicit Ososov(QWidget *parent = 0);
    ~Ososov();

private:
    Ui::Ososov *ui;
    void openFile();
    void saveFile();

public slots:
    void recieveData(QString str);
private slots:
    void on_buttonBox_clicked(QAbstractButton *button);
};

#endif // OSOSOV_H
