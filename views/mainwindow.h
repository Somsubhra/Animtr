#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Other includes
#include "../controllers/dockermanager.h"
#include "../controllers/actioncollection.h"
#include "../controllers/standardactions.h"
#include "../controllers/imageactions.h"
#include "../controllers/animationactions.h"
#include "canvas.h"

// Qt includes
#include <QMainWindow>

/**
 * The Main Window of the application
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    /**
     * Constructor for the MainWindow class
     */
    explicit MainWindow(QWidget *parent = 0);

    /**
     * Destructor for the MainWindow class
     */
    ~MainWindow();

    /**
     * Get the Action Collection of the application
     */
    ActionCollection* getActionCollection();

private:

    /**
     * Create the menu bar
     */
    void createMenuBar();

private:
    /**
     * The docker manager
     */
    DockerManager *dockerManager;

    /**
     * The canvas widget
     */
    Canvas *canvas;

signals:

public slots:

private:

    /**
     * The collection of all actions
     */
    ActionCollection *actionCollection;

    /**
     * The standard actions of the application
     */
    StandardActions *standardActions;

    /**
     * The image actions of the application
     */
    ImageActions *imageActions;

    /**
     * The animations actions of the application
     */
    AnimationActions *animationActions;
};

#endif // MAINWINDOW_H
