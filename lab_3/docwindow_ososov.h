#ifndef DOCWINDOW_OSOSOV_H
#define DOCWINDOW_OSOSOV_H

#include <QTextEdit>

class DocWindow_Ososov: public QTextEdit
{   
    Q_OBJECT

private:
    QString m_strFileName;

public:
    DocWindow_Ososov(QWidget* pwgt = 0);

signals:
    void changeWindowTitle(const QString&);

public slots:
    void slotColor();
    void slotLoad();
    void slotSave();
    void slotSaveAs();
    void quit();
    void slotAbout();
};

#endif // DOCWINDOW_OSOSOV_H
