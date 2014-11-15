#include "dockermanager.h"

DockerManager::DockerManager(QWidget *parent)
{
    timelineDocker = new Timeline(parent);
}

void DockerManager::renderDockers()
{
    timelineDocker->show();
}
