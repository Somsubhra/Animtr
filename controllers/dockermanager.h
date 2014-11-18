#ifndef DOCKERMANAGER_H
#define DOCKERMANAGER_H

// Other includes
#include "../views/dockers/timeline/timeline.h"
#include "../views/dockers/onionskin/onionskin.h"

// Qt includes
#include <QObject>
#include <QList>

class DockerManager : public QObject
{
    Q_OBJECT
public:
    explicit DockerManager(QWidget *parent = 0);

    void renderDockers();

private:
    Timeline* timelineDocker;
    OnionSkin* onionSkinDocker;

    QList<QDockWidget*>* dockers;

signals:

public slots:

};

#endif // DOCKERMANAGER_H
