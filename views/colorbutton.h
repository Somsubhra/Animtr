#ifndef COLORBUTTON_H
#define COLORBUTTON_H

// Qt includes
#include <QPushButton>

/**
 * The Color Selector button class
 */
class ColorButton : public QPushButton
{
    Q_OBJECT
public:
    /**
     * Constructor for the Color Selector button class
     */
    explicit ColorButton(QWidget *parent = 0, QColor color = QColor(Qt::black));

    /**
     * Returns the color selected by the color selector button
     */
    QColor color();

    /**
     * Set the color for the color selector button
     */
    void setColor(QColor color);

private:
    /**
     * The currently selected color
     */
    QColor selectedColor;

signals:

public slots:

private slots:
    void onClicked();
};

#endif // COLORBUTTON_H
