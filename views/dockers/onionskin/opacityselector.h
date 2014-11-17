#ifndef OPACITYSELECTOR_H
#define OPACITYSELECTOR_H

#include <QWidget>

class OpacitySelector : public QWidget
{
    Q_OBJECT
public:
    explicit OpacitySelector(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent* e);

signals:

public slots:

};

#endif // OPACITYSELECTOR_H
