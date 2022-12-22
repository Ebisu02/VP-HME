#include "mainwindow.h"

MainWindow::MainWindow() {
    setRenderHint(QPainter::Antialiasing);
    setCacheMode(QGraphicsView::CacheNone);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    // window gonna be 1000x1000
    circle.setSize(size);
    setWindowTitle("Dish & Fly");
    setFrameStyle(0);
    setSceneRect(0, 0, size, size);
    setFixedSize(size, size);

    mScene.setItemIndexMethod(QGraphicsScene::NoIndex);
    setScene(&mScene);

    init_view();
}

void MainWindow::init_view() {
    circle.setSize(size);
    circle.setGeometry(50, 50);
    circle.setPos(600, 600);

    dish.setImage(":/pic/dish.png");
    dish.setPos(150, 150);

    fly.setImage(":/pic/fly.png");
    fly.setPos(450, 450);

    mScene.addItem(&fly);
    mScene.addItem(&dish);
    mScene.addItem(&circle);
    mScene.addLine(QLineF(QPointF(5,5), QPointF(5, size - 50)), QPen(QColor("red")));
    mScene.addLine(QLineF(QPointF(5,5), QPointF(size - 5, 5)), QPen(QColor("red")));
    mScene.addLine(QLineF(QPointF(size - 5,5), QPointF(size - 5, size - 50)), QPen(QColor("red")));
    mScene.addLine(QLineF(QPointF(size - 5,size - 50), QPointF(5, size - 50)), QPen(QColor("red")));

    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::onTimeout);
    timer->start(100);
}

void MainWindow::onTimeout() {
    if (fly.plus == true) {
        dy = -dy;
        dx = -dx;
    }
    if (fly.pos().x() > 975) {
        dx = -10;
        dy = 10;
    }
    else if (fly.pos().y() > 975) {
        dx = -10;
        dy = -10;
    }
    else if (fly.pos().x() < 25) {
        dx = 10;
        dy = -10;
    }
    else if (fly.pos().y() < 25) {
        dx = 10;
        dy = 10;
    }

    QPointF oldPos = fly.pos();
    QPointF newPos = QPointF(fly.pos().x() + dx, fly.pos().y() + dy);
    fly.setPos(newPos);
}
