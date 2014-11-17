#include "colorbutton.h"

// Qt includes
#include <QPalette>
#include <QColorDialog>

ColorButton::ColorButton(QWidget *parent, QColor color) :
    QPushButton(parent)
{
    setColor(color);

    connect(this, SIGNAL(clicked()), this, SLOT(onClicked()));
}

void ColorButton::onClicked()
{
    setColor(QColorDialog::getColor(selectedColor));
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
