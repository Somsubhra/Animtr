#include "onionskin.h"

#include <QGridLayout>

OnionSkin::OnionSkin(QWidget *parent) :
    QDockWidget(parent)
{
    this->setWindowTitle("Onion Skin");

    QWidget* mainWidget = new QWidget(this);
    QGridLayout* mainLayout = new QGridLayout(mainWidget);

    leftOpacitySelector = new OpacitySelector(mainWidget);
    rightOpacitySelector = new OpacitySelector(mainWidget);

    mainLayout->addWidget(leftOpacitySelector, 0, 0);
    mainLayout->addWidget(rightOpacitySelector, 0, 1);

    mainWidget->setLayout(mainLayout);
    this->setWidget(mainWidget);

    this->setMaximumSize(350, 200);
}
