#ifndef DOCKER_H
#define DOCKER_H

// Qt includes
#include <QDockWidget>

/**
 * A Docker class inherited by all the dockers
 */
class Docker : public QDockWidget
{
    Q_OBJECT
public:
    /**
     * Constructor for the docker class
     */
    explicit Docker(QWidget *parent = 0);

    /**
     * Returns the default docker position
     * To be reimplemented
     */
    virtual Qt::DockWidgetArea defaultDockerArea() { return Qt::TopDockWidgetArea; }

signals:

public slots:

};

#endif // DOCKER_H
