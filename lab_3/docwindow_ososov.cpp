#include "docwindow_ososov.h"
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QColor>
#include <QColorDialog>

DocWindow_Ososov::DocWindow_Ososov(QWidget* pwgt): QTextEdit(pwgt)
{

}

void DocWindow_Ososov::slotLoad()
{
    QString str = QFileDialog::getOpenFileName(0, "Открыть файл", "", "*.txt");
    if (str.isEmpty()) {
        return;
    }
    QFile file(str);
    if (file.open(QIODevice::ReadOnly)) {
        QTextStream stream(&file);
        setPlainText(stream.readAll());
        file.close();
    }
    m_strFileName = str;
    emit changeWindowTitle(m_strFileName);
}

void DocWindow_Ososov::slotSave() {
    if (m_strFileName.isEmpty()) {
        slotSaveAs();
        return;
    }
    QFile file(m_strFileName);
    if (file.open(QIODevice::WriteOnly)) {
        QTextStream(&file) << toPlainText();
        file.close();
        emit changeWindowTitle(m_strFileName);
    }
}

void DocWindow_Ososov::slotSaveAs() {
    QString str = QFileDialog::getSaveFileName(0, m_strFileName, "", "*.txt");
    if (!str.isEmpty()) {
        m_strFileName = str;
        slotSave();
    }
}

void DocWindow_Ososov::slotColor() {
    QColor color = QColorDialog::getColor(Qt::white, this);
    this->setTextColor(color);
    return;
}

void DocWindow_Ososov::slotAbout() {
    QMessageBox::about(0, "Авторы", "Ососов Сергей");
    return;
}

void DocWindow_Ososov::quit() {
    exit(1);
}
