#include "mybeautifulwidget.h"

StackableWidget::StackableWidget(QWidget *parent)
    : QWidget{parent}
{

}

void StackableArea::resizeSlot(QSize oldSize, QSize newSize)
{
    for (QListIterator i = m_stack.begin(); i != m_stack.end(); ++i) {

    }
}
