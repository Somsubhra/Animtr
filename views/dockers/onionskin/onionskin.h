#ifndef ONIONSKIN_H
#define ONIONSKIN_H

// Other includes
#include "opacityselector.h"
#include "../../colorbutton.h"

// Qt includes
#include <QDockWidget>
#include <QSpinBox>
#include <QCheckBox>

class OnionSkin : public QDockWidget
{
    Q_OBJECT
public:
    explicit OnionSkin(QWidget *parent = 0);

private:
    OpacitySelector* leftOpacitySelector;
    OpacitySelector* rightOpacitySelector;

    QSpinBox* numberLeftFramesInp;
    QSpinBox* numberRightFramesInp;

    QCheckBox* onionSkinActiveBox;

    ColorButton* leftFramesColorInp;
    ColorButton* rightFramesColorInp;

signals:

public slots:

};

#endif // ONIONSKIN_H
