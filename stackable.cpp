#include "stackable.h"

#include <QDebug>

namespace stackable {

Widget::Widget(QWidget *parent)
    : QWidget{parent}
{

}

Area::Area(QWidget *parent)
    : QWidget{parent}
{

}

void Area::resizeSlot(QSize oldSize, QSize newSize)
{
    for (WidgetList::iterator i = m_stackableList.begin(); i != m_stackableList.end(); ++i) {
        Widget& wgt = **i;

        QSize hook_offset;
        switch (wgt.cfg().horizontalHook) {
            case Minimum:
                hook_offset.setWidth(0);
                break;
            case Center:
                hook_offset.setWidth(wgt.width() / 2);
                break;
            case Maximum:
                hook_offset.setWidth(wgt.width());
                break;
        }
        switch (wgt.cfg().verticalHook) {
            case Minimum:
                hook_offset.setHeight(0);
                break;
            case Center:
                hook_offset.setHeight(wgt.height() / 2);
                break;
            case Maximum:
                hook_offset.setHeight(wgt.height());
                break;
        }

        QPoint newPos{
            wgt.cfg().horizontalPercentage * newSize.width() / 100 - hook_offset.width(),
            wgt.cfg().verticalPercentage * newSize.height() / 100 - hook_offset.height()
        };
        wgt.move(newPos);

        if (wgt.cfg().scaleWithResize) {

        }

    }
}

}
