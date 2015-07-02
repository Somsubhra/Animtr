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

    /**
     * Create new file
     */
    void newFile();

    /**
     * Open a file
     */
    void openFile();

    /**
     * Save a file
     */
    void saveFile();

    /**
     * Save a file as
     */
    void saveFileAs();

    /**
     * Export the file to a given format
     */
    void exportFile();

    /**
     * Exit the application
     */
    void exitApplication();

    /**
     * Cut action
     */
    void cut();

    /**
     * Copy action
     */
    void copy();

    /**
     * Paste action
     */
    void paste();

    /**
     * Undo action
     */
    void undo();

    /**
     * Redo action
     */
    void redo();

private:

    /**
     * The main window of the application
     */
    MainWindow *mainWindow;
};

#endif // STANDARDACTIONS_H
