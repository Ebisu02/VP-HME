#ifndef CIRCLE_H
#define CIRCLE_H
#include <QPointF>
#include <QPixmap>
#include <QGraphicsItem>

class MCircle : public QGraphicsItem
{
    public:
        MCircle();

        QRectF boundingRect() const override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

        void hoverEnterEvent(QGraphicsSceneHoverEvent*) override;
        void hoverLeaveEvent(QGraphicsSceneHoverEvent*) override;

        void mousePressEvent(QGraphicsSceneMouseEvent*) override;
        void mouseMoveEvent(QGraphicsSceneMouseEvent*) override;
        void mouseReleaseEvent(QGraphicsSceneMouseEvent*) override;

        void setGeometry(int, int);
        void setImage(QString);
        void setSize(int size);
        void set_x(int x);
        void set_y(int y);
        void set_radius(int radius);

    private:
        int radius;
        int x;
        int y;
        int mSize;
        int mScreenWidth;
        int mScreenHeight;
        int mWidth {0};
        int mHeight {0};
        bool mHover {false};

        QPointF mStartMovePos;
        QPixmap mPixmap;
};

#endif // DISH_H
