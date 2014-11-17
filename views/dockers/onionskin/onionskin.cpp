#include "onionskin.h"

#include <QGridLayout>

OnionSkin::OnionSkin(QWidget *parent) :
    QDockWidget(parent)
{
    this->setWindowTitle(tr("Onion Skin"));

    QWidget* mainWidget = new QWidget(this);
    QGridLayout* mainLayout = new QGridLayout(mainWidget);

    leftOpacitySelector = new OpacitySelector(mainWidget);
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

    mainLayout->addWidget(onionSkinActiveBox, 0, 0);
    mainLayout->addWidget(leftFramesColorInp, 1, 0);
    mainLayout->addWidget(rightFramesColorInp, 1, 1);
    mainLayout->addWidget(numberLeftFramesInp, 2, 0);
    mainLayout->addWidget(numberRightFramesInp, 2, 1);
    mainLayout->addWidget(leftOpacitySelector, 3, 0);
    mainLayout->addWidget(rightOpacitySelector, 3, 1);

    mainWidget->setLayout(mainLayout);
    this->setWidget(mainWidget);

    this->setMaximumSize(350, 200);
}
