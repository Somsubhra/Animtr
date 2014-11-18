#include "mainwindow.h"

/**
 * The constructor for Main Window class
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);

    dockerManager = new DockerManager(this);
    dockerManager->renderDockers();
}
