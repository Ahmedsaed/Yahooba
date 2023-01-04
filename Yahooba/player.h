#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"

class Player
{
public:
    Player(int n);
    Card *cards;
    QString playerName;

    int addCard(Card *card);
private:
    int currentCard = 0;
};

#endif // PLAYER_H
