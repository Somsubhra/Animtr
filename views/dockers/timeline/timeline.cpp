// Other includes
#include "timeline.h"

Timeline::Timeline(QWidget *parent) :
    Docker(parent)
{
    setWindowTitle(tr("Timeline"));
}

Qt::DockWidgetArea Timeline::defaultDockerArea()
{
    return Qt::TopDockWidgetArea;
}
