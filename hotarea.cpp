#include "hotarea.h"
#include "resizefilter.h"
#include <QColor>
#include <QDebug>

HotArea::HotArea(QWidget *parent) :
    StackableArea{parent}
{
    m_hotZone = new HotZone(this);

    m_windowCtls = new WindowControls(this);

    //m_resizer = new Resizer(this);

    m_stack.push(m_hotZone);
    m_stack.push(m_windowCtls);
}

void HotArea::resizeSlot(QSize oldSize, QSize newSize)
{

}
