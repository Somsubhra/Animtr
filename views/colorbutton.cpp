#include "colorbutton.h"

// Qt includes
#include <QPalette>

ColorButton::ColorButton(QWidget *parent, QColor color) :
    QPushButton(parent)
{
    setColor(color);
}

QColor ColorButton::color()
{
    return selectedColor;
}

void ColorButton::setColor(QColor color)
{
    selectedColor = color;

    // Set style to the color button
    setStyleSheet("background-color: " + color.name() + ";");
}
