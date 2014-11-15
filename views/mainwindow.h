#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Qt includes
#include <QMainWindow>

// Other includes
#include "../controllers/dockermanager.h"

/**
 * The Main Window of the application
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);

private:
    DockerManager* dockerManager;

signals:

public slots:

};

#endif // MAINWINDOW_H
