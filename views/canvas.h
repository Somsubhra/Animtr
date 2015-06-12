#ifndef CANVAS_H
#define CANVAS_H

// Qt includes
#include <QWidget>
#include <QImage>

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

protected:
    /**
     * The event handler for resize event
     */
    void resizeEvent(QResizeEvent *event);

    /**
     * The event handler for paint event
     */
    void paintEvent(QPaintEvent *event);

    /**
     * The event handler for mouse press event
     */
    void mousePressEvent(QMouseEvent *event);

    /**
     * The event handler for the mouse move event
     */
    void mouseMoveEvent(QMouseEvent *event);

    /**
     * The event handler for the mouse release event
     */
    void mouseReleaseEvent(QMouseEvent *event);

    /**
     * The event handler for any tablet event
     */
    void tabletEvent(QTabletEvent* event);

signals:

public slots:

private:

    /**
     * Resize the image on canvas
     */
    void resizeImage(QImage *image, const QSize &newSize);

    /**
     * Draw line to particular point
     */
    void drawLineTo(const QPoint &endPoint);

private:
    /**
     * The image on canvas
     */
    QImage image;

    /**
     * Whether image is modified or not
     */
    bool isModified;

    /**
     * Whether drawing on canvas currently or not
     */
    bool isDrawing;

    /**
     * The last point while drawing
     */
    QPoint lastPoint;
};

#endif // CANVAS_H
