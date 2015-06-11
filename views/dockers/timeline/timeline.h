#ifndef TIMELINE_H
#define TIMELINE_H

// Other includes
#include "../docker.h"
#include "framebox.h"
#include "layerbox.h"

// Forward declarations
class MainWindow;

/**
 * The timeline docker
 */
class Timeline : public Docker
{
    Q_OBJECT
public:
    /**
     * Constructor for timeline class
     */
    explicit Timeline(MainWindow *parent = 0);

    /**
     * Destructor for the timeline class
     */
    ~Timeline();

    /**
     * Returns the default dock widget area
     */
    Qt::DockWidgetArea defaultDockerArea();

private:

    /**
     * The Frame Box
     */
    FrameBox *frameBox;

    /**
     * The Layer Box
     */
    LayerBox *layerBox;

signals:

public slots:

};

#endif // TIMELINE_H
