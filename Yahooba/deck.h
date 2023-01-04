#ifndef DECK_H
#define DECK_H
#include "card.h"
#include <QGraphicsView>

class Deck : public QGraphicsView
{
public:
    Deck();
    ~Deck();
    QGraphicsScene *scene;
    QMap<QString, Card*> cards;
    int width, height;
    bool state;

    void handleMouseClick(Card *card);
    void initCards();
    void displayCards();
    void startRound();
};

#endif // DECK_H
