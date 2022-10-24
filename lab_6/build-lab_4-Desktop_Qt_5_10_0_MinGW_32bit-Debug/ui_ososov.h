/********************************************************************************
** Form generated from reading UI file 'ososov.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSOSOV_H
#define UI_OSOSOV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Ososov
{
public:
    QTextEdit *textEdit;
    QLabel *label;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *Ososov)
    {
        if (Ososov->objectName().isEmpty())
            Ososov->setObjectName(QStringLiteral("Ososov"));
        Ososov->resize(404, 390);
        textEdit = new QTextEdit(Ososov);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(140, 30, 221, 291));
        label = new QLabel(Ososov);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 90, 101, 131));
        label->setFrameShape(QFrame::Panel);
        buttonBox = new QDialogButtonBox(Ososov);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(90, 350, 221, 25));
        buttonBox->setStandardButtons(QDialogButtonBox::Open|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        retranslateUi(Ososov);

        QMetaObject::connectSlotsByName(Ososov);
    } // setupUi

    void retranslateUi(QWidget *Ososov)
    {
        Ososov->setWindowTitle(QApplication::translate("Ososov", "Ososov", nullptr));
        label->setText(QApplication::translate("Ososov", "Photo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Ososov: public Ui_Ososov {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSOSOV_H
