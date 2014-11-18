#ifndef COLORBUTTON_H
#define COLORBUTTON_H

// Qt includes
#include <QPushButton>

class ColorButton : public QPushButton
{
    Q_OBJECT
public:
    explicit ColorButton(QWidget *parent = 0, QColor color = QColor(Qt::black));

    QColor color();

    void setColor(QColor color);

private:
    QColor selectedColor;

signals:

public slots:

private slots:
    void onClicked();
};

#endif // COLORBUTTON_H
