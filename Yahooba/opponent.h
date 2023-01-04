#ifndef OPPONENT_H
#define OPPONENT_H
#include "card.h"

#include "card.h"
class Opponent
{
public:
    Opponent();
    Card *cards;

    void chooseCards();
};

#endif // OPPONENT_H
