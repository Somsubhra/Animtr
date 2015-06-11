// Other includes
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);

    dockerManager = new DockerManager(this);
    dockerManager->renderDockers();

    canvas = new Canvas(this);
    setCentralWidget(canvas);
}

MainWindow::~MainWindow()
{
    if(dockerManager) {
        delete dockerManager;
        dockerManager = 0;
    }

    if(canvas) {
        delete canvas;
        canvas = 0;
    }
}
