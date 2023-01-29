#ifndef STACKABLEWIDGET_H
#define STACKABLEWIDGET_H

#include <QWidget>
#include <QList>

namespace stackable {

enum Hook {
    Minimum,
    Center,
    Maximum
};

struct Config {
    int horizontalPercentage = 0;
    int verticalPercentage = 0;
    Hook horizontalHook = Minimum;
    Hook verticalHook = Minimum;
    bool scaleHorizontally = false;
    bool scaleVertically = false;
    bool preserveAspectRatio = true;

};

class Widget : public QWidget
{
    Q_OBJECT

    Config m_cfg;

public:
    explicit Widget(QWidget *parent = nullptr);

    void setStackableConfig(Config cfg) {m_cfg = cfg;}

    Config& cfg() { return m_cfg; }

signals:

};

typedef QList<Widget*> WidgetList;

class Area : public QWidget
{
    Q_OBJECT

protected:

    WidgetList m_stackableList;

public:

    explicit Area(QWidget* parent = nullptr);

public slots:

    virtual void resizeSlot(QSize oldSize, QSize newSize);
};

} // stackable

#endif // MYBEAUTIFULWIDGET_H
