#ifndef WINDOWCONTROLS_H
#define WINDOWCONTROLS_H

#include "stackable.h"

#include <QWidget>
#include <QPushButton>


class MinimizeButton : public QPushButton
{

public:
    explicit MinimizeButton(QSize size, QWidget* parent = nullptr);
};

class MaximizeButton : public QPushButton
{
public:
    explicit MaximizeButton(QSize size, QWidget* parent = nullptr);
};

class CloseButton : public QPushButton
{
public:
    explicit CloseButton(QSize size, QWidget* parent = nullptr);
};

class WindowControls : public stackable::Widget
{
    Q_OBJECT

    MinimizeButton* m_minimizeBtn;
    MaximizeButton* m_maximizeBtn;
    CloseButton* m_closeBtn;

public:
    explicit WindowControls(QWidget *parent = nullptr);

signals:

};

#endif // WINDOWCONTROLS_H
