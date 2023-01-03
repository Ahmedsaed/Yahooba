#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <QGraphicsView>

class Deck : public QGraphicsView
{
public:
    Deck(QWidget *parent=0);
    QGraphicsScene *scene;
    QMap<QString, Card*> cards;
};

#endif // DECK_H
