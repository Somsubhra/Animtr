#ifndef DOCKERMANAGER_H
#define DOCKERMANAGER_H

// Qt includes
#include <QObject>
#include <QList>

// Other includes
#include "../views/dockers/timeline/timeline.h"

class DockerManager : public QObject
{
    Q_OBJECT
public:
    explicit DockerManager(QWidget *parent = 0);

    void renderDockers();

private:
    Timeline* timelineDocker;

    QList<QDockWidget*>* dockers;

signals:

public slots:

};

#endif // DOCKERMANAGER_H
