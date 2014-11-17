#ifndef ONIONSKIN_H
#define ONIONSKIN_H

#include <QDockWidget>

#include "opacityselector.h"

class OnionSkin : public QDockWidget
{
    Q_OBJECT
public:
    explicit OnionSkin(QWidget *parent = 0);

private:
    OpacitySelector* leftOpacitySelector;
    OpacitySelector* rightOpacitySelector;

signals:

public slots:

};

#endif // ONIONSKIN_H
