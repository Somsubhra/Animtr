#include "opacityselector.h"

// Qt includes
#include <QPainter>

OpacitySelector::OpacitySelector(QWidget *parent, int frames) :
    QWidget(parent)
{
    this->setFixedSize(150, 100);

    numberOfFrames = frames;
}

void OpacitySelector::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

    QPainter painter(this);

    painter.setPen(Qt::gray);
    painter.setBrush(Qt::gray);

    painter.drawRect(0, 0, this->width(), this->height());
}

void OpacitySelector::setFrames(int frames)
{
    numberOfFrames = frames;
    this->repaint();
}

int OpacitySelector::frames()
{
    return numberOfFrames;
}
