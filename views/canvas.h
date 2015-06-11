#ifndef CANVAS_H
#define CANVAS_H

// Qt includes
#include <QWidget>

// Forward declarations
class MainWindow;

/**
 * The Canvas widget for drawing
 */
class Canvas : public QWidget
{
    Q_OBJECT
public:
    /**
     * Constructor for the canvas class
     */
    explicit Canvas(MainWindow *parent = 0);

    /**
     * Destructor for the canvas class
     */
    ~Canvas();

signals:

public slots:
};

#endif // CANVAS_H
