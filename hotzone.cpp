#include "hotzone.h"
#include <QDebug>

HotZone::HotZone(QWidget *parent)
    : stackable::Widget(parent)
{
    setObjectName("HotZone");
    setStackableConfig(stackable::Config
                        {
                           .horizontalPercentage = 0,
                           .verticalPercentage = 0,
                        });

    if (!m_pixmap.load("F:/Media/Wallpapers/Wallpapers/d8rhoj7esbg31.png")) {
        qDebug() << "loading did not work";
    }

    m_lbl = new QLabel(this);
    m_lbl->setPixmap(m_pixmap);
}
