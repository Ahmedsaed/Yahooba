#ifndef GAME_H
#define GAME_H
#include<QWidget>
#include<QGraphicsView>
#include <QString>
#include "player.h"
#include "deck.h"
#include "round.h"
#include "opponent.h"
#include "welcomescreen.h"

class Game : public QGraphicsView
{
public:
    Game();

    int width, height;
    Opponent *op;
    QGraphicsScene *scene;
    QScreen *screen;
    Player *player;
    Deck *deck;
    Round *round;
    int score = 0;

    const int nRounds = 5;

    void setPlayerName(const QString &newPlayerName);
    void showWelcomeScreen();
    void showGameDeck();
    void clearScene();
    void quitGame();

private:
    WelcomeScreen *welcomScreen;
    QPushButton *muteBtn;
    QPushButton *quitBtn;
    QGraphicsProxyWidget *muteBtnProxy;
    QGraphicsProxyWidget *quitBtnProxy;
};

#endif // GAME_H
