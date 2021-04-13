#ifndef MOUSESCENE_H
#define MOUSESCENE_H

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QGraphicsSceneMoveEvent>
#include <QGraphicsLineItem>
#include <QAbstractItemView>
#include <QPen>


class MouseScene : public QGraphicsScene
{
public:
   MouseScene();
   void SetPen(const QPen& oQpen);
   QPen GetPen();
   void SetSelectOn(const bool& bSelectOn);
   bool GetSelectOn();

private slots:
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;


private:
    void isSelectedLine(QGraphicsSceneMouseEvent *event);

    bool bPenOn    = false;
    bool m_bSelectOn = false;
    int x0;
    int y0;
    QPen m_oQpen;
    QGraphicsLineItem* m_oQGraphicsLineItem;
    QGraphicsItemGroup* m_QGraphicsItemGroup;
    //std::vector<std::vector<QGraphicsLineItem*>> m_oLines;
    //std::vector<QGraphicsLineItem*> m_oLinesTmp;
    //QList<QGraphicsItem*> m_oQList;
};

#endif // MOUSESCENE_H
