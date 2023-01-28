#ifndef HOTAREA_H
#define HOTAREA_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>

#include "hotzone.h"
#include "windowcontrols.h"
#include "resizetrigger.h"
#include "mybeautifulwidget.h"

//represents the container of all widgets including the main render + UI
// everything must be a stackable widget as layouts are not used.
class HotArea : public StackableArea
{
    Q_OBJECT

    WindowControls* m_windowCtls;
    Resizer* m_resizer;
    HotZone* m_hotZone;


public:
    explicit HotArea(QWidget *parent = nullptr);

signals:

public slots:

    void resizeSlot(QSize oldSize, QSize newSize) override;

};

#endif // HOTAREA_H
