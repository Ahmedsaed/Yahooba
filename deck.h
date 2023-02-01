#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <QGraphicsView>

class Deck : public QGraphicsView
{
public:
    Deck();
    ~Deck();
    QMap<QString, Card*> cards;
    bool state;

    void handleMouseClick(Card *card);
    void initCards();
    void displayCards();
    void startRound();
};

#endif // DECK_H
