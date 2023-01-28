#include "mainwindow.h"
#include <QDebug>
#include <QLayout>
#include <QResizeEvent>
#include <QApplication>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //config
    //setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    setMinimumSize(QSize{640,480});
    installEventFilter(this);
    layout()->setContentsMargins(0,0,0,0);




    m_hotZone = new HotArea(this);
    setCentralWidget(m_hotZone);

}

MainWindow::~MainWindow()
{
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
//    if (event) {
//        qDebug() << "mainwindow log event:" << event->type();
//    }

    if (event->type() == QEvent::Resize) {
        QResizeEvent* resizeEvent = static_cast<QResizeEvent*>(event);
    }

    return QMainWindow::eventFilter(watched, event);
}

