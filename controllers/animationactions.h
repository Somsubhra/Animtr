#ifndef ANIMATIONACTIONS_H
#define ANIMATIONACTIONS_H

// Qt includes
#include <QObject>

// Forward declarations
class MainWindow;

/**
 * The Animation Actions class
 */
class AnimationActions : public QObject
{
    Q_OBJECT
public:

    /**
     * Constructor for the Animations Actions class
     */
    explicit AnimationActions(MainWindow *parent = 0);

    /**
     * Destructor for the Animations Actions class
     */
    ~AnimationActions();

    /**
     * Create the animation actions
     */
    void createAnimationActions();

signals:

public slots:
};

#endif // ANIMATIONACTIONS_H
