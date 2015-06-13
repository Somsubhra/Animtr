// Other includes
#include "mainwindow.h"

// Qt includes
#include <QMenuBar>
#include <QMenu>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    setWindowState(Qt::WindowMaximized);

    actionCollection = new ActionCollection(this);

    dockerManager = new DockerManager(this);
    dockerManager->renderDockers();

    createMenuBar();

    canvas = new Canvas(this);
    setCentralWidget(canvas);
}

MainWindow::~MainWindow()
{
    if(actionCollection) {
        delete actionCollection;
        actionCollection = 0;
    }

    if(dockerManager) {
        delete dockerManager;
        dockerManager = 0;
    }

    if(canvas) {
        delete canvas;
        canvas = 0;
    }
}

void MainWindow::createMenuBar()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("File"));

    QMenu *editMenu = menuBar()->addMenu(tr("Edit"));

    QMenu *viewMenu = menuBar()->addMenu(tr("View"));

    QMenu *imageMenu = menuBar()->addMenu(tr("Image"));

    QMenu *animationMenu = menuBar()->addMenu(tr("Animation"));

    QMenu *helpMenu = menuBar()->addMenu(tr("Help"));
}
