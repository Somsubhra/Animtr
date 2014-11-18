// Include other headers
#include "../views/mainwindow.h"

// Include Qt headers
#include <QApplication>

/**
 * The main function of the application
 */
int main(int argc, char** argv) {

    // Create an instance of the application
    QApplication app(argc, argv);

    MainWindow w;
    w.show();

    // Return the exit status of the application
    return app.exec();
}
