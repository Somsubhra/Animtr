// Other includes
#include "onionskin.h"
#include "../../mainwindow.h"

// Qt includes
#include <QGridLayout>

OnionSkin::OnionSkin(MainWindow *parent) :
    Docker(parent)
{
    setWindowTitle(tr("Onion Skin"));

    QWidget *mainWidget = new QWidget(this);
    QGridLayout *mainLayout = new QGridLayout(mainWidget);

    leftOpacitySelector = new OpacitySelector(mainWidget, false);
    rightOpacitySelector = new OpacitySelector(mainWidget);

    numberLeftFramesInp = new QSpinBox(mainWidget);
    numberLeftFramesInp->setRange(1, 10);
    numberLeftFramesInp->setValue(3);

    numberRightFramesInp = new QSpinBox(mainWidget);
    numberRightFramesInp->setRange(1, 10);
    numberRightFramesInp->setValue(3);

    onionSkinActiveBox = new QCheckBox(tr("Active"), mainWidget);
    onionSkinActiveBox->setChecked(false);

    leftFramesColorInp = new ColorButton(mainWidget, QColor(Qt::red));
    rightFramesColorInp = new ColorButton(mainWidget, QColor(Qt::green));

    connect(numberLeftFramesInp, SIGNAL(valueChanged(int)), leftOpacitySelector, SLOT(setFrames(int)));
    connect(numberRightFramesInp, SIGNAL(valueChanged(int)), rightOpacitySelector, SLOT(setFrames(int)));

    mainLayout->addWidget(onionSkinActiveBox, 0, 0);
    mainLayout->addWidget(leftFramesColorInp, 1, 0);
    mainLayout->addWidget(rightFramesColorInp, 1, 1);
    mainLayout->addWidget(numberLeftFramesInp, 2, 0);
    mainLayout->addWidget(numberRightFramesInp, 2, 1);
    mainLayout->addWidget(leftOpacitySelector, 3, 0);
    mainLayout->addWidget(rightOpacitySelector, 3, 1);

    mainWidget->setLayout(mainLayout);
    setWidget(mainWidget);

    setMaximumSize(350, 200);
}

OnionSkin::~OnionSkin()
{
    if(leftOpacitySelector) {
        delete leftOpacitySelector;
        leftOpacitySelector = 0;
    }

    if(rightOpacitySelector) {
        delete rightOpacitySelector;
        rightOpacitySelector = 0;
    }

    if(numberLeftFramesInp) {
        delete numberLeftFramesInp;
        numberLeftFramesInp = 0;
    }

    if(numberRightFramesInp) {
        delete numberRightFramesInp;
        numberRightFramesInp = 0;
    }

    if(onionSkinActiveBox) {
        delete onionSkinActiveBox;
        onionSkinActiveBox = 0;
    }

    if(leftFramesColorInp) {
        delete leftFramesColorInp;
        leftFramesColorInp = 0;
    }

    if(rightFramesColorInp) {
        delete rightFramesColorInp;
        rightFramesColorInp = 0;
    }
}

Qt::DockWidgetArea OnionSkin::defaultDockerArea()
{
    return Qt::TopDockWidgetArea;
}
