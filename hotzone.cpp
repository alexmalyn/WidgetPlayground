#include "hotzone.h"

HotZone::HotZone(QWidget *parent)
    : StackableWidget(parent)
{
    setStackableConfig(StackableConfig{0,0,true});

    if (!m_pixmap.load("F:/Media/Wallpapers/Wallpapers/d8rhoj7esbg31.png")) {
        qDebug() << "loading did not work";
    }

    m_lbl = new QLabel(this);
    m_lbl->setPixmap(m_pixmap);
}
