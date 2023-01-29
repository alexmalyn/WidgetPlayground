#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "hotarea.h"
#include <QEvent>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    HotArea* m_hotZone;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    bool eventFilter(QObject* watched, QEvent* event) override;

signals:

    void resizeSignal(QSize oldSize, QSize size);
};
#endif // MAINWINDOW_H
