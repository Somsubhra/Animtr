// Other headers
#include "../views/mainwindow.h"

// Qt headers
#include <QApplication>

/**
 * The main function of the application
 */
int main(int argc, char** argv) {

    // Create an instance of the application
    QApplication app(argc, argv);

    // Create an instance of the main window
    MainWindow w;
    w.show();

    // Return the exit status of the application
    return app.exec();
}
