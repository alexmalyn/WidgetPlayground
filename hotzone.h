#ifndef HOTZONE_H
#define HOTZONE_H

#include "mybeautifulwidget.h"

class HotZone : public StackableWidget
{
    Q_OBJECT

    QLabel* m_lbl;
    QPixmap m_pixmap;

public:
    explicit HotZone(QWidget *parent = nullptr);

signals:

};

#endif // HOTZONE_H
