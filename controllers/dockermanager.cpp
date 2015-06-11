// Other includes
#include "dockermanager.h"

DockerManager::DockerManager(QMainWindow *parent)
{
    mainWindow = parent;

    dockers = new QList<Docker*>();

    timelineDocker = new Timeline(qobject_cast<QWidget*>(parent));
    dockers->append(timelineDocker);

    onionSkinDocker = new OnionSkin(qobject_cast<QWidget*>(parent));
    dockers->append(onionSkinDocker);
}

DockerManager::~DockerManager()
{
    int numberOfDockers = dockers->size();

    for(int dockerId = 0; dockerId < numberOfDockers; dockerId++) {
        delete dockers->at(dockerId);
    }

    if(dockers) {
        delete dockers;
        dockers = 0;
    }
}

void DockerManager::renderDockers()
{
    int numberOfDockers = dockers->size();

    for(int dockerId = 0; dockerId < numberOfDockers; dockerId++) {
        Docker* docker = dockers->at(dockerId);

        mainWindow->addDockWidget(docker->defaultDockerArea(), docker);
    }
}
