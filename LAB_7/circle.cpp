#include "circle.h"

#include <mainwindow.h>
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QApplication>
#include <QGraphicsScene>
#include <QBrush>
#include <QPointF>

MCircle::MCircle() {
    setAcceptHoverEvents(true);
    setAcceptedMouseButtons(Qt::LeftButton);
}

QRectF MCircle::boundingRect() const {
    return QRectF(0, 0, mWidth, mHeight);
}

void MCircle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    //if (mHover) {
        //painter->setPen(QColor("red"));
    //}
    painter->drawEllipse(QPointF(15, 15), 15, 15);
}

void MCircle::setGeometry(int width, int height) {
    mWidth = width;
    mHeight = height;
}

void MCircle::setImage(QString path) {
    mPixmap.load(path);
    mWidth = mPixmap.width();
    mHeight = mPixmap.height();
}

void MCircle::setSize(int size) {
    mSize = size;
}

void MCircle::set_radius(int radius) {
    this->radius = radius;
}

void MCircle::set_x(int x) {
    this->x = x;
}

void MCircle::set_y(int y) {
    this->y = y;
}

void MCircle::hoverEnterEvent(QGraphicsSceneHoverEvent *) {
    mHover = true;
    QGraphicsItem::update();
}

void MCircle::hoverLeaveEvent(QGraphicsSceneHoverEvent *) {
    mHover = false;
    QGraphicsItem::update();
}

void MCircle::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    mStartMovePos = event->pos();
}

void MCircle::mouseMoveEvent(QGraphicsSceneMouseEvent *event) {
    int distance = (event->pos() - mStartMovePos).manhattanLength();
    if (distance > QApplication::startDragDistance()) {
        QPointF nPoint = mapToScene(event->pos() - mStartMovePos);
        if (nPoint.x() < 0 || nPoint.y() < 0) {
            return;
        }
        if (nPoint.x() > mSize || nPoint.y() > mSize) {
            return;
        }
        this->setPos(nPoint);
    }
}

void MCircle::mouseReleaseEvent(QGraphicsSceneMouseEvent *) {
    return;
}

