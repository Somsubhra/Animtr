#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// Other includes
#include "../controllers/dockermanager.h"

// Qt includes
#include <QMainWindow>

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
