#include "windowcontrols.h"
#include <QLayout>

MinimizeButton::MinimizeButton(QSize size, QWidget *parent)
{
    this->setFixedSize(size);
}

MaximizeButton::MaximizeButton(QSize size, QWidget *parent)
{
    this->setFixedSize(size);
}

CloseButton::CloseButton(QSize size, QWidget *parent)
{
    this->setFixedSize(size);
}


WindowControls::WindowControls(QWidget *parent)
    : stackable::Widget{parent}
{
    setStackableConfig(stackable::Config
                       {
                           .horizontalPercentage = 100,
                           .verticalPercentage = 0,
                           .horizontalHook = stackable::Hook::Maximum,
                           .verticalHook = stackable::Hook::Minimum
                       });

    m_minimizeBtn = new MinimizeButton(QSize{100,100}, this);
    m_maximizeBtn = new MaximizeButton(QSize{100,100}, this);
    m_closeBtn = new CloseButton(QSize{100,100}, this);

    QHBoxLayout* outer_lay = new QHBoxLayout(this);
    outer_lay->addWidget(m_minimizeBtn);
    outer_lay->addWidget(m_maximizeBtn);
    outer_lay->addWidget(m_closeBtn);
    outer_lay->setContentsMargins(0,0,0,0);
    outer_lay->setSpacing(0);
}

