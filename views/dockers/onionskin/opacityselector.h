#ifndef OPACITYSELECTOR_H
#define OPACITYSELECTOR_H

// Qt includes
#include <QWidget>
#include <QList>

/**
 * The Opacity Selector widget
 */
class OpacitySelector : public QWidget
{
    Q_OBJECT
public:
    /**
     * Constructor for the opacity selector class
     */
    explicit OpacitySelector(QWidget *parent = 0, bool leftToRight = true, int frames = 3,
                             QList<int> opacityValues = QList<int>());

    /**
     * Returns the number of frames in the opacity selector
     */
    int frames();

    /**
     * Returns the current opacity values
     */
    QList<int> opacityValues();

    /**
     * Sets the opacity values
     */
    void setOpacityValues(QList<int> values);

    /**
     * Sets the opacity value at a given frame
     */
    void setOpacityValue(int index, int value);

protected:
    /**
     * Reimplementation of the paint event
     */
    void paintEvent(QPaintEvent* e);

    /**
     * Reimplementation of the mouse press event
     */
    void mousePressEvent(QMouseEvent *e);

private:
    /**
     * Number of frames
     */
    int numberOfFrames;

    /**
     * Orientation of the color selector
     */
    bool isLeftToRight;

    /**
     * List of opacity values
     */
    QList<int> selectedOpacityValues;

signals:

public slots:
    /**
     * Sets number of frames in the opacity selector
     */
    void setFrames(int frames);

};

#endif // OPACITYSELECTOR_H
