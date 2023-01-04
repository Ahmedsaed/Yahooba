#ifndef ROUND_H
#define ROUND_H
#include <QGraphicsView>
#include "card.h"
#include <QObject>

class Round : public QGraphicsView
{
public:
    Round();
    int state; // 0 -> scene not active, 1 -> scene is active and listning to click events, 2 -> handling a click event
    QGraphicsScene *scene;
    int width, height;
    QGraphicsTextItem *header;
    QGraphicsTextItem *text;

    void displayCards();
    void handleMouseClick(Card *card);
    void moveCard(Card *card);
    void startNextRound(Card *playerCard, Card *opCard);

protected:
    int round = 1;
public slots:
    void playRound(Card *playerCard, Card *opCard);
};

#endif // ROUND_H
