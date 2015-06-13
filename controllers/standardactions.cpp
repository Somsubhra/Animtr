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
    QAction *exitAction = new QAction(tr("Exit"), mainWindow);
    exitAction->setShortcut(QKeySequence("Ctrl+Q"));
    mainWindow->getActionCollection()->addAction("exit", exitAction);
    connect(exitAction, SIGNAL(triggered()), this, SLOT(exitApplication()));
}

void StandardActions::exitApplication()
{
    mainWindow->close();
}
