#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include<QGraphicsView>
#include "card.h"
#include <QString>

class Game : public QGraphicsView
{
public:
    Game(QWidget *parent=0);

    QGraphicsScene *scene;
    Card *card;
    QString playerName;
    QString getPlayerName() const;
    void setPlayerName(const QString &newPlayerName);
};

#endif // GAME_H
