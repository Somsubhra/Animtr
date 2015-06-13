#include "actioncollection.h"

ActionCollection::ActionCollection(QObject *parent)
    : QObject(parent)
{
    actions = new QHash<QString, QAction*>();
}

ActionCollection::~ActionCollection()
{
    if(actions) {
        delete actions;
        actions = 0;
    }
}

void ActionCollection::addAction(QString key, QAction *action)
{
    actions->insert(key, action);
}

QAction* ActionCollection::action(QString key)
{
    if(actions->contains(key)) {
        return actions->value(key);
    } else {
        return 0;
    }
}
