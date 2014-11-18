// Other includes
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);

    dockerManager = new DockerManager(this);
    dockerManager->renderDockers();
}
