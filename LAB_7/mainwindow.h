#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include <circle.h>
#include <sprite.h>

class MainWindow : public QGraphicsView
{
    public:
        MainWindow();
        int dx = 10;
        int dy = 10;
        int size = 1000;

    private:
        void init_view();

        QGraphicsScene* scene;
        QGraphicsView* view;
        QGraphicsEllipseItem* point;

        QTimer* timer;
        MCircle circle;
        Sprite dish;
        Sprite fly;
        QGraphicsScene mScene;

    protected slots:
        void onTimeout();
};

#endif // MAINWINDOW_H
