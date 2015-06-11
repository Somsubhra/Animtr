#ifndef DOCKER_H
#define DOCKER_H

// Qt includes
#include <QDockWidget>

// Forward declarations
class MainWindow;

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
    explicit Docker(MainWindow *parent = 0);

    /**
     * Returns the default docker position
     * To be reimplemented
     */
    virtual Qt::DockWidgetArea defaultDockerArea() { return Qt::TopDockWidgetArea; }

    /**
     * Returns the main application window
     */
    MainWindow* getAppWindow();

signals:

public slots:

private:
    MainWindow *appWindow;
};

#endif // DOCKER_H
