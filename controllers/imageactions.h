#ifndef IMAGEACTIONS_H
#define IMAGEACTIONS_H

// Qt includes
#include <QObject>

// Forward declarations
class MainWindow;

/**
 * The Image Actions class
 */
class ImageActions : public QObject
{
    Q_OBJECT
public:

    /**
     * Constructor for the Image Actions class
     */
    explicit ImageActions(MainWindow *parent = 0);

    /**
     * Destructor for the Image Actions class
     */
    ~ImageActions();

    /**
     * Create the image actions
     */
    void createImageActions();

signals:

public slots:
};

#endif // IMAGEACTIONS_H
