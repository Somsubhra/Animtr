#ifndef DOCKERMANAGER_H
#define DOCKERMANAGER_H

// Other includes
#include "../views/dockers/timeline/timeline.h"
#include "../views/dockers/onionskin/onionskin.h"

// Qt includes
#include <QObject>
#include <QList>
#include <QMainWindow>

/**
 * The Docker Manager class
 */
class DockerManager : public QObject
{
    Q_OBJECT
public:

    /**
     * Constructor for the docker manager class
     */
    explicit DockerManager(QMainWindow *parent = 0);

    /**
     * Destructor for the docker manager class
     */
    ~DockerManager();

    /**
     * Render all the dockers
     */
    void renderDockers();

private:
    /**
     * The timeline docker
     */
    Timeline* timelineDocker;

    /**
     * The Onion skin docker
     */
    OnionSkin* onionSkinDocker;

    /**
     * List of all dockers
     */
    QList<Docker*>* dockers;

    /**
     * The Main Window of the application
     */
    QMainWindow* mainWindow;

signals:

public slots:

};

#endif // DOCKERMANAGER_H
