#ifndef STANDARDACTIONS_H
#define STANDARDACTIONS_H

// Qt includes
#include <QObject>

// Forward declarations
class MainWindow;

/**
 * All the standard actions of the application
 */
class StandardActions : public QObject
{
    Q_OBJECT
public:

    /**
     * Constructor for the standard actions class
     */
    explicit StandardActions(MainWindow *parent = 0);

    /**
     * Destructor for the standard actions classs
     */
    ~StandardActions();

    /**
     * Create all the standard actions
     */
    void createStandardActions();

signals:

public slots:

private:

    /**
     * The main window of the application
     */
    MainWindow *mainWindow;
};

#endif // STANDARDACTIONS_H
