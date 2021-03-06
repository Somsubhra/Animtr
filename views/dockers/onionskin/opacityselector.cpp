// Other includes
#include "opacityselector.h"

// Qt includes
#include <QPainter>
#include <QMouseEvent>

OpacitySelector::OpacitySelector(QWidget *parent, bool leftToRight, int frames, QList<int> opacityValues) :
    QWidget(parent)
{
    setFixedSize(150, 100);

    numberOfFrames = frames;
    isLeftToRight = leftToRight;

    for(int iter = 0; iter < 10; iter++) {
        selectedOpacityValues.append(50);
    }

    if(!opacityValues.isEmpty()) {
        for(int iter = 0; iter < frames; iter++) {
            selectedOpacityValues.replace(iter, opacityValues.at(iter));
        }
    }
}

QList<int> OpacitySelector::opacityValues()
{
    return selectedOpacityValues;
}

void OpacitySelector::setOpacityValues(QList<int> values)
{
    if(values.size() != numberOfFrames) {
        return;
    }

    for(int iter = 0; iter < numberOfFrames; iter++) {
        selectedOpacityValues.replace(iter, values.at(iter));
    }

    repaint();
}

void OpacitySelector::setOpacityValue(int index, int value)
{
    selectedOpacityValues.replace(index, value);

    repaint();
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

    painter.setPen(Qt::black);
    painter.setBrush(Qt::black);

    int x1, x2, y1, y2;

    for(int cellIter = 0; cellIter < numberOfFrames - 1; cellIter++) {
        x1 = cellWidth * cellIter + (cellWidth / 2);
        x2 = x1 + cellWidth;

        y1 = (selectedOpacityValues.at(cellIter) * height()) / 100;
        y2 = (selectedOpacityValues.at(cellIter + 1) * height()) / 100;

        if(!isLeftToRight) {
            x1 = width() - x1;
            x2 = width() - x2;
        }

        painter.drawLine(x1, y1, x2, y2);

        painter.drawEllipse(x1 - 5, y1 - 5, 10, 10);
    }

    if(numberOfFrames == 1) {
        x2 = width() / 2;
        y2 = (selectedOpacityValues.at(0) * height()) / 100;
    }

    painter.drawEllipse(x2 - 5, y2 - 5, 10, 10);
}

void OpacitySelector::mousePressEvent(QMouseEvent *e)
{
    int x = e->x();
    int y = e->y();

    int cell = x / (width() / numberOfFrames);

    if(!isLeftToRight) {
        cell = numberOfFrames - cell - 1;
    }

    setOpacityValue(cell, (y * 100) / height());
}

void OpacitySelector::setFrames(int frames)
{
    numberOfFrames = frames;

    repaint();
}

int OpacitySelector::frames()
{
    return numberOfFrames;
}
