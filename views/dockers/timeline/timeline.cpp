// Other includes
#include "timeline.h"

// Qt includes
#include <QGridLayout>
#include <QScrollArea>
#include <QSplitter>

Timeline::Timeline(QWidget *parent) :
    Docker(parent)
{
    setWindowTitle(tr("Timeline"));

    QGridLayout* mainLayout = new QGridLayout();
    QWidget* mainWidget = new QWidget(this);

    QScrollArea* layerBoxScrollArea = new QScrollArea(mainWidget);\
    layerBoxScrollArea->setMaximumWidth(250);
    QScrollArea* frameBoxScrollArea = new QScrollArea(mainWidget);

    QSplitter* splitter = new QSplitter(mainWidget);
    splitter->addWidget(layerBoxScrollArea);
    splitter->addWidget(frameBoxScrollArea);

    mainLayout->addWidget(splitter, 0, 0);

    mainWidget->setLayout(mainLayout);
    setWidget(mainWidget);

    setMaximumHeight(200);
}

Qt::DockWidgetArea Timeline::defaultDockerArea()
{
    return Qt::TopDockWidgetArea;
}
