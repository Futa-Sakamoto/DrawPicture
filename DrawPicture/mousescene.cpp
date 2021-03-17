#include "mousescene.h"

MouseScene::MouseScene()
{
    setSceneRect(-200,-200,400,400);
    oQpen = QPen(Qt::red, 3);   // ペンの色と太さをハードコーディング
}

void MouseScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
        bPenOn = false;
}

void MouseScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    bPenOn = true;
    x0 = event->scenePos().x();
    y0 = event->scenePos().y();
}

void MouseScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (bPenOn) {
        const int x1 = event->scenePos().x();
        const int y1 = event->scenePos().y();
        addLine(x0,y0,x1,y1,oQpen);
        x0 = x1;
        y0 = y1;
    }
}

void MouseScene::penThickEvent(QGraphicsSceneMouseEvent *event)
{


}
