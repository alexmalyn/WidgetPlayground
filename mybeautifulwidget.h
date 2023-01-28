#ifndef STACKABLEWIDGET_H
#define STACKABLEWIDGET_H

#include <QWidget>
#include <QStack>

struct StackableConfig {
    int horizontalPercentage = 0;
    int verticalPercentage = 0;
    bool scaleWithResize = false;
};

class StackableWidget : public QWidget
{
    Q_OBJECT

    StackableConfig m_cfg;

public:
    explicit StackableWidget(QWidget *parent = nullptr);

    void setStackableConfig(StackableConfig cfg) {m_cfg = cfg;}

signals:

};

typedef QStack<StackableWidget*> StackableStack; //;)

class StackableArea : public QWidget
{
    Q_OBJECT

protected:

    StackableStack m_stack;

public:

    explicit StackableArea(QWidget* parent = nullptr);

public slots:

    virtual void resizeSlot(QSize oldSize, QSize newSize);
};

#endif // MYBEAUTIFULWIDGET_H
