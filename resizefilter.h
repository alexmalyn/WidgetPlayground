#ifndef RESIZEFILTER_H
#define RESIZEFILTER_H

#include <QWidget>

//this class should be installed on all widgets meant to be stacked on top of each other
class ResizeFilter : public QObject
{
    // 0%,0% represents top left positioning
    int m_percentageHorizontal;
    int m_percentageVertical;
    QWidget* m_obj;

public:
    explicit ResizeFilter(int horizontalPercentage, int verticalPercentage, QObject* parent = nullptr);

    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // RESIZEFILTER_H
