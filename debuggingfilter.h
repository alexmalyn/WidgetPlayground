#ifndef DEBUGGINGFILTER_H
#define DEBUGGINGFILTER_H

#include <QObject>

class DebuggingFilter : public QObject
{

public:
    explicit DebuggingFilter(QObject* parent = nullptr);

    virtual bool eventFilter(QObject *watched, QEvent *event) override;
};

#endif // DEBUGGINGFILTER_H
