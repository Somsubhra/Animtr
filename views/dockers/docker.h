#ifndef DOCKER_H
#define DOCKER_H

// Qt includes
#include <QDockWidget>

class Docker : public QDockWidget
{
    Q_OBJECT
public:
    explicit Docker(QWidget *parent = 0);

    virtual Qt::DockWidgetArea defaultDockerArea() { return Qt::TopDockWidgetArea; }

signals:

public slots:

};

#endif // DOCKER_H
