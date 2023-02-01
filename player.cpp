#include "player.h"
#include "game.h"

extern Game * game;

Player::Player(int n)
{
    cards = new Card[n];
}

int Player::addCard(Card *card)
{
    cards[currentCard].setDamage(card->getDamage());
    cards[currentCard].setHealth(card->getHealth());
    cards[currentCard].setName(card->getName());
    cards[currentCard].setType(card->getType());
    cards[currentCard].owner = 0;

    return ++currentCard;
}
