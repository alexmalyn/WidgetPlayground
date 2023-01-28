#include "resizefilter.h"

#include <QDebug>
#include <QEvent>
#include <QResizeEvent>

ResizeFilter::ResizeFilter(int horizontalPercentage, int verticalPercentage, QObject* parent) :
    m_percentageHorizontal(horizontalPercentage),
    m_percentageVertical(verticalPercentage),
    QObject(parent)
{
    m_obj = dynamic_cast<QWidget*>(parent);
}

bool ResizeFilter::eventFilter(QObject *watched, QEvent *event)
{
//    if (event) {
//        qDebug() << "resizefilter log event:" << event->type();
//    }

//    if (event->type() == QEvent::Resize) {
//        QResizeEvent* resizeEvent = static_cast<QResizeEvent*>(event);
//        qDebug() << "old:" << resizeEvent->oldSize();
//        qDebug() << "new:" << resizeEvent->size();
//        return true;
//    }

    return QObject::eventFilter(watched, event);
}
