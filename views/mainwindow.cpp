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

    standardActions = new StandardActions(this);
    standardActions->createStandardActions();

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

    if(standardActions) {
        delete standardActions;
        standardActions = 0;
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

ActionCollection* MainWindow::getActionCollection()
{
    return actionCollection;
}

void MainWindow::createMenuBar()
{
    QMenu *fileMenu = menuBar()->addMenu(tr("File"));
    fileMenu->addAction(actionCollection->action("exit"));

    QMenu *editMenu = menuBar()->addMenu(tr("Edit"));

    QMenu *viewMenu = menuBar()->addMenu(tr("View"));

    QMenu *imageMenu = menuBar()->addMenu(tr("Image"));

    QMenu *animationMenu = menuBar()->addMenu(tr("Animation"));

    QMenu *helpMenu = menuBar()->addMenu(tr("Help"));
}
