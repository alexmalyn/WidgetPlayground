#ifndef HOTAREA_H
#define HOTAREA_H

#include <QWidget>
#include <QPixmap>
#include <QLabel>

#include "hotzone.h"
#include "windowcontrols.h"
#include "resizetrigger.h"
#include "stackable.h"

//represents the container of all widgets including the main render + UI
// everything must be a stackable widget as layouts are not used.
class HotArea : public stackable::Area
{
    Q_OBJECT

    WindowControls* m_windowCtls;
    Resizer* m_resizer;
    HotZone* m_hotZone;


public:
    explicit HotArea(QWidget *parent = nullptr);

signals:


};

//debugging class for now
class Label : public stackable::Widget
{
    Q_OBJECT

    QLabel* lbl;

public:

    explicit Label(QString text, QWidget* parent = nullptr) : stackable::Widget{parent} {
        setObjectName("Label");
        setStackableConfig(stackable::Config{100,0,false,stackable::Hook::Maximum, stackable::Hook::Minimum});

        lbl = new QLabel(text, this);
        lbl->resize(300,300);
        lbl->setStyleSheet("QLabel { background-color : red; color : blue; }");
    }
};

#endif // HOTAREA_H
