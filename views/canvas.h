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

signals:

public slots:

private:

    /**
     * Resize the image on canvas
     */
    void resizeImage(QImage *image, const QSize &newSize);

private:
    QImage image;
};

#endif // CANVAS_H
