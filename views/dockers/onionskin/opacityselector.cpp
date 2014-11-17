#include "opacityselector.h"

// Qt includes
#include <QPainter>

OpacitySelector::OpacitySelector(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(100, 80);
}

void OpacitySelector::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);

    QPainter painter(this);

    painter.setPen(Qt::black);
    painter.setBrush(Qt::gray);

    painter.drawRect(0, 0, this->width(), this->height());
}
