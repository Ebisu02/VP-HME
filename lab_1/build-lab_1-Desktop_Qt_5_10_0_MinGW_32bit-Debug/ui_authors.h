/********************************************************************************
** Form generated from reading UI file 'authors.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTHORS_H
#define UI_AUTHORS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Authors
{
public:
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *Authors)
    {
        if (Authors->objectName().isEmpty())
            Authors->setObjectName(QStringLiteral("Authors"));
        Authors->resize(400, 300);
        label = new QLabel(Authors);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(-10, -90, 491, 421));
        label->setPixmap(QPixmap(QString::fromUtf8("../../Users/hello/OneDrive/\320\240\320\260\320\261\320\276\321\207\320\270\320\271 \321\201\321\202\320\276\320\273/\320\276\320\261\320\276\320\270/627080.png")));
        textEdit = new QTextEdit(Authors);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(113, 176, 81, 61));
        textEdit->setReadOnly(true);

        retranslateUi(Authors);

        QMetaObject::connectSlotsByName(Authors);
    } // setupUi

    void retranslateUi(QDialog *Authors)
    {
        Authors->setWindowTitle(QApplication::translate("Authors", "\320\230\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\321\217 \320\276\320\261 \320\260\320\262\321\202\320\276\321\200\320\260\321\205", nullptr));
        label->setText(QString());
        textEdit->setHtml(QApplication::translate("Authors", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\236\321\201\320\276\321\201\320\276\320\262 \320\241\320\265\321\200\320\263\320\265\320\271</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\230\320\237-015</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Authors: public Ui_Authors {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTHORS_H
