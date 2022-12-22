#include "sprite.h"
#include "mainwindow.h"

#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include <QDebug>
#include <QApplication>
#include <QGraphicsScene>
#include <QBrush>

QRectF Sprite::boundingRect() const {
    return QRectF(0, 0, mWidth, mHeight);
}

void Sprite::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {   plus=false;
    if(mHover) {
        painter->setPen(QColor("red"));
    }
    QList<QGraphicsItem*> l = scene()->items();
    foreach(QGraphicsItem *item, l) {
        if (item == this) {
            continue;
        }
        if(collidesWithItem(item)) {
            plus = true;
            item->update();
        }
    }
    painter->drawPixmap(0, 0, mWidth, mHeight, mPixMap);
}

void Sprite::setGeometry(int aWidth, int aHeigth) {
  mWidth = aWidth;
  mHeight = aHeigth;
}

void Sprite::setImage(QString aPath) {
    mPixMap.load(aPath);
    mPixMap = mPixMap.scaled(50, 50, Qt::KeepAspectRatio);
    mWidth = mPixMap.width();
    mHeight = mPixMap.height();
}

void Sprite::hoverEnterEvent(QGraphicsSceneHoverEvent*) {
    mHover=true;
    QGraphicsItem::update();
}

void Sprite::hoverLeaveEvent(QGraphicsSceneHoverEvent*) {
    mHover = false;
    QGraphicsItem::update();
}

void Sprite::mousePressEvent(QGraphicsSceneMouseEvent* aEvent) {
    mStartMovePos = aEvent->pos();
}

void Sprite::mouseMoveEvent(QGraphicsSceneMouseEvent* aEvent) {
    int distance = (aEvent->pos() - mStartMovePos).manhattanLength();
    if(distance>QApplication::startDragDistance()) {
        QPointF np = mapToScene(aEvent->pos()- mStartMovePos);
        if((np.x()<0)||(np.y()<0)) {
            return;
        }
        if((np.x()>800)||(np.y()>800)) {
            return;
        }
        this->setPos(np);
    }
}

void Sprite::mouseReleaseEvent(QGraphicsSceneMouseEvent*) {
    return;
}


