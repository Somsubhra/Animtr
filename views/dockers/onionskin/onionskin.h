#ifndef ONIONSKIN_H
#define ONIONSKIN_H

// Other includes
#include "opacityselector.h"
#include "../../colorbutton.h"
#include "../docker.h"

// Qt includes
#include <QSpinBox>
#include <QCheckBox>

// Forward declarations
class MainWindow;

/**
 * The Onion skin docker
 */
class OnionSkin : public Docker
{
    Q_OBJECT
public:
    /**
     * Constructor for the onion skin docker class
     */
    explicit OnionSkin(MainWindow *parent = 0);

    /**
     * Destructor for the onion skin docker class
     */
    ~OnionSkin();

    /**
     * Returns the default dock widget area
     */
    Qt::DockWidgetArea defaultDockerArea();

private:
    /**
     * The opacity selector for the left sided frames
     */
    OpacitySelector *leftOpacitySelector;

    /**
     * The opacity selector for the right sided frames
     */
    OpacitySelector *rightOpacitySelector;

    /**
     * Input box for number of left sided frames
     */
    QSpinBox *numberLeftFramesInp;

    /**
     * Input box for number of right sided frames
     */
    QSpinBox *numberRightFramesInp;

    /**
     * Checkbox to toggle activation of onion skinning
     */
    QCheckBox *onionSkinActiveBox;

    /**
     * Color selector for skin color of left sided frames
     */
    ColorButton *leftFramesColorInp;

    /**
     * Color selector for skin color of right sided frames
     */
    ColorButton *rightFramesColorInp;

signals:

public slots:

};

#endif // ONIONSKIN_H
