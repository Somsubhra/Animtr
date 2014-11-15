#include "mainwindow.h"

/**
 * The constructor for Main Window class
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{
    this->setWindowState(Qt::WindowMaximized);
}
