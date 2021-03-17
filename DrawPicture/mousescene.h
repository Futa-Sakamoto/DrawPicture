#ifndef MOUSESCENE_H
#define MOUSESCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <Qpen>

class MouseScene : public QGraphicsScene
{
public:
    MouseScene();

private slots:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void penThickEvent(QGraphicsSceneMouseEvent *event);


private:
    bool bPenOn = false;
    int x0;
    int y0;
    QPen oQpen;
};

#endif // MOUSESCENE_H
