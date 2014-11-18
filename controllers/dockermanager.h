#ifndef DOCKERMANAGER_H
#define DOCKERMANAGER_H

// Other includes
#include "../views/dockers/timeline/timeline.h"
#include "../views/dockers/onionskin/onionskin.h"

// Qt includes
#include <QObject>
#include <QList>
#include <QMainWindow>

class DockerManager : public QObject
{
    Q_OBJECT
public:
    explicit DockerManager(QMainWindow *parent = 0);

    void renderDockers();

private:
    Timeline* timelineDocker;
    OnionSkin* onionSkinDocker;

    QList<Docker*>* dockers;

    QMainWindow* mainWindow;

signals:

public slots:

};

#endif // DOCKERMANAGER_H
