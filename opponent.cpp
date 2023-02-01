#include "opponent.h"
#include "game.h"
#include <stdlib.h>
#include <QDebug>

extern Game * game;

Opponent::Opponent()
{
    cards = new Card[game->nRounds];
    chooseCards();
}

void Opponent::chooseCards()
{
    for(int i = 0; i < game->nRounds;) {
        int n = rand() % 15;
        Card *card = game->deck->cards[game->deck->cards.keys()[n]];

        if (card->picked) continue;
        else {
            card->picked = true;
            cards[i].setName(card->getName());
            cards[i].setType(card->getType());
            cards[i].setDamage(card->getDamage());
            cards[i].setHealth(card->getHealth());
            cards[i].owner = 1;
            i++;
        }
    }
}
