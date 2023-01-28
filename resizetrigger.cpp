#include "resizetrigger.h"

#include <QLayout>

ResizeTrigger::ResizeTrigger(ResizeType type, QWidget *parent)
    : QWidget{parent}
{
    switch (type) {
        case ResizeType::Vertical:
            m_cursor.setShape(Qt::SizeVerCursor);
            break;
        case ResizeType::Horizontal:
            m_cursor.setShape(Qt::SizeHorCursor);
            break;
        case ResizeType::FDiagonal:
            m_cursor.setShape(Qt::SizeFDiagCursor);
            break;
        case ResizeType::BDiagonal:
            m_cursor.setShape(Qt::SizeBDiagCursor);
            break;
    }
    setCursor(m_cursor);
}

Resizer::Resizer(QWidget* parent) :
    QWidget{parent}
{
    m_triggerMap.insert("TL", new ResizeTrigger(ResizeTrigger::ResizeType::FDiagonal, this));
    m_triggerMap.insert("T", new ResizeTrigger(ResizeTrigger::ResizeType::Vertical, this));
    m_triggerMap.insert("TR", new ResizeTrigger(ResizeTrigger::ResizeType::BDiagonal, this));
    m_triggerMap.insert("R", new ResizeTrigger(ResizeTrigger::ResizeType::Horizontal, this));
    m_triggerMap.insert("BR", new ResizeTrigger(ResizeTrigger::ResizeType::FDiagonal, this));
    m_triggerMap.insert("B", new ResizeTrigger(ResizeTrigger::ResizeType::Vertical, this));
    m_triggerMap.insert("BL", new ResizeTrigger(ResizeTrigger::ResizeType::BDiagonal, this));
    m_triggerMap.insert("L", new ResizeTrigger(ResizeTrigger::ResizeType::Horizontal, this));

    QGridLayout* layout = new QGridLayout(this);
    layout->addWidget(m_triggerMap["TL"], 0, 0);
    layout->addWidget(m_triggerMap["T"], 0, 1);
    layout->addWidget(m_triggerMap["TR"], 0, 2);
    layout->addWidget(m_triggerMap["L"], 1, 0);
    layout->addWidget(m_triggerMap["R"], 1, 2);
    layout->addWidget(m_triggerMap["BL"], 2, 0);
    layout->addWidget(m_triggerMap["B"], 2, 1);
    layout->addWidget(m_triggerMap["BR"], 2, 2);
}
