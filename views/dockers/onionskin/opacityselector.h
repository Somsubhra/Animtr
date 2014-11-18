#ifndef OPACITYSELECTOR_H
#define OPACITYSELECTOR_H

#include <QWidget>
#include <QList>

class OpacitySelector : public QWidget
{
    Q_OBJECT
public:
    explicit OpacitySelector(QWidget *parent = 0, bool leftToRight = true, int frames = 3,
                             QList<int> opacityValues = QList<int>());

    int frames();

    QList<int> opacityValues();

    void setOpacityValues(QList<int> values);

    void setOpacityValue(int index, int value);

protected:
    void paintEvent(QPaintEvent* e);

private:
    int numberOfFrames;

    bool isLeftToRight;

    QList<int> selectedOpacityValues;

signals:

public slots:
    void setFrames(int frames);

};

#endif // OPACITYSELECTOR_H
