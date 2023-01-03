#include "game.h"
#include <QBrush>
#include <QImage>
#include <QMediaPlayer>
#include "player.h"
#include "deck.h"
#include "welcomescreen.h"
#include <QScreen>
#include <QGuiApplication>

Game::Game(QWidget *parent)
{
    player = new Player(nRounds);
    deck = new Deck();
    WelcomeScreen *screen = new WelcomeScreen();
    screen->show();

    // Play Background music
//    QMediaPlayer * music = new QMediaPlayer();
//    music->setMedia(QUrl("qrc:/sounds/bgsound.mp3"));
//    music->play();
}

void Game::setPlayerName(const QString &newPlayerName)
{
    player->playerName = newPlayerName;
}
