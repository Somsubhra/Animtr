#ifndef TIMELINE_H
#define TIMELINE_H

// Other includes
#include "../docker.h"
#include "framebox.h"
#include "layerbox.h"

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
    explicit Timeline(QWidget *parent = 0);

    /**
     * Returns the default dock widget area
     */
    Qt::DockWidgetArea defaultDockerArea();

    /**
     * The Frame Box
     */
    FrameBox* frameBox;

    /**
     * The Layer Box
     */
    LayerBox* layerBox;

signals:

public slots:

};

#endif // TIMELINE_H
