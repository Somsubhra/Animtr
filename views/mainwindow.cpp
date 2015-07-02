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

    imageActions = new ImageActions(this);
    imageActions->createImageActions();

    animationActions = new AnimationActions(this);
    animationActions->createAnimationActions();

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

    if(imageActions) {
        delete imageActions;
        imageActions = 0;
    }

    if(animationActions) {
        delete animationActions;
        animationActions = 0;
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
    fileMenu->addAction(actionCollection->action("new"));
    fileMenu->addAction(actionCollection->action("open"));
    fileMenu->addAction(actionCollection->action("save"));
    fileMenu->addAction(actionCollection->action("saveas"));
    fileMenu->addSeparator();
    fileMenu->addAction(actionCollection->action("export"));
    fileMenu->addSeparator();
    fileMenu->addAction(actionCollection->action("exit"));

    QMenu *editMenu = menuBar()->addMenu(tr("Edit"));
    editMenu->addAction(actionCollection->action("cut"));
    editMenu->addAction(actionCollection->action("copy"));
    editMenu->addAction(actionCollection->action("paste"));
    editMenu->addSeparator();
    editMenu->addAction(actionCollection->action("undo"));
    editMenu->addAction(actionCollection->action("redo"));

    QMenu *viewMenu = menuBar()->addMenu(tr("View"));

    QMenu *imageMenu = menuBar()->addMenu(tr("Image"));

    QMenu *animationMenu = menuBar()->addMenu(tr("Animation"));

    QMenu *settingsMenu = menuBar()->addMenu(tr("Settings"));

    QMenu *helpMenu = menuBar()->addMenu(tr("Help"));
}
