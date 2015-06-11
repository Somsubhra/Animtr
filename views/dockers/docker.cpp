// Other includes
#include "docker.h"
#include "../mainwindow.h"

Docker::Docker(MainWindow *parent) :
    QDockWidget(parent)
{
    appWindow = parent;
}

MainWindow* Docker::getAppWindow()
{
    return appWindow;
}
