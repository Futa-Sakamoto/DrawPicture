#include "mousescene.h"

MouseScene::MouseScene()
{
    setSceneRect(-200,-200,400,400);
    m_oQpen = QPen(Qt::red, 10);   // ペンの色と太さをハードコーディング
    m_oQpen.setStyle(Qt::SolidLine);
    m_oQpen.setCapStyle(Qt::RoundCap);

    m_QGraphicsItemGroup = new QGraphicsItemGroup;

#if 0
    QGraphicsEllipseItem *ellipse = addEllipse(150, 150, 200, 100);
    ellipse->setBrush(QBrush(QColor("pink")));
    ellipse->setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
#endif
}

void MouseScene::SetPen(const QPen& oQpen)
{
    m_oQpen = oQpen;
}

QPen MouseScene::GetPen()
{
    return m_oQpen;
}

void MouseScene::SetSelectOn(const bool &bSelectOn)
{
    m_bSelectOn = bSelectOn;
}

bool MouseScene::GetSelectOn()
{
    return m_bSelectOn;
}

void MouseScene::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    bPenOn = false;
    //m_oLines.push_back(m_oLinesTmp);
    //m_oLinesTmp.shrink_to_fit();
}

void MouseScene::mousePressEvent(QGraphicsSceneMouseEvent *event) {
    if (m_bSelectOn == false) {
        bPenOn = true;
    }
    x0 = event->scenePos().x();
    y0 = event->scenePos().y();
}
#if 0
void MouseScene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    QPainterPath oQPainterPath;
    if (m_bSelectOn == false) {
        bPenOn = true;
        x0 = event->scenePos().x();
        y0 = event->scenePos().y();
    } else {
        x0 = event->scenePos().x();
        y0 = event->scenePos().y();
        QPointF oQPointF(x0, y0);

        auto oItLines = m_oLines.begin();
        for (; oItLines != m_oLines.end(); ++oItLines) {
            auto oItLinesVec = (*oItLines).begin();
            for (; oItLinesVec != (*oItLines).end(); ++oItLinesVec) {
                if ((*oItLinesVec)->contains(oQPointF)) {
                    (*oItLinesVec)->ItemIsSelectable;
                    setSelectionArea(oQPainterPath);
                }
            }
        }
    }

}
#endif
void MouseScene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    if (bPenOn) {
        const int x1 = event->scenePos().x();
        const int y1 = event->scenePos().y();
        m_oQGraphicsLineItem = addLine(x0,y0,x1,y1,m_oQpen);
        m_oQGraphicsLineItem -> setFlags(QGraphicsItem::ItemIsMovable | QGraphicsItem::ItemIsSelectable);
        m_oQGraphicsLineItem -> setAcceptDrops(true);
        //m_oLinesTmp.push_back(m_oQGraphicsLineItem);
        x0 = x1;
        y0 = y1;
        //m_QGraphicsItemGroup->addToGroup(m_oQGraphicsLineItem);
        //m_QGraphicsItemGroup->addToGroup(m_oQGraphicsLineItem);
    }
    if (m_bSelectOn == true) {
        event->scenePos();
    }
}
