/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *FIOLabel;
    QLineEdit *FIOLineEdit;
    QLineEdit *VacancyLineEdit;
    QDateEdit *BirthDayDateEdit;
    QLabel *VacancyLabel;
    QLabel *BirthDayLabel;
    QLabel *PhotoLabel;
    QPushButton *DownloadPushButton;
    QRadioButton *ManRadioButton;
    QRadioButton *WomanRadioButton;
    QPushButton *OKPushButton;
    QLineEdit *PathToImageLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 478);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        FIOLabel = new QLabel(centralWidget);
        FIOLabel->setObjectName(QStringLiteral("FIOLabel"));
        FIOLabel->setGeometry(QRect(240, 40, 31, 16));
        FIOLineEdit = new QLineEdit(centralWidget);
        FIOLineEdit->setObjectName(QStringLiteral("FIOLineEdit"));
        FIOLineEdit->setGeometry(QRect(270, 40, 108, 24));
        VacancyLineEdit = new QLineEdit(centralWidget);
        VacancyLineEdit->setObjectName(QStringLiteral("VacancyLineEdit"));
        VacancyLineEdit->setGeometry(QRect(270, 80, 108, 24));
        BirthDayDateEdit = new QDateEdit(centralWidget);
        BirthDayDateEdit->setObjectName(QStringLiteral("BirthDayDateEdit"));
        BirthDayDateEdit->setGeometry(QRect(270, 120, 96, 25));
        VacancyLabel = new QLabel(centralWidget);
        VacancyLabel->setObjectName(QStringLiteral("VacancyLabel"));
        VacancyLabel->setGeometry(QRect(200, 80, 71, 20));
        BirthDayLabel = new QLabel(centralWidget);
        BirthDayLabel->setObjectName(QStringLiteral("BirthDayLabel"));
        BirthDayLabel->setGeometry(QRect(170, 120, 101, 20));
        PhotoLabel = new QLabel(centralWidget);
        PhotoLabel->setObjectName(QStringLiteral("PhotoLabel"));
        PhotoLabel->setGeometry(QRect(10, 15, 131, 141));
        PhotoLabel->setFrameShape(QFrame::Panel);
        DownloadPushButton = new QPushButton(centralWidget);
        DownloadPushButton->setObjectName(QStringLiteral("DownloadPushButton"));
        DownloadPushButton->setGeometry(QRect(30, 170, 80, 25));
        ManRadioButton = new QRadioButton(centralWidget);
        ManRadioButton->setObjectName(QStringLiteral("ManRadioButton"));
        ManRadioButton->setGeometry(QRect(170, 200, 41, 22));
        WomanRadioButton = new QRadioButton(centralWidget);
        WomanRadioButton->setObjectName(QStringLiteral("WomanRadioButton"));
        WomanRadioButton->setGeometry(QRect(220, 200, 41, 22));
        OKPushButton = new QPushButton(centralWidget);
        OKPushButton->setObjectName(QStringLiteral("OKPushButton"));
        OKPushButton->setGeometry(QRect(150, 360, 80, 25));
        PathToImageLineEdit = new QLineEdit(centralWidget);
        PathToImageLineEdit->setObjectName(QStringLiteral("PathToImageLineEdit"));
        PathToImageLineEdit->setGeometry(QRect(20, 200, 113, 24));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Ososov", nullptr));
        FIOLabel->setText(QApplication::translate("MainWindow", "\320\244\320\230\320\236", nullptr));
        VacancyLabel->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        BirthDayLabel->setText(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\240\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        PhotoLabel->setText(QApplication::translate("MainWindow", "\320\244\320\276\321\202\320\276", nullptr));
        DownloadPushButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        ManRadioButton->setText(QApplication::translate("MainWindow", "\320\234", nullptr));
        WomanRadioButton->setText(QApplication::translate("MainWindow", "\320\226", nullptr));
        OKPushButton->setText(QApplication::translate("MainWindow", "\320\223\320\276\321\202\320\276\320\262\320\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
