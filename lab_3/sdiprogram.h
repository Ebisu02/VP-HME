#ifndef SDIPROGRAM_H
#define SDIPROGRAM_H

#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QMessageBox>
#include "docwindow_ososov.h"

class SDIProgram : public QMainWindow
{
    Q_OBJECT
public:
    SDIProgram(QWidget *parent = 0) : QMainWindow(parent)
    {
        QMenu* pmnuFile = new QMenu("&File");
        QMenu* pmnuHelp = new QMenu("&Help");
        QMenu* pmnuColor = new QMenu("&Color");
        DocWindow_Ososov* pdoc = new DocWindow_Ososov;

        pmnuColor->addAction("&Color",
                             pdoc,
                             SLOT(slotColor()),
                             QKeySequence("CTRL+2"));
        pmnuFile->addAction("&Open...",
                            pdoc,
                            SLOT(slotLoad()),
                            QKeySequence("CTRL+0"));
        pmnuFile->addAction("&Save",
                            pdoc,
                            SLOT(slotSave()),
                            QKeySequence("CTRL+S"));
        pmnuFile->addAction("&Save As...",
                            pdoc,
                            SLOT(slotSaveAs()),
                            QKeySequence("CTRL+1"));
        pmnuFile->addAction("&Quit",
                            pdoc,
                            SLOT(quit()),
                            QKeySequence(Qt::Key_F1));
        pmnuHelp->addAction("&About",
                            pdoc,
                            SLOT(slotAbout()),
                            QKeySequence("CTRL+SHIFT+1"));

        menuBar()->addMenu(pmnuFile);
        menuBar()->addMenu(pmnuHelp);
        menuBar()->addMenu(pmnuColor);
        setCentralWidget(pdoc);

        connect(pdoc, SIGNAL(changeWindowTitle(const QString&)),
                SLOT(slotChangeWindowTitle(const QString&)));

        statusBar()->showMessage("Ready", 2000);


    }

signals:

public slots:
    void slotAbout()
    {
        QMessageBox::about(this, "Application", "SDI Example");
    }

    void slotChangeWindowTitle(const QString& str)
    {
        setWindowTitle(str);
    }
};

#endif // SDIPROGRAM_H
