#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include<QGraphicsView>
#include "card.h"
#include <QString>
#include "player.h"
#include "deck.h"

class Game : public QGraphicsView
{
public:
    Game(QWidget *parent=0);

    QGraphicsScene *scene;
    Card *card;
    Player *player;
    Deck *deck;

    const int nRounds = 5;

    void setPlayerName(const QString &newPlayerName);
};

#endif // GAME_H
