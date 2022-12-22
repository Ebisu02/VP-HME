#ifndef SPRITE_H
#define SPRITE_H
#include <QPointF>
#include <QPixmap>
#include <QGraphicsItem>
#include <QGraphicsView>

class Sprite : public QGraphicsItem
{
    public:
        Sprite() {}
        bool plus;
        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
        void hoverEnterEvent(QGraphicsSceneHoverEvent*) override;

        void MoveMikky();
        void mousePressEvent(QGraphicsSceneMouseEvent*) override;
        void mouseMoveEvent(QGraphicsSceneMouseEvent*) override;
        void mouseReleaseEvent(QGraphicsSceneMouseEvent*) override;

        void hoverLeaveEvent(QGraphicsSceneHoverEvent*) override;
        void setGeometry(int, int);
        void setImage(QString);

    private:
        int mWidth{0};
        int mHeight{0};

        bool mHover{false};
        QPointF mStartMovePos;
        QPixmap mPixMap;
};

#endif // SPRITE_H
