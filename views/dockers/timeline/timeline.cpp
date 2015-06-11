// Other includes
#include "timeline.h"
#include "../../mainwindow.h"

// Qt includes
#include <QGridLayout>
#include <QScrollArea>
#include <QSplitter>

Timeline::Timeline(MainWindow *parent) :
    Docker(parent)
{
    setWindowTitle(tr("Timeline"));

    QGridLayout *mainLayout = new QGridLayout();
    QWidget *mainWidget = new QWidget(this);

    QScrollArea *layerBoxScrollArea = new QScrollArea(mainWidget);
    layerBox = new LayerBox(layerBoxScrollArea);
    layerBoxScrollArea->setWidget(layerBox);
    layerBoxScrollArea->setMaximumWidth(250);

    QScrollArea *frameBoxScrollArea = new QScrollArea(mainWidget);
    frameBox = new FrameBox(frameBoxScrollArea);
    frameBoxScrollArea->setWidget(frameBox);

    QSplitter *splitter = new QSplitter(mainWidget);
    splitter->addWidget(layerBoxScrollArea);
    splitter->addWidget(frameBoxScrollArea);

    mainLayout->addWidget(splitter, 0, 0);

    mainWidget->setLayout(mainLayout);
    setWidget(mainWidget);

    setMaximumHeight(200);
}

Timeline::~Timeline()
{
    if(layerBox) {
        delete layerBox;
        layerBox = 0;
    }

    if(frameBox) {
        delete frameBox;
        frameBox = 0;
    }
}

Qt::DockWidgetArea Timeline::defaultDockerArea()
{
    return Qt::TopDockWidgetArea;
}
