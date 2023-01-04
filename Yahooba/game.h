#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include<QGraphicsView>
#include "card.h"
#include <QString>
#include "player.h"
#include "deck.h"
#include "round.h"
#include "opponent.h"

class Game : public QGraphicsView
{
public:
    Game();

    Opponent *op;
    QGraphicsScene *scene;
    Card *card;
    Player *player;
    Deck *deck;
    Round *round;
    int score = 0;

    const int nRounds = 5;

    void setPlayerName(const QString &newPlayerName);
};

#endif // GAME_H
