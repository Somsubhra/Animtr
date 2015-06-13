// Other includes
#include "standardactions.h"
#include "../views/mainwindow.h"

StandardActions::StandardActions(MainWindow *parent)
    : QObject(parent)
{
    mainWindow = parent;
}

StandardActions::~StandardActions()
{

}

void StandardActions::createStandardActions()
{
    QAction *newAction = new QAction(tr("New"), mainWindow);
    newAction->setShortcut(QKeySequence("Ctrl+N"));
    mainWindow->getActionCollection()->addAction("new", newAction);
    connect(newAction, SIGNAL(triggered()), this, SLOT(newFile()));

    QAction *openAction = new QAction(tr("Open"), mainWindow);
    openAction->setShortcut(QKeySequence("Ctrl+O"));
    mainWindow->getActionCollection()->addAction("open", openAction);
    connect(openAction, SIGNAL(triggered()), this, SLOT(openFile()));

    QAction *saveAction = new QAction(tr("Save"), mainWindow);
    saveAction->setShortcut(QKeySequence("Ctrl+S"));
    mainWindow->getActionCollection()->addAction("save", saveAction);
    connect(saveAction, SIGNAL(triggered()), this, SLOT(saveFile()));

    QAction *saveAsAction = new QAction(tr("Save As"), mainWindow);
    mainWindow->getActionCollection()->addAction("saveas", saveAsAction);
    connect(saveAsAction, SIGNAL(triggered()), this, SLOT(saveFileAs()));

    QAction *exportAction = new QAction(tr("Export"), mainWindow);
    mainWindow->getActionCollection()->addAction("export", exportAction);
    connect(exportAction, SIGNAL(triggered()), this, SLOT(exportFile()));

    QAction *exitAction = new QAction(tr("Exit"), mainWindow);
    exitAction->setShortcut(QKeySequence("Ctrl+Q"));
    mainWindow->getActionCollection()->addAction("exit", exitAction);
    connect(exitAction, SIGNAL(triggered()), this, SLOT(exitApplication()));
}

void StandardActions::newFile()
{

}

void StandardActions::openFile()
{

}

void StandardActions::saveFile()
{

}

void StandardActions::saveFileAs()
{

}

void StandardActions::exportFile()
{

}

void StandardActions::exitApplication()
{
    mainWindow->close();
}
