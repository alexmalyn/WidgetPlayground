#include "hotarea.h"
#include "debuggingfilter.h"
#include <QColor>
#include <QDebug>

HotArea::HotArea(QWidget *parent) :
    stackable::Area{parent}
{
    setObjectName("HotArea");

    m_hotZone = new HotZone(this);

    m_windowCtls = new WindowControls(this);

    //m_resizer = new Resizer(this);

    m_stackableList.append(m_hotZone);
    m_stackableList.append(m_windowCtls);

    DebuggingFilter* filterObj = new DebuggingFilter(this);

    installEventFilter(filterObj);

//    Label* lbl = new Label("HELLO", this);
//    lbl->installEventFilter(filterObj);

//    m_stackableList.append(lbl);
}

