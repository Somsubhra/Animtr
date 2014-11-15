#include "dockermanager.h"

DockerManager::DockerManager(QWidget *parent)
{
    dockers = new QList<QDockWidget*>();

    timelineDocker = new Timeline(parent);
    dockers->append(timelineDocker);
}

void DockerManager::renderDockers()
{
    int numberOfDockers = dockers->size();

    for(int dockerId = 0; dockerId < numberOfDockers; dockerId++) {
        dockers->at(dockerId)->show();
    }
}
