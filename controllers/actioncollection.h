#ifndef ACTIONCOLLECTION_H
#define ACTIONCOLLECTION_H

// Qt includes
#include <QObject>
#include <QHash>
#include <QAction>

/**
 * Collection of all actions across the application
 */
class ActionCollection : public QObject
{
    Q_OBJECT
public:

    /**
     * Constructor for the action collection class
     */
    explicit ActionCollection(QObject *parent = 0);

    /**
     * Destructor for the action collection class
     */
    ~ActionCollection();

    /**
     * Add action to the collection
     */
    void addAction(QString key, QAction *action);

    /**
     * Get the action from the collection
     */
    QAction* action(QString key);

signals:

public slots:

private:

    /**
     * Collection of all the actions
     */
    QHash<QString, QAction*> *actions;
};

#endif // ACTIONCOLLECTION_H
