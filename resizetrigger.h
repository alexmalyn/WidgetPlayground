#ifndef RESIZETRIGGER_H
#define RESIZETRIGGER_H

#include <QWidget>
#include <QMap>

class ResizeTrigger : public QWidget
{
    Q_OBJECT

    QCursor m_cursor;

public:
    enum ResizeType
    {
        Vertical,
        Horizontal,
        BDiagonal,
        FDiagonal
    };

    explicit ResizeTrigger(ResizeType type, QWidget *parent = nullptr);



signals:

};

typedef QMap<QString, ResizeTrigger*> ResizeTriggerMap;

class Resizer : public QWidget
{
    Q_OBJECT

protected:

    ResizeTriggerMap m_triggerMap;

public:
    explicit Resizer(QWidget* parent = nullptr);
};

#endif // RESIZETRIGGER_H
