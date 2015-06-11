// Other includes
#include "canvas.h"
#include "mainwindow.h"

// Qt includes
#include <QPainter>
#include <QPaintEvent>

Canvas::Canvas(MainWindow *parent)
    : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);
}

Canvas::~Canvas()
{

}

void Canvas::resizeEvent(QResizeEvent *event)
{
    if(width() > image.width() || height() > image.height()) {
        int newWidth = qMax(width() + 128, image.width());
        int newHeight = qMax(height() + 128, image.height());
        resizeImage(&image, QSize(newWidth, newHeight));
        update();
    }

    QWidget::resizeEvent(event);
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, image, dirtyRect);
}

void Canvas::resizeImage(QImage *image, const QSize &newSize)
{
    if(image->size() == newSize) {
        return;
    }

    QImage newImage(newSize, QImage::Format_RGB32);
    newImage.fill(qRgb(255, 255, 255));

    QPainter painter(&newImage);
    painter.drawImage(QPoint(0, 0), *image);

    *image = newImage;
}
