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
    painter.setBrush(Qt::lightGray);

    painter.drawRect(0, 0, this->width(), this->height());

    painter.setPen(Qt::darkGray);

    int cellWidth = width() / numberOfFrames;

    for(int cellIter = 1; cellIter < numberOfFrames; cellIter++) {
        int x = cellWidth * cellIter;
        int y1 = 0;
        int y2 = height();

        painter.drawLine(x, y1, x, y2);
    }
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
