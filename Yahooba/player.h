#ifndef PLAYER_H
#define PLAYER_H
#include "card.h"

class Player
{
public:
    Player(int n);
    Card *cards;
    QString playerName;
};

#endif // PLAYER_H
