#ifndef ONIONSKIN_H
#define ONIONSKIN_H

#include <QDockWidget>
#include <QSpinBox>
#include <QCheckBox>

#include "opacityselector.h"
#include "../../colorbutton.h"

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
