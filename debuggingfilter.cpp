#include "debuggingfilter.h"

#include <QDebug>
#include <QEvent>
#include <QResizeEvent>
#include <QMoveEvent>

DebuggingFilter::DebuggingFilter(QObject* parent) :
    QObject(parent)
{
}

bool DebuggingFilter::eventFilter(QObject *watched, QEvent *event)
{
    if (watched && event) {
        qDebug() << watched->objectName() << event->type();
    }

    //write any debugging code you want

//    if (watched->objectName() == "Label" && event->type() == QEvent::Move) {
//        QMoveEvent* moveEvent = static_cast<QMoveEvent*>(event);
//        qDebug() << watched->objectName() << "old pos:" << moveEvent->oldPos() << "new pos:" << moveEvent->pos();
//    }

//    if (event->type() == QEvent::Resize) {
//        QResizeEvent* resizeEvent = static_cast<QResizeEvent*>(event);
//        qDebug() << "old:" << resizeEvent->oldSize();
//        qDebug() << "new:" << resizeEvent->size();
//        return true;
//    }

    return QObject::eventFilter(watched, event);
}
