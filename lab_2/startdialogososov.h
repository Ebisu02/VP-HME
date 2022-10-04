#ifndef STARTDIALOGOSOSOV_H
#define STARTDIALOGOSOSOV_H

#include <QDialog>
#include <QWidget>
#include <QMessageBox>
#include <QPushButton>
#include "InputDialog.h"

class StartDialog: public QPushButton {
    Q_OBJECT

public:
    StartDialog(QWidget* pwgt = 0) : QPushButton("Нажми", pwgt) {
        connect(this, SIGNAL(clicked()), SLOT(slotButtonClicked()));
    }
public slots:
    void slotButtonClicked()
    {
        InputDialog* pInputDialog = new InputDialog;
        if (pInputDialog->exec() == QDialog::Accepted) {
            QMessageBox::information(0,
                                     "Ваша информация: ",
                                     "Имя: " +
                                     pInputDialog->firstName() +
                                     "\nФамилия: " +
                                     pInputDialog->lastName()
                                     );
        }
        delete pInputDialog;
    }
};

#endif
