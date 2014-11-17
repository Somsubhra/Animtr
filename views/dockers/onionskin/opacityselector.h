#ifndef OPACITYSELECTOR_H
#define OPACITYSELECTOR_H

#include <QWidget>

class OpacitySelector : public QWidget
{
    Q_OBJECT
public:
    explicit OpacitySelector(QWidget *parent = 0, int frames = 3);

    int frames();

protected:
    void paintEvent(QPaintEvent* e);

private:
    int numberOfFrames;

signals:

public slots:
    void setFrames(int frames);

};

#endif // OPACITYSELECTOR_H
