#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Other includes
#include "../controllers/dockermanager.h"
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

    ~MainWindow();

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

};

#endif // MAINWINDOW_H
