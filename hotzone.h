#ifndef HOTZONE_H
#define HOTZONE_H

#include "stackable.h"

#include <QPixmap>
#include <QLabel>

class HotZone : public stackable::Widget
{
    Q_OBJECT

    QLabel* m_lbl;
    QPixmap m_pixmap;

public:
    explicit HotZone(QWidget *parent = nullptr);

signals:

};

#endif // HOTZONE_H
